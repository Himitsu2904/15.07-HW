#define _CRT_SECURE_NO_WARNINGS
#include "HDD.h"
#include <iostream>
using namespace std;

HDD::HDD(string _name, string _production, string _memory, int _Ghz, double _price)
{
	name = _name;
	production = _production;
	memory = _memory;
	Ghz = _Ghz;
	price = _price;
}

void HDD::Set_name(string _name)
{
	name = _name;
}

void HDD::Set_production(string _production)
{
	production = _production;
}

void HDD::Set_memory(string _memory)
{
	memory = _memory;
}

void HDD::Set_Ghz(int _Ghz)
{
	if (_Ghz > 0)
	{
		Ghz = _Ghz;
	}
}

void HDD::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void HDD::show()const
{
	cout << "\t---HDD characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nMemory volume = " << memory;
	cout << "\nGhz = " << Ghz;
	cout << "\nPrice = " << price << endl;
}