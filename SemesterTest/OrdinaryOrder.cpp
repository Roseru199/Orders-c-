#include "OrdinaryOrder.h"

OrdinaryOrder::OrdinaryOrder()
{
}

OrdinaryOrder::OrdinaryOrder(int id, Date date, Time_ time):Order(id,date,time)
{
}

OrdinaryOrder::~OrdinaryOrder()
{
}


void OrdinaryOrder::toString()
{
	cout << "--------------------------------------" << endl;
	cout << "Id: " << this->id << endl;
	cout << "Date: " << this->date.getDay() << "." << this->date.getMonth() << "." << this->date.getYear() << endl;
	cout << "Time: " << this->time.getHour() << "." << this->time.getMinutes() << "." << this->time.getSeconds() << "." << time.getFormat() << endl;
	cout << "--------------------------------------" << endl;
}

ostream& operator<<(ostream& out, const OrdinaryOrder& obj)
{
	out << obj.id << endl;
	out << obj.date << endl;
	out << obj.time << endl;
	return out;
}
