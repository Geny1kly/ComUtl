#pragma once
#include "HeadRecord.h"

using namespace System;

ref class CalculationRecord {
public:
	DateTime^ date;
	EPlanTarif tariffType;
	double tariffPrice;
	double accrualIndicators;
	double accrualBalance;
	double payedAmount;

	CalculationRecord() {}
};
