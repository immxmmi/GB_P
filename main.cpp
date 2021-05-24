#include "Field.h"
#include <iostream>
#include "UnitTest.h"
#include <algorithm> 
#include "Bot1.h"
#include "Bot2.h"
#include"GAME.h"


int main() {
	GAME game;


	game.start();
	game.~GAME();
	return 0;

}