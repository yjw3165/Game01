#include <iostream>
#include "Global.h"

using namespace std;

void Render()
{
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "P" << " ";
			}
			else if (map[Y][X] == 0)
			{
				cout << "O" << " ";
			}
			else if (map[Y][X] == 1)
			{
				cout << "*" << " ";
			}
			else if (map[Y][X] == 9)
			{
				cout << "G" << " ";
			}
		}
		cout << endl;
	}
}