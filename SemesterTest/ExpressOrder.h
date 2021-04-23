#pragma once
#include "Order.h"
class ExpressOrder :
    public Order
{
private:
    int daysToDeliver;
    string courier;
public:
    ExpressOrder();
    ExpressOrder(int daysToDeliver, string courier, int id, Date date, Time_ time);
    ~ExpressOrder();

    void setCourier(string courier);
    void setDaysToDeliver(int daysToDeliver);

    string getCourier();
    int getDaysToDeliver();
    void toString();
    friend ostream& operator<<(ostream& out, const ExpressOrder& obj);
};

