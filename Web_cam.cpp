#include "Web_cam.h"
#include <string>
#include <iostream>
using namespace std;

Web_cam::Web_cam(double _price, string _quality, int _FPS, string _focus)
{
	price = _price;
	quality = _quality;
	FPS = _FPS;
	focus = _focus;
}

void Web_cam::Set_focus(string _focus)
{
	focus = _focus;
}

void Web_cam::Set_quality(string _quality)
{
	quality = _quality;
}

void Web_cam::Set_FPS(int _FPS)
{
	FPS = _FPS;
}

void Web_cam::Set_price(double _price)
{
	price = _price;
}

void Web_cam::show() const
{
	cout << "\t---Web camera characteristics---";
	cout << "\nFocus: " << focus;
	cout << "\nQuality: " << quality;
	cout << "\nFPS = " << FPS;
	cout << "\nPrice = " << price << endl;
}
