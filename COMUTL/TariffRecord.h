#pragma once

using namespace System;

ref class TariffRecord {
public:
	DateTime^ date;
	double montlyPrice;
	double yearlyPrice;

	TariffRecord() {}
};
