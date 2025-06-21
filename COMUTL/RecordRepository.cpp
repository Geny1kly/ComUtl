#include "RecordRepository.h"

using namespace System::IO;
using namespace System::Collections::Generic;

RecordRepository::RecordRepository()
{
	this->records = gcnew List<HeadRecordForm^>();
	//Load("prekol");
}

List<HeadRecordForm^>^ RecordRepository::GetRecords()
{
	return this->records;
}

void RecordRepository::Load(String^ filename)
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
		this->records->Add(gcnew HeadRecordForm(
			static_cast<ERecordType>(reader->ReadByte()),
			reader->ReadDouble(), reader->ReadInt32(), static_cast<EPlanTarif>(reader->ReadByte()),
			DateTime::FromBinary(reader->ReadInt64()), reader->ReadBoolean(), reader->ReadString(),
			reader->ReadString(), reader->ReadString(), reader->ReadString(),
			reader->ReadString(), reader->ReadString(), reader->ReadDouble()
		));
	}
	reader->Close();
}

void RecordRepository::Save(String^ filename)
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

	for (int i = 0; i < this->records->Count; i++) {
		writer->Write(static_cast<unsigned char>(this->records[i]->type));
		writer->Write(this->records[i]->price);
		writer->Write(this->records[i]->discount);
		writer->Write(static_cast<unsigned char>(this->records[i]->planTarif));
		writer->Write(this->records[i]->termPlan.ToBinary());
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