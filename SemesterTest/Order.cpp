#include "Order.h"

Order::Order()
{
	id = 1;
	date.setDay(1);
	date.setMonth(1);
	date.setYear(2000);
	time.setFormat("pm");
	time.setHour(1);
	time.setMinutes(0);
	time.setSeconds(0);
}

Order::Order(int id, Date date, Time_ time)
{
	this->id = id;
	this->date.setDay(date.getDay());
	this->date.setMonth(date.getMonth());
	this->date.setYear(date.getYear());
	this->time.setFormat(time.getFormat());
	this->time.setHour(time.getHour());
	this->time.setMinutes(time.getMinutes());
	this->time.setSeconds(time.getSeconds());
}

Order::~Order()
{
}

void Order::setId(int id)
{
	this->id = id;
}

void Order::setDate(Date date)
{
	this->date = date;
}

void Order::setTime(Time_ time)
{
	this->time = time;
}

int Order::getId()
{
	return this->id;
}

Date Order::getDate()
{
	return this->date;
}

Time_ Order::getTime()
{
	return this->time;
}

void Order::toString()
{
}
