#include "RecordRepository.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

RecordRepository::RecordRepository(Properties^ properties)
{
	this->records = gcnew List<HeadRecordForm^>();
	this->properties = properties;
	//Load("prekol");
}

List<HeadRecordForm^>^ RecordRepository::GetRecords()
{
	return this->records;
}

Object^ MessageLog(Object^ value) {
	MessageBox::Show(value->ToString());
	return value;
}

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

bool RecordRepository::LoadCurrent() {
	if (properties->currentFilename == nullptr) return false;

	return LoadFrom(properties->currentFilename);
}
bool RecordRepository::LoadFrom(String^ filename)
{
	this->records->Clear();

	FileStream^ fs;
	try {
		fs = gcnew FileStream(filename, FileMode::Open);
	}
	catch (...) {
		properties->currentFilename = nullptr;
		return false;
	}
	auto reader = gcnew BinaryReader(fs);

	auto label = reader->ReadString();
	if (label != "comutl-records") {
		properties->currentFilename = nullptr;
		return false;
	}

	int recordCount = reader->ReadInt32();

	HeadRecordForm^ record;

	for (int i = 0; i < recordCount; i++) {
		record = gcnew HeadRecordForm();

		record->type = static_cast<ERecordType>(reader->ReadByte());

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

		records->Add(record);
	}
	reader->Close();

	properties->currentFilename = filename;
	properties->Save();

	isSaved = true;
	return true;
}

bool RecordRepository::SaveCurrent() {
	if (properties->currentFilename == nullptr) return false;

	return SaveAs(properties->currentFilename);
}

bool RecordRepository::SaveAs(String^ filename)
{
	FileStream^ fs;
	try {
		fs = gcnew FileStream(filename, FileMode::Create);
	}
	catch (...) {
		return false;
	}
	auto writer = gcnew BinaryWriter(fs);

	writer->Write("comutl-records");

	writer->Write(this->records->Count);

	for (int i = 0; i < this->records->Count; i++) {
		writer->Write(static_cast<unsigned char>(this->records[i]->type));
		writer->Write(this->records[i]->price);
		writer->Write(this->records[i]->discount);
		writer->Write(static_cast<unsigned char>(this->records[i]->planTarif));
		writer->Write(this->records[i]->termPlan->ToBinary());
		writer->Write(this->records[i]->subsidious);
		writer->Write(this->records[i]->ownerName);
		writer->Write(this->records[i]->EISCode);
		writer->Write(this->records[i]->oblast);
		writer->Write(this->records[i]->city);
		writer->Write(this->records[i]->street);
		writer->Write(this->records[i]->home);
		writer->Write(this->records[i]->statusBalance);
	}
	writer->Close();

	properties->currentFilename = filename;
	properties->Save();

	isSaved = true;
	return true;
}

bool RecordRepository::InitNew() {
	auto filename = NewFilename();
	if (!LoadFrom(filename)) return false;

	return SaveCurrent();
}

void RecordRepository::AddRecord(HeadRecordForm^ record) {
	records->Add(record);
	isSaved = false;
}

HeadRecordForm^ RecordRepository::GetRecord(ERecordType type) { 
	HeadRecordForm^ record = nullptr;
	for (int i = 0; i < records->Count; i++) {
		if (records[i]->type == type) {
			return records[i];
		}
	}

	return nullptr;
}