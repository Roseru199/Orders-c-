#pragma once
#include "libraries.h"
class Order
{
protected:
	int id;
	Date date;
	Time_ time;
public:
	Order();
	Order(int id, Date date,Time_ time);
	~Order();

	void setId(int id);
	void setDate(Date date);
	void setTime(Time_ time);
	int getId();
	Date getDate();
	Time_ getTime();

	virtual void toString();
};

