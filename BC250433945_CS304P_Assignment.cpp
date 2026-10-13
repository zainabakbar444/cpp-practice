#include <iostream>
#include <string>
using namespace std;

/*
Name: Zainab Akabr
VU ID: BC250433945
Course: CS304 Object Oriented Programming
Assignment No. 2
*/

//================ Abstract Base Class =================

class TaxPayer
{
protected:
    string PayerName;
    string PayerType;
    float taxRate;

public:
    TaxPayer(string name, string type, float rate)
    {
        PayerName = name;
        PayerType = type;
        taxRate = rate;
    }

    virtual float CalcWithHoldingTax(float propertyCost) = 0;
    virtual void DetailInfo() = 0;

    virtual ~TaxPayer()
    {
        cout << "\nTaxPayer Destructor Called" << endl;
    }
};

//================ Filer Class =================

class FilerTaxPayer : public TaxPayer
{
private:
    string ntn;
    int nFilerYears;

public:
    FilerTaxPayer(string name,
                  string type,
                  float rate,
                  string taxNo,
                  int years)
        : TaxPayer(name, type, rate)
    {
        ntn = taxNo;
        nFilerYears = years;
    }

    float CalcWithHoldingTax(float propertyCost)
    {
        return propertyCost * (taxRate / 100);
    }

    void DetailInfo()
    {
        cout << "\n===== FILER TAX PAYER =====" << endl;
        cout << "Name : " << PayerName << endl;
        cout << "Type : " << PayerType << endl;
        cout << "NTN : " << ntn << endl;
        cout << "Filer Years : " << nFilerYears << endl;
        cout << "Tax Rate : " << taxRate << "%" << endl;
    }

    ~FilerTaxPayer()
    {
        cout << "FilerTaxPayer Destructor Called" << endl;
    }
};

//================ Non Filer Class =================

class NonFilerTaxPayer : public TaxPayer
{
private:
    bool IsEligible;

public:
    NonFilerTaxPayer(string name,
                     string type,
                     float rate)
        : TaxPayer(name, type, rate)
    {
        IsEligible = false;
    }

    float CalcWithHoldingTax(float propertyCost)
    {
        if(propertyCost <= 3000000)
        {
            IsEligible = true;
            return propertyCost * (taxRate / 100);
        }

        IsEligible = false;
        return 0;
    }

    void DetailInfo()
    {
        cout << "\n===== NON FILER TAX PAYER =====" << endl;
        cout << "Name : " << PayerName << endl;
        cout << "Type : " << PayerType << endl;
        cout << "Tax Rate : " << taxRate << "%" << endl;

        cout << "Eligibility : ";

        if(IsEligible)
            cout << "Eligible";
        else
            cout << "Not Eligible";
    }

    ~NonFilerTaxPayer()
    {
        cout << "NonFilerTaxPayer Destructor Called" << endl;
    }
};

//================ Main Function =================

int main()
{
    float propertyCost;

    //------------ Filer ------------

    cout << "Enter Property Cost for Filer : ";
    cin >> propertyCost;

    TaxPayer *payer;

    payer = new FilerTaxPayer(
        "Zainab Akbar",
        "Filer",
        2.5,
        "NTN-2504339",
        3);

    payer->DetailInfo();

    cout << "\nWithholding Tax : "
         << payer->CalcWithHoldingTax(propertyCost)
         << endl;

    delete payer;

    //------------ Non Filer ------------

    cout << "\n\nEnter Property Cost for Non Filer : ";
    cin >> propertyCost;

    payer = new NonFilerTaxPayer(
        "Bilal Ahmad",
        "Non Filer",
        5.0);

    payer->DetailInfo();

    float tax = payer->CalcWithHoldingTax(propertyCost);

    if(tax > 0)
    {
        cout << "\nWithholding Tax : " << tax << endl;
    }
    else
    {
        cout << "\nProperty Cost exceeds 30 lac." << endl;
        cout << "Purchase is not allowed." << endl;
    }

    delete payer;

    return 0;
}