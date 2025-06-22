#include "GlobalRepository.h"

using namespace System;
using namespace System::IO;
using namespace Windows::Forms;

GlobalRepository::GlobalRepository(Properties^ properties)
{
	this->properties = properties;

    GasTariffs = gcnew List<TariffRecord^>();
    WaterTariffs = gcnew List<TariffRecord^>();
    ElectricityTariffs = gcnew List<TariffRecord^>();
}

HeadRecord^ GlobalRepository::GetHeadRecord() {
	switch (mode)
	{
	case Gas:
		return GasHeadRecord;
	case Water:
		return WaterHeadRecord;
	case Electricity:
		return ElectricityHeadRecord;
	}
}
void GlobalRepository::SetHeadRecord(HeadRecord^ record) {
	switch (mode)
	{
	case Gas:
		GasHeadRecord = record;
		break;
	case Water:
		WaterHeadRecord = record;
		break;
	case Electricity:
		ElectricityHeadRecord = record;
		break;
	}
}
List<TariffRecord^>^ GlobalRepository::GetTariffs() {
	switch (mode)
	{
	case Gas:
		return GasTariffs;
	case Water:
		return WaterTariffs;
	case Electricity:
		return ElectricityTariffs;
	}
}

List<IndicatorRecord^>^ GlobalRepository::GetIndicators() {
	switch (mode)
	{
	case Gas:
		return GasIndicators;
	case Water:
		return WaterIndicators;
	case Electricity:
		return ElectricityIndicators;
	}
}

//dialogs
String^ NewFilename() {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();

	saveFileDialog->Title = "Save a ComUTL file";
	saveFileDialog->Filter = "ComUTL (*.cutl)|*.cutl|All files (*.*)|*.*";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->DefaultExt = "cutl";
	saveFileDialog->RestoreDirectory = true;

	saveFileDialog->ShowDialog();

	return saveFileDialog->FileName;
}

String^ OpenFilename() {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

	openFileDialog->Title = "Open a ComUTL file";
	openFileDialog->Filter = "ComUTL (*.cutl)|*.cutl|All files (*.*)|*.*";
	openFileDialog->FilterIndex = 1;
	openFileDialog->RestoreDirectory = true;

	openFileDialog->ShowDialog();

	return openFileDialog->FileName;
}

//writes
void WriteHeadRecord(BinaryWriter^ writer, HeadRecord^ record) {
	writer->Write(!!record);
	if (!record) return;

	writer->Write(record->price);
	writer->Write(record->discount);
	writer->Write(static_cast<unsigned char>(record->planTarif));
	writer->Write(record->termPlan->ToBinary());
	writer->Write(record->subsidious);
	writer->Write(record->ownerName);
	writer->Write(record->EISCode);
	writer->Write(record->oblast);
	writer->Write(record->city);
	writer->Write(record->street);
	writer->Write(record->home);
	writer->Write(record->statusBalance);
}
void WriteTariffRecord(BinaryWriter^ writer, TariffRecord^ record) {
	writer->Write(record->date->ToBinary());
	writer->Write(record->montlyPrice);
	writer->Write(record->yearlyPrice);
}

//reads
HeadRecord^ ReadHeadRecord(BinaryReader^ reader) {
	if (!reader->ReadBoolean()) return nullptr;

	auto record = gcnew HeadRecord();

	record->price = reader->ReadDouble();
	record->discount = reader->ReadInt32();
	record->planTarif = static_cast<EPlanTarif>(reader->ReadByte());
	record->termPlan = gcnew DateTime(reader->ReadInt64());
	record->subsidious = reader->ReadBoolean();
	record->ownerName = reader->ReadString();
	record->EISCode = reader->ReadString();
	record->oblast = reader->ReadString();
	record->city = reader->ReadString();
	record->street = reader->ReadString();
	record->home = reader->ReadString();
	record->statusBalance = reader->ReadDouble();

	return record;
}
TariffRecord^ ReadTariffRecord(BinaryReader^ reader) {
	auto record = gcnew TariffRecord();

	record->date = gcnew DateTime(reader->ReadInt64());
	record->montlyPrice = reader->ReadDouble();
	record->yearlyPrice = reader->ReadDouble();

	return record;
}

//saves
bool GlobalRepository::SaveCurrent() {
	if (!properties->currentFilename) return false;
	SaveAs(properties->currentFilename);
}
bool GlobalRepository::SaveAs(String^ filename)
{
	FileStream^ fs;
	try {
		fs = gcnew FileStream(filename, FileMode::Create);
	}
	catch (...) {
		return false;
	}
	auto writer = gcnew BinaryWriter(fs);

	writer->Write("comutl-data");

	WriteHeadRecord(writer, GasHeadRecord);
	WriteHeadRecord(writer, WaterHeadRecord);
	WriteHeadRecord(writer, ElectricityHeadRecord);

	writer->Write(GasTariffs->Count);
	writer->Write(WaterTariffs->Count);
	writer->Write(ElectricityTariffs->Count);

	for (int i = 0; i < GasTariffs->Count; i++) {
		WriteTariffRecord(writer, GasTariffs[i]);
	}
	for (int i = 0; i < WaterTariffs->Count; i++) {
		WriteTariffRecord(writer, WaterTariffs[i]);
	}
	for (int i = 0; i < ElectricityTariffs->Count; i++) {
		WriteTariffRecord(writer, ElectricityTariffs[i]);
	}

	writer->Close();

	properties->currentFilename = filename;
	properties->Save();

	isSaved = true;

	return true;
}

//loads
bool GlobalRepository::LoadCurrent() {
	if (!properties->currentFilename) return false;
	LoadFrom(properties->currentFilename);
}
bool GlobalRepository::LoadFrom(String^ filename) {
	FileStream^ fs;
	try {
		fs = gcnew FileStream(filename, FileMode::Open);
	}
	catch (...) {
		return false;
	}
	auto reader = gcnew BinaryReader(fs);

	auto label = reader->ReadString();
	if (label != "comutl-data") return false;

	Clear();

	GasHeadRecord = ReadHeadRecord(reader);
	WaterHeadRecord = ReadHeadRecord(reader);
	ElectricityHeadRecord = ReadHeadRecord(reader);

	auto GasTariffsCount = reader->ReadInt32();
	auto WaterTariffsCount = reader->ReadInt32();
	auto ElectricityTariffsCount = reader->ReadInt32();

	for (int i = 0; i < GasTariffsCount; i++) {
		GasTariffs->Add(ReadTariffRecord(reader));
	}
	for (int i = 0; i < WaterTariffsCount; i++) {
		WaterTariffs->Add(ReadTariffRecord(reader));
	}
	for (int i = 0; i < ElectricityTariffsCount; i++) {
		ElectricityTariffs->Add(ReadTariffRecord(reader));
	}

	reader->Close();

	properties->currentFilename = filename;
	properties->Save();

	isSaved = true;

	return true;
}

//init new
bool GlobalRepository::InitNew() {
	properties->currentFilename = nullptr;
	Clear();

	return true;
}

//clear
void GlobalRepository::Clear() {
	GasHeadRecord = nullptr;
	WaterHeadRecord = nullptr;
	ElectricityHeadRecord = nullptr;

	GasTariffs->Clear();
	WaterTariffs->Clear();
	ElectricityTariffs->Clear();
}
