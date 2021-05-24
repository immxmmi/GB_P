#pragma once
#include "Bot.h"


class GAME
{
private:
	int LIMIT;
	int BOT_COUNTER;
	static Bot* BOTS[5];
	void choose_BOT(bool TEST);
	int gameMenu();
	void GAME_BOT();
	void BOT_MENU();
	void GAME_MENU();
	int get_NUMBER_1_5();
	void gameScore();
	void playGame();


protected:
public:
	
	GAME();
	~GAME();
	void start();
	friend class UnitTest;
};

