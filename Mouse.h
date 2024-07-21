#pragma once
#include <string>
using namespace std;

class Mouse
{
	string production;
	double price;
	int Ghz;
	bool wired;
public:
	Mouse() = default;
	Mouse(string _production, double _price, int _Ghz, bool _wired);
	string Get_production()const
	{
		return production;
	}
	bool Get_wired()const
	{
		return wired;
	}
	int Get_Ghz()const
	{
		return Ghz;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_wired(bool _wired);
	void Set_production(string _production);
	void Set_Ghz(int _Ghz);
	void Set_price(double _price);
	void show()const;
};

