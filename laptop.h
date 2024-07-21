#pragma once
#include "CPU.h"
#include "RAM.h"
#include "HDD.h"
#include "Mouse.h"
#include "Web_cam.h"

class laptop
{
	CPU cpu;
	RAM ram;
	HDD hdd;
	Mouse* mouse;
	Web_cam* cam;
	bool mouse_connect;
	bool web_cam_connect;
public:
	laptop(CPU& _cpu, RAM& _ram, HDD& _hdd);
	void Add_mouse(Mouse _mouse);
	void Add_web_cam(Web_cam _cam);
	void Mouse_disconnect();
	void Web_cam_disconnect();
	void show();
	~laptop();
};

