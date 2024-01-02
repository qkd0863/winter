#include "Player.h"
#include "setting.h"



int Player::getX()
{
	return x;
}
int Player::getY()
{
	return y;
}
void Player::setX(int _x)
{
	x = _x;
}
void Player::setY(int _y)
{
	y = _y;
}

void Player::action()
{
	cout << "action" << endl;
}

void Player::Draw()
{
	gotoxy(x * 2, y);
	cout << "P";
}

void Player::Update()
{
	int input = _kbhit();
	if (input)
	{
		int c = 0;
		c = _getch();
		this->KeyEvent(c);
	}
}

void Player::KeyEvent(int input)
{
	gotoxy(0, 12);
	static int a = 0;

	printf("키 입력\n");
	
	switch (input)
	{
	case LEFT:
		if (x <= 1)
			break;
		gotoxy(x * 2, y);
		cout << " ";
		x--;
		break;
	case RIGHT:
		if (x >= Map_x - 1)
			break;
		gotoxy(x * 2, y);
		cout << " ";
		x++;
		break;
	case UP:
		if (y <= 1)
			break;
		gotoxy(x * 2, y);
		cout << " ";
		y--;
		break;
	case DOWN:
		if (y >= Map_y - 1)
			break;
		gotoxy(x * 2, y);
		cout << " ";
		y++;
		break;
	case ESC:
		exit(0);
		break;
	case ENTER:
		this->action();
		break;
	default:
		break;
	}
	gotoxy(0, 13);
	printf("이동\n");

}
