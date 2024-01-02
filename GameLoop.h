#pragma once
#include "Player.h"
#include "Map.h"
#include "Object.h"

class GameLoop
{
private:
	Object* O[10];
	Player** SP = nullptr;
	Map** SM = nullptr;
public:
	GameLoop();
	void AddObject(Player *_P);
	void AddObject(Map *_M);
	void Draw();
	void Update();
};

