#include "Field.h"
#include <iostream>
#include "UnitTest.h"
#include <algorithm> 
#include "Bot1.h"
#include"GAME.h"


int main() {
	//
	//
	UnitTest test;
	Field field;
	//
	Bot1 bot(field);

	//GAME game;
	//game.choose_BOT();

	test.TEST_FIELD();
	test.TEST_BOT();
	test.TEST_GAME();

	//test.TEST_FIELD();

	
	return 0;

}