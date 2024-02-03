#ifndef BENEFITS_H
#define BENEFITS_H
#include <iostream>
#include <string>
using namespace std;

class Benefits
{
protected:
    string planType;
    double amount;
    string benefitID;
public:
    Benefits()
    {
        planType = "Unknown";
        amount = 0;
        benefitID = "Unknown";
    }

    virtual void read()
    {
        cout << "Enter Plan Type: ";
        getline(cin>>ws,planType);
        cout << "Enter The Amount: ";
        cin >> amount;
        cout << "Enter Benefit ID: ";
        getline(cin>>ws,benefitID);
    }

    virtual void setBenefitID(string benefitID)
    {
        this -> benefitID = benefitID;
    }

    virtual string getBenefitId()
    {
        return benefitID;
    }

     virtual void setPlanType(string planType)
    {
        this ->planType = planType;
    }

    virtual void setAmount(double amount)
    {
        this ->amount = amount;
    }

    virtual string getPlanType()
    {
        return planType;
    }

    virtual double getAmount()
    {
        return amount;
    }

    virtual double calculateBenefit()
    {

    }

    virtual void print()
    {
        cout << "Plan Type -> " <<planType << "\t" << "Amount -> " <<amount << "\t" << "ID -> " <<benefitID <<endl;
    }

};

#endif // BENEFITS_H
