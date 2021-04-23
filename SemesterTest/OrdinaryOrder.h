#pragma once
#include "Order.h"
class OrdinaryOrder :
	public Order
{
public:
	OrdinaryOrder();
	OrdinaryOrder(int id, Date date, Time_ time);
	~OrdinaryOrder();

	

	friend ostream& operator<<(ostream& out, const OrdinaryOrder& obj);
	void toString();
};

