#include "RecordRepository.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

RecordRepository::RecordRepository()
{
	this->records = gcnew List<HeadRecordForm^>();
	this->records->Add(gcnew HeadRecordForm(
		232, 3, PlanTarif::Monthly, DateTime::Now, false, "asd",
		"asdasdasjdhasjdh", "khmeelee", "krasyliv", "centalna", "wash", 1
	));
}

List<HeadRecordForm^>^ RecordRepository::GetRecords()
{
	return this->records;
}

void RecordRepository::Load(String^ filename)
{
	this->records->Clear();

	auto fs = gcnew FileStream(filename, FileMode::Open);
	auto reader = gcnew BinaryReader(fs);

	int recordCount = reader->ReadInt32();
	for (int i = 0; i < recordCount; i++) {
		this->records->Add(gcnew HeadRecordForm(
			reader->ReadDouble(), reader->ReadInt32(), static_cast<PlanTarif>(reader->ReadByte()),
			DateTime::FromBinary(reader->ReadInt64()), reader->ReadBoolean(), reader->ReadString(),
			reader->ReadString(), reader->ReadString(), reader->ReadString(),
			reader->ReadString(), reader->ReadString(), reader->ReadDouble()
		));
	}
	reader->Close();
}

void RecordRepository::Save(String^ filename)
{
	auto fs = gcnew FileStream(filename, FileMode::Create);
	auto writer = gcnew BinaryWriter(fs);

	writer->Write(this->records->Count);

	for (int i = 0; i < this->records->Count; i++) {
		writer->Write(this->records[i]->price);
		writer->Write(this->records[i]->discount);
		writer->Write(static_cast<unsigned char>(this->records[i]->planTarif));
		writer->Write(this->records[i]->termPlan.ToBinary());
		writer->Write(this->records[i]->subsidious);
		writer->Write(this->records[i]->ownerName);
		writer->Write(this->records[i]->EISCode);
		writer->Write(this->records[i]->region);
		writer->Write(this->records[i]->city);
		writer->Write(this->records[i]->street);
		writer->Write(this->records[i]->home);
		writer->Write(this->records[i]->statusBalance);
	}
	writer->Close();
}