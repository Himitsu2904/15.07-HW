#pragma once
#include <string>
using namespace std;

class Web_cam
{
	string focus;
	string quality;
	double price;
	int FPS;
public:
	Web_cam() = default;
	Web_cam(double _price, string _quality, int _FPS, string _focus);
	string Get_focus()const
	{
		return focus;
	}
	string Get_quality()const
	{
		return quality;
	}
	int Get_FPS()const
	{
		return FPS;
	}
	double Get_price()const
	{
		return price;
	}
	void Set_focus(string _focus);
	void Set_quality(string _quality);
	void Set_FPS(int _FPS);
	void Set_price(double _price);
	void show()const;
};

