#pragma once

#include "HeadRecordForm.h"
#include "Settings.h"

using namespace System::Collections::Generic;

String^ NewFilename();
String^ OpenFilename();

public ref class RecordRepository
{
private:
	List<HeadRecordForm^>^ records;
	Properties^ properties;

public:
	bool isSaved;

	RecordRepository(Properties^ settings);

	bool SaveCurrent();
	bool SaveAs(String^ filename);
	bool LoadCurrent();
	bool LoadFrom(String^ filename);
	bool InitNew();

	void AddRecord(HeadRecordForm^ record);

	HeadRecordForm^ GetRecord(ERecordType type);
	List<HeadRecordForm^>^ GetRecords();
};