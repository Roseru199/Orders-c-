#include "InsuredOrder.h"

InsuredOrder::InsuredOrder():Order()
{
    this->company = "Roseru";
    this->amount = 0;
}

InsuredOrder::InsuredOrder(string company, double amount, int id, Date date, Time_ time):Order(id, date, time)
{
    this->company = company;
    this->amount = amount;
}

InsuredOrder::~InsuredOrder()
{
}

void InsuredOrder::setCompany(string company)
{
    this->company = company;
}

void InsuredOrder::setAmount(double amount)
{
    this->amount = amount;
}

double InsuredOrder::getAmount()
{
    return this->amount;
}

string InsuredOrder::getCompany()
{
    return this->company;
}

void InsuredOrder::toString()
{
    cout << "--------------------------------------" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Date: " << this->date.getDay() << "." << this->date.getMonth() << "." << this->date.getYear() << endl;
    cout << "Time: " << this->time.getHour() << "." << this->time.getMinutes() << "." << this->time.getSeconds() << "." << time.getFormat() << endl;
    cout << "Company: " << this->company << endl;
    cout << "Amount: " <<this->amount << endl;
    cout << "--------------------------------------" << endl;
}

ostream& operator<<(ostream& out, const InsuredOrder& obj)
{
    out << obj.id << endl;
    out << obj.date << endl;
    out << obj.time << endl;
    out << obj.amount << endl;
    out << obj.company << endl;
    return out;
}
