#include "Global.h"

char Key;
bool bisRunning = true;
int PlayerX = 1;
int PlayerY = 1;
int	map[10][10] = {
					{ 1,1,1,1,1,1,1,1,1,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,0,1 },
					{ 1,0,0,0,0,0,0,0,9,1 },
					{ 1,1,1,1,1,1,1,1,1,1 },
};