#include "TariffRepository.h"

using namespace System::IO;
using namespace System::Collections::Generic;

TariffRepository::TariffRepository()
{
	this->records = gcnew List<TariffRecord^>();
	//Load("prekol");
}

List<TariffRecord^>^ TariffRepository::GetRecords()
{
	return this->records;
}

void TariffRepository::Load()
{
	this->records->Clear();

	FileStream^ fs;
	try {
		fs = gcnew FileStream(filename, FileMode::Open);
	}
	catch (...) {
		return;
	}
	auto reader = gcnew BinaryReader(fs);

	int recordCount = reader->ReadInt32();
	for (int i = 0; i < recordCount; i++) {
		this->records->Add(gcnew TariffRecord(
			gcnew DateTime(reader->ReadInt64()),
			reader->ReadDouble(),
			reader->ReadDouble()
		));
	}
	reader->Close();
}

void TariffRepository::Save()
{
	FileStream^ fs;
	try {
		fs = gcnew FileStream(filename, FileMode::Create);
	}
	catch (...) {
		return;
	}
	auto writer = gcnew BinaryWriter(fs);

	writer->Write(this->records->Count);

	for (int i = 0; i < records->Count; i++) {
		writer->Write(records[i]->date->ToBinary());
		writer->Write(records[i]->montlyPrice);
		writer->Write(records[i]->yearlyPrice);
	}
	writer->Close();
}
