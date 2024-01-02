#include <stdio.h>
#include <conio.h>
#include <windows.h>

const int Map_x = 10;
const int Map_y = 10;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ESC 27
#define ENTER 13

struct Player
{

private:
	int x = 5;int y = 5;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

	void setX(int _x)
	{
		x = _x;
	}
	void setY(int _y)
	{
		y = _y;
	}

	void action()
	{
		printf("action\n");
		_getch();
	}
};

void drawMap(Player P);
void keyevent(Player* P);




int main()
{
	Player P;


	while (1)
	{
		system("cls");
		drawMap(P);
		keyevent(&P);
	}

}






void drawMap(Player P)
{
	for (int i = 0;i < Map_y;i++)
	{
		for (int j = 0;j < Map_x;j++)
		{
			if (P.getX() == j && P.getY() == i)
			{
				printf("P\t");
				continue;
			}
			printf("+\t");
		}
		printf("\n\n");
	}
}
void keyevent(Player *P)
{
	printf("키 입력\n");
	char c = 0;
	c = _getch();
	switch (c)
	{
	case LEFT:	
		if (P->getX() <= 0)
			break;
		P->setX(P->getX() - 1);
		break;
	case RIGHT:
		if (P->getX() >= Map_x - 1)
			break;
		P->setX(P->getX() + 1);
		break;
	case UP:
		if (P->getY() <= 0)
			break;
		P->setY(P->getY() - 1);
		break;
	case DOWN:
		if (P->getY() >= Map_y)
			break;
		P->setY(P->getY() + 1);
		break;
	case ESC:
		exit(0);
		break;
	case ENTER:
		P->action();
		break;
	default:
		break;
	}
	printf("이동\n");
}