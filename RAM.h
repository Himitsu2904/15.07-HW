#pragma once
#include <string>
using namespace std;

class RAM
{
	string name;
	string production;
	double price;
	int GB;
public:
	RAM() = default;
	RAM(string _name, string _production, int _GB, double _price);
	string Get_name()const
	{
		return name;
	}
	string Get_production()const
	{
		return production;
	}
	int Get_GB()const
	{
		return GB;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_name(string _name);
	void Set_production(string _production);
	void Set_GB(int _GB);
	void Set_price(double _price);
	void show()const;
};

