#pragma once

#include "HeadRecordForm.h"
using namespace System::Collections::Generic;

public ref class RecordRepository
{
private:
	List<HeadRecordForm^>^ records;

public:
	RecordRepository();

	void Load(String^ filename);
	void Save(String^ filename);
	List<HeadRecordForm^>^ GetRecords();
};