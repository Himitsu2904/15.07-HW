#pragma once
#include <string>
using namespace std;

class HDD
{
	string name;
	string production;
	string memory;
	double price;
	int Ghz;
public:
	HDD() = default;
	HDD(string _name, string _production, string _memory, int _Ghz, double _price);
	string Get_name()const
	{
		return name;
	}
	string Get_production()const
	{
		return production;
	}
	string Get_memory()const
	{
		return memory;
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
	void Set_memory(string _memory);
	void Set_Ghz(int _Ghz);
	void Set_price(double _price);
	void show()const;
};

