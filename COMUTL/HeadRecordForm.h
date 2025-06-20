#pragma once
using namespace System;

public ref class EquipmentItem
{
public:
    String^ Name;
    String^ Type;
    String^ Department;
    DateTime PurchaseDate;
    double Price;
    bool IsWrittenOff;

    EquipmentItem(String^ name, String^ type, String^ department, DateTime purchaseDate, double price, bool isWrittenOff)
    {
        Name = name;
        Type = type;
        Department = department;
        PurchaseDate = purchaseDate;
        Price = price;
        IsWrittenOff = isWrittenOff;
    }
};