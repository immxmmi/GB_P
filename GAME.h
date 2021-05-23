#pragma once
#include "Bot.h"


class GAME
{
private:
	int LIMIT;
	int BOT_COUNTER;
	static Bot* BOTS[5];
	void choose_BOT(bool TEST);
	void GAME_BOT();
	void BOT_MENU();
	int get_NUMBER_1_5();

protected:
public:
	
	GAME();
	~GAME();
	void gameScore();
	void playGame();
	friend class UnitTest;
};

