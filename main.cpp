#include"GAME.h"



int main() {
	GAME game;

	game.start();
	game.~GAME();
	return 0;
}