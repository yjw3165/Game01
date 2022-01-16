//Tick.cpp
#include "Global.h"

void Tick()
{
	if (Key == 'q')
	{
		bisRunning = false;
	}
	else if (Key == 'w')
	{
		PlayerY--;
	}
	else if (Key == 's')
	{
		PlayerY++;
	}
	else if (Key == 'a')
	{
		PlayerX--;
	}
	else if (Key == 'd')
	{
		PlayerX++;
	}

	if (map[PlayerX][PlayerY] == 9)
	{
		bisRunning = false;
	}
}
