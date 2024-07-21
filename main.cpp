#include <iostream>
#include "laptop.h"
using namespace std;

int main()
{
	CPU cpu("Core i5", "Intel", 3, 10400);
	RAM ram("DDR3", "Exeleram", 4, 540);
	HDD hdd("DATADOMAIN", "Future Tech", "1 TB", 540, 20000);
	laptop lap(cpu, ram, hdd);
	Mouse mus("Genius", 400, 2, false);
	lap.Add_mouse(mus);
	Web_cam camera(500, "1920x1080", 60, "auto");
	lap.Add_web_cam(camera);
	lap.show();
}