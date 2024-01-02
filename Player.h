#pragma once



class Player
{

	
private:
	int x = 5;int y = 5;	
public:
	int getX();
	int getY();
	void setX(int _x);
	void setY(int _y);
	void action();
	void Draw();
	void KeyEvent();
};
