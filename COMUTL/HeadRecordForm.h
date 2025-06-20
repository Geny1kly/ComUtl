#pragma once
using namespace System;

enum PlanTarif {
    None,
    Yearly,
    Monthly
};

public ref class HeadRecordForm
{
public:
    double price;
    int discount;
    PlanTarif planTarif;
    DateTime termPlan;
    bool subsidious;

    String^ ownerName;
    String^ EISCode;

    String^ region;
    String^ city;
    String^ street;
    String^ home;

    double statusBalance;

    HeadRecordForm(
        double initialPrice,
        int initialDiscount,
        PlanTarif initialPlan,
        DateTime initialTerm,
        bool isSubsidious,

        String^ owner,
        String^ eis,

        String^ newRegion,
        String^ newCity,
        String^ newStreet,
        String^ newHome,
        double initialBalance)
    {
        price = initialPrice;
        discount = initialDiscount;
        planTarif = initialPlan;
        termPlan = initialTerm;
        subsidious = isSubsidious;

        ownerName = owner;
        EISCode = eis;

        region = newRegion;
        city = newCity;
        street = newStreet;
        home = newHome;

        statusBalance = initialBalance;
    }
};