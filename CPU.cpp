#define _CRT_SECURE_NO_WARNINGS
#include "CPU.h"
#include <string>
#include <iostream>
using namespace std;

CPU::CPU(string _name, string _production, int _Ghz, double _price)
{
	name = _name;
	production = _production;
	Ghz = _Ghz;
	price = _price;
}

void CPU::Set_name(string _name)
{
	name = _name;
}

void CPU::Set_production(string _production)
{
	production = _production;
}

void CPU::Set_Ghz(int _Ghz)
{
	if (_Ghz > 0)
	{
		Ghz = _Ghz;
	}
}

void CPU::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void CPU::show()const
{
	cout << "\t---CPU characteristics---";
	cout << "\nName: " << name;
	cout << "\nProduction: " << production;
	cout << "\nSpeeed = " << Ghz << " Ghz";
	cout << "\nPrice = " << price << endl;
}