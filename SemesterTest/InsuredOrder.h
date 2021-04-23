#pragma once
#include "Order.h"
class InsuredOrder :
    public Order
{
private:
    string company;
    double amount;
public:
    InsuredOrder();
    InsuredOrder(string company, double amount, int id, Date date, Time_ time);
    ~InsuredOrder();

    void setCompany(string company);
    void setAmount(double amount);

    double getAmount();
    string getCompany();

    void toString();
    friend ostream& operator<<(ostream& out, const InsuredOrder& obj);
};

