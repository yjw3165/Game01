#include <iostream>
#include <conio.h>
#include "Global.h"
#include "Input.h"
#include "Render.h"
#include "Tick.h"

using namespace std;

int main()
{
	while(bisRunning)
	{
		Input();
		Tick();
		Render();
	}
	return 0;
}