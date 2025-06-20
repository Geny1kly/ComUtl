#pragma once
using namespace System;

enum EPlanTarif {
    None,
    Yearly,
    Monthly
};

enum ERecordType {
    Gas,
    Water,
    Electricity
};

public ref class HeadRecordForm
{
public:
    ERecordType type;

    double price;
    int discount;
    EPlanTarif planTarif;
    DateTime termPlan;
    bool subsidious;

    String^ ownerName;
    String^ EISCode;

    String^ region;
    String^ city;
    String^ street;
    String^ home;

    double statusBalance;

    HeadRecordForm() {}
    HeadRecordForm(
        ERecordType type,

        double initialPrice,
        int initialDiscount,
        EPlanTarif initialPlan,
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