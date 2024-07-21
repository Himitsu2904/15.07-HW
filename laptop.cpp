#include "laptop.h"
#include <iostream>
using namespace std;

laptop::laptop(CPU& _cpu, RAM& _ram, HDD& _hdd): mouse(nullptr), cam(nullptr) ,mouse_connect(false), web_cam_connect(false)
{
	cpu.Set_name(_cpu.Get_name());
	cpu.Set_Ghz(_cpu.Get_Ghz());
	cpu.Set_production(_cpu.Get_production());
	cpu.Set_price(_cpu.Get_price());
	ram.Set_name(_ram.Get_name());
	ram.Set_production(_ram.Get_production());
	ram.Set_GB(_ram.Get_GB());
	ram.Set_price(_ram.Get_price());
	hdd.Set_name(_hdd.Get_name());
	hdd.Set_production(_hdd.Get_production());
	hdd.Set_memory(_hdd.Get_memory());
	hdd.Set_Ghz(_hdd.Get_Ghz());
	hdd.Set_price(_hdd.Get_price());
}

void laptop::Add_mouse(Mouse* _mouse)
{
	mouse = _mouse;
	mouse_connect = true;
}

void laptop::Add_web_cam(Web_cam* _cam)
{
	cam = _cam;
	web_cam_connect = true;
}

void laptop::Mouse_disconnect()
{
	//delete mouse;
	mouse = nullptr;
	mouse_connect = false;
}

void laptop::Web_cam_disconnect()
{
	//delete cam;
	cam = nullptr;
	web_cam_connect = false;
}

void laptop::show()
{
	cout << "\tLAPTOP COMPONENTS\n";
	cpu.show();
	ram.show();
	hdd.show();
	cout << endl;
	if (mouse != nullptr)
	{
		mouse->show();
	}
	cout << "Mouse connection: ";
	if (mouse_connect == true)
	{
		cout << "On" << endl;
	}
	else
	{
		cout << "Off" << endl;
	}
	cout << endl;
	if (cam != nullptr)
	{
		cam->show();
	}
	cout << "Web camera connection: ";
	if (web_cam_connect == true)
	{
		cout << "On" << endl;
	}
	else
	{
		cout << "Off" << endl;
	}
}