#include "Map.h"
#include "setting.h"

Map::Map()
{
}

void Map::Draw()
{
	for (int i = 0;i <= Map_y;i++)
	{
		for (int j = 0;j <= Map_x;j++)
		{
			gotoxy(j*2, i);
			if (i == 0 || j == 0 || i == Map_y || j == Map_x)
				cout << "+";
			
		}
	}
}

void Map::Update()
{
}
