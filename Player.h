#pragma once
#include "Object.h"


class Player :public Object
{

	
private:
	int x = 5;int y = 5;	
public:
	int getX();
	int getY();
	void setX(int _x);
	void setY(int _y);
	void action();
	virtual void Draw();
	virtual void Update();
	void KeyEvent(int input);
};
