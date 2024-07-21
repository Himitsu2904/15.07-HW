#pragma once
#include <string>
using namespace std;

class CPU
{
	string name;
	string production;
	double price;
	int Ghz;
public:
	CPU() = default;
	CPU(string _name, string _production, int _Ghz, double _price);
	string Get_name()const
	{
		return name;
	}
	string Get_production()const
	{
		return production;
	}
	int Get_Ghz()const
	{
		return Ghz;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_name(string _name);
	void Set_production(string _production);
	void Set_Ghz(int _Ghz);
	void Set_price(double _price);
	void show()const;
};

