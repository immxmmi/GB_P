#include "Field.h"
#include <iostream>
#include "UnitTest.h"
#include <algorithm> 
#include "Bot1.h"
#include "Bot2.h"
#include"GAME.h"


int main() {
	UnitTest test;
	GAME game;
	Field field;



	game.playGame();
	test.TEST_UNITTEST();
	test.TEST_FIELD();
	test.TEST_BOT();
	test.TEST_GAME();

	//game.choose_BOT(false);
	
	//field.drawField();
	//std::cout << "Anzahl: " << field.sum << "/" << bot.score<< std::endl;
	//bot.play(field,200);
	//std::cout << "Anzahl: " << field.sum << "/" << bot.score << std::endl;
	//field.drawField();
	//std::cout << "Anzahl: " << field.sum << "/" << bot.score << std::endl;



	//field.drawField(true);
	//sort.sort(field,true);
	//field.drawField(true);
	//sort.reverse(field, true);
	//field.drawField(true);





	
	return 0;

}