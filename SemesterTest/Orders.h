#pragma once
#include "ExpressOrder.h"
#include "InsuredOrder.h"
#include "OrdinaryOrder.h"

class Orders
{
public:
	list <OrdinaryOrder> ordList;
	list <ExpressOrder> expList;
	list <InsuredOrder> insList;
	void showOrdList(list <OrdinaryOrder> ordList);
	void showExpList(list <ExpressOrder> expList);
	void showInsList(list <InsuredOrder> insList);
	void show();
	template <typename T> void save(T oreder, short k); //short k anything - ordinary,0 - express, 1 - insured; 
	template <typename T> void upload();
	void add();
	void delete_();
};

template<typename T>
inline void Orders::save(T order, short k)
{
	ofstream f;
	f.open("write.txt");
	if (f.is_open())
	{
		
		if (k)
		{
			f << 1 << endl;
			f << order.getAmount() << endl;
			f << order.getCompany() << endl;
			
		}
		else if(k == 0)
		{
			f << 0 << endl;
			f << order.getCourier() << endl;
			f << order.getDaysToDeliver() << endl;
			
		}
		else
		{
			f << 2 << endl;
		}
		f << order.getId() << endl;
		f << order.getTime() << endl;
		f << order.getDate() << endl;
	}
	else cout << "Error" << endl;
	f.close();
}
template<typename T>
inline void Orders::upload()
{
	
	short x;
	int id, daysToDeliver;
	double amount;
	string s, courier, company;
	Time_ time;
	Date date;
	ifstream f;
	f.open("read.txt");
	if (f.is_open())
	{
		if (getline(f, s) && s == "2")
		{
			getline(f, s);
			id = (int)s;
			getline(f, s);
			time = (Time_)s;
			getline(f, s);
			date = (Date)s;
			x = 2;
		}
		else if (getline(f, s) && s == "1")
		{
			getline(f, s);
			amount = (double)s;
			getline(f, s);
			company = s;
			getline(f, s);
			id = (int)s;
			getline(f, s);
			time = (Time_)s;
			getline(f, s);
			date = (Date)s;
			x = 1;
		}
		else  if (getline(f, s) && s == "0")
		{
			getline(f, s);
			courier = s;
			getline(f, s);
			daysToDeliver = (int)s;
			getline(f, s);
			id = (int)s;
			getline(f, s);
			time = (Time_)s;
			getline(f, s);
			date = (Date)s;
			x = 0;
		}
		else cout << "Error" << endl;
	}
	else cout << "Error" << endl;
	f.close();
	if (x == 2)
	{
		OrdinaryOrder ord(id,date,time);
		ordList.push_front(ord);
	}
	else if (x == 1)
	{
		InsuredOrder ins(company,amount,id,date,time);
		insList.push_front(ins);
	}
	else if (x == 0)
	{
		ExpressOrder exp(daysToDeliver,courier,id,date,time);
		expList.push_front(exp);
	}
	else{}
}

