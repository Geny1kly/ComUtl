#pragma once

#include "Settings.h"

#include "HeadRecord.h"
#include "TariffRecord.h"
#include "IndicatorRecord.h"
#include "CalculationRecord.h"

using namespace System;
using namespace System::Collections::Generic;

String^ NewFilename();
String^ OpenFilename();
String^ GetVeryShortDateString(DateTime^ date);

enum ERecordType {
    Gas,
    Water,
    Electricity
};

ref class GlobalRepository
{
    Properties^ properties;

    HeadRecord^ GasHeadRecord;
    HeadRecord^ WaterHeadRecord;
    HeadRecord^ ElectricityHeadRecord;

    List<TariffRecord^>^ GasTariffs;
    List<TariffRecord^>^ WaterTariffs;
    List<TariffRecord^>^ ElectricityTariffs;

    List<IndicatorRecord^>^ GasIndicators;
    List<IndicatorRecord^>^ WaterIndicators;
    List<IndicatorRecord^>^ ElectricityIndicators;

    List<CalculationRecord^>^ GasCalculations;
    List<CalculationRecord^>^ WaterCalculations;
    List<CalculationRecord^>^ ElectricityCalculations;

public:
    ERecordType mode;

    bool isSaved;

    GlobalRepository(Properties^ properties);

    HeadRecord^ GetHeadRecord();
    void SetHeadRecord(HeadRecord^ record);

    List<TariffRecord^>^ GetTariffs();
    List<IndicatorRecord^>^ GetIndicators();
    List<CalculationRecord^>^ GetCalculations();

	bool SaveCurrent();
	bool SaveAs(String^ filename);
	bool LoadCurrent();
	bool LoadFrom(String^ filename);
	bool InitNew();

    void Clear();
};

