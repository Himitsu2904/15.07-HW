#include "Mouse.h"
#include <iostream>
using namespace std;

Mouse::Mouse(string _production, double _price, int _Ghz, bool _wired)
{
	//production.append(_production);
	production = _production;
	price = _price;
	Ghz = _Ghz;
	wired = _wired;
}

void Mouse::Set_wired(bool _wired)
{
	wired = _wired;
}

void Mouse::Set_production(string _production)
{
	production = _production;
}

void Mouse::Set_Ghz(int _Ghz)
{
	if (_Ghz > 0)
	{
		Ghz = _Ghz;
	}
}

void Mouse::Set_price(double _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void Mouse::show()const
{
	cout << "\t---Mouse characteristics---";
	cout << "\nWired: ";
	if (wired == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << "\nProduction: " << production;
	cout << "\nSpeeed = " << Ghz << " Ghz";
	cout << "\nPrice = " << price << endl;
}