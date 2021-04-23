#include "ExpressOrder.h"

void ExpressOrder::toString()
{
	cout << "--------------------------------------" << endl;
	cout << "Id: " << this->id << endl;
	cout << "Date: " << this->date.getDay() << "." << this->date.getMonth() << "." << this->date.getYear() << endl;
	cout << "Time: " << this->time.getHour() << "." << this->time.getMinutes() << "." << this->time.getSeconds() << "." << time.getFormat() << endl;
	cout << "Courier: " << this->courier << endl;
	cout << "daysToDeliver: " << this->daysToDeliver << endl;
	cout << "--------------------------------------" << endl;
}


ExpressOrder::ExpressOrder():Order()
{
	this->courier = "Vasya";
	this->daysToDeliver = daysToDeliver;
}

ExpressOrder::ExpressOrder(int daysToDeliver, string courier, int id, Date date, Time_ time):Order(id,date,time)
{
	this->courier = courier;
	this->daysToDeliver = 1;
}

ExpressOrder::~ExpressOrder()
{
}

void ExpressOrder::setCourier(string courier)
{
	this->courier = courier;
}

void ExpressOrder::setDaysToDeliver(int daysToDeliver)
{
	this->daysToDeliver = daysToDeliver;
}

string ExpressOrder::getCourier()
{
	return this->courier;
}

int ExpressOrder::getDaysToDeliver()
{
	return this->daysToDeliver;
}

ostream& operator<<(ostream& out, const ExpressOrder& obj)
{
	out << obj.id << endl;
	out << obj.date << endl;
	out << obj.time << endl;
	out << obj.courier << endl;
	out << obj.daysToDeliver << endl;
	return out;
}
