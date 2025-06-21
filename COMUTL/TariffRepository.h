#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class TariffRecord {
public:
	DateTime^ date;
	double montlyPrice;
	double yearlyPrice;

	TariffRecord(DateTime^ initialDate, double initialMontlyPrice, double initialYearlyPrice) {
		date = initialDate;
		montlyPrice = initialMontlyPrice;
		yearlyPrice = initialYearlyPrice;
	}
};

ref class TariffRepository
{
private:
	List<TariffRecord^>^ records;
	static String^ filename = "tarrifs";

public:
	TariffRepository();

	void Load();
	void Save();
	List<TariffRecord^>^ GetRecords();
};
