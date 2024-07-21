#define _CRT_SECURE_NO_WARNINGS
#include "RAM.h"
#include <iostream>
#include <string>
using namespace std;

RAM::RAM(string _name, string _production, int _GB, double _price)
{
	name = _name;
	production = _production;
	GB = _GB;
	price = _price;
}

void RAM::Set_name(string _name)
{
	name = _name;
}

void RAM::Set_production(string _production)
{
	production = _production;
}

void RAM::Set_GB(int _GB)
{
	if (_GB > 0)
	{
		GB = _GB;
	}
}

void RAM::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void RAM::show()const
{
	cout << "\t---RAM characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nMemory volume = " << GB << " GB";
	cout << "\nPrice = " << price << endl;
}