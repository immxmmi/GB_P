#include "Field.h"
#include <iostream>
#include "UnitTest.h"
#include <algorithm> 
#include "Bot1.h"


int main() {
	//
	//
	//UnitTest test;
	Field field;
	//
	Bot1 bot(field);

	field.drawField();
	bot.mining(field);
	field.drawField();


	//test.TEST_FIELD();

//	field.drawField();

	std::cout<<field.sum;
	
	//test.TEST_FIELD();
	
	return 0;

}