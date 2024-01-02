#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Player.h"
#include "setting.h"





void keyevent(Player* P);
int main()
{
	Player P;


	while (1)
	{
		system("cls");
		P.Draw();
		P.KeyEvent();
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