#pragma once
using namespace System;

enum EPlanTarif {
    None,
    Yearly,
    Monthly
};

public ref class HeadRecord
{
public:
    double price;
    int discount;
    EPlanTarif planTarif;
    DateTime^ termPlan;
    bool subsidious;

    String^ ownerName;
    String^ EISCode;

    String^ oblast;
    String^ city;
    String^ street;
    String^ home;

    double statusBalance;

    HeadRecord() {}
};