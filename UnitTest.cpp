#include "UnitTest.h"
#include <assert.h>
#include "Field.h"
#include "Bot1.h"
#include "Bot2.h"
#include "Bot3.h"
#include "Bot4.h"
#include "Bot5.h"
#include "GAME.h"
#include <iostream>
void UnitTest::TEST_FIELD(){
	
	std::cout << "TEST_FIELD :  " << std::endl;
	std::cout << ".....create TEST FIELD" << std::endl;
	Field* testField = new Field();


	//SET RANDOM FELD + VALUE 
	std::cout << std::endl << "TEST SET RANDOM FIELD --> VALUE:  " << std::endl;
	int x = this->rand1_4();
	int y = this->rand1_4();
	int z = this->rand1_9();
	int value = this->rand1_9();
	testField->setField(x, y, z, value);
	assert(testField->mine[x][y][z] == value && "TEST setFIELD"); 
	std::cout << "Feld ["<<x<<"]["<<y<<"]["<<z<<"]="<< value << "--> true" << std::endl;


	// MIN TEST
	std::cout << std::endl << "MIN: " << std::endl;
	std::cout << "TEST FIELD VALUE:  "<< std::endl;
	assert(testField->mine[0][0][0] >= 0 && "Vector TEST Feld 0/0/0");
	assert(testField->mine[0][0][0] < 10 && "Vector TEST Feld 0/0/0");
	std::cout << "Feld [0][0][0] " << "--> true" << std::endl;


	//RANDOM TEST
	std::cout << std::endl << "RANDOM: " << std::endl;
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] >= 0 && "Vector TEST Feld X/Y/Z");
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] <10 && "Vector TEST Feld X/Y/Z");
	std::cout << "Feld [X][Y][Z] " << "--> true" << std::endl;
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] >= 0 && "Vector TEST Feld X/Y/Z");
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] < 10 && "Vector TEST Feld X/Y/Z");
	std::cout << "Feld [X][Y][Z] " << "--> true" << std::endl;
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] >= 0 && "Vector TEST Feld X/Y/Z");
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] < 10 && "Vector TEST Feld X/Y/Z");
	std::cout << "Feld [X][Y][Z] " << "--> true" << std::endl;
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] >= 0 && "Vector TEST Feld X/Y/Z");
	assert(testField->mine[this->rand1_4()][this->rand1_4()][this->rand1_9()] < 10 && "Vector TEST Feld X/Y/Z");
	std::cout << "Feld [X][Y][Z] " << "--> true" << std::endl;



	// MAX TEST
	std::cout<< std::endl << "MAX: "<< std::endl;
	assert(testField->mine[4][0][0] >= 0 && "Vector TEST Feld 4/0/0");
	assert(testField->mine[4][0][0] < 10 && "Vector TEST Feld 4/0/0");
	std::cout << "Feld [4][0][0] " << "--> true" << std::endl;


	assert(testField->mine[0][4][0] >= 0 && "Vector TEST Feld 0/4/0");
	assert(testField->mine[0][4][0] < 10 && "Vector TEST Feld 0/4/0");
	std::cout << "Feld [0][4][0] " << "--> true" << std::endl;


	assert(testField->mine[0][0][9] >= 0 && "Vector TEST Feld 0/0/9");
	assert(testField->mine[0][0][9] < 10 && "Vector TEST Feld 0/0/9");
	std::cout << "Feld [0][0][9] " << "--> true" << std::endl;



	// TEST ZufallsZahlen
	std::cout<< std::endl << "TEST RANDOM NUMBER 1-9:" << std::endl;
	assert(testField->rand1_9() < 10 && "random Zahl ist größer als 9");
	std::cout << "--> true" << std::endl;
	assert(testField->rand1_9() < 10 && "random Zahl ist größer als 9");
	std::cout << "--> true" << std::endl;
	assert(testField->rand1_9() < 10 && "random Zahl ist größer als 9");
	std::cout << "--> true" << std::endl;
	assert(testField->rand1_9() >= 0 && "random Zahl ist kleiner als 0");
	std::cout << "--> true" << std::endl;
	assert(testField->rand1_9() >= 0 && "random Zahl ist kleiner als 0");
	std::cout << "--> true" << std::endl;
	assert(testField->rand1_9() >= 0 && "random Zahl ist kleiner als 0");
	std::cout << "--> true" << std::endl;


	//SUM TEST
	std::cout << "SUM -- SCORE TEST" <<std::endl;
	testField->setFullField(true);
	assert(testField->sum == 250 && "SUMME ist nicht KORREKT");
	std::cout << "--> true" << std::endl;

	testField->setFullField(false);
	assert(testField->sum < 2251 && "SUMME ist größer als das MAXIMUM");
	assert(testField->sum >= 0 && "SUMME ist kleiner als NULL");
	std::cout << "--> true" << std::endl;

	testField->setFullField(false);
	assert(testField->sum < 2251 && "SUMME ist größer als das MAXIMUM");
	assert(testField->sum >= 0 && "SUMME ist kleiner als NULL");
	std::cout << "--> true" << std::endl;

	testField->setFullField(false);
	assert(testField->sum < 2251 && "SUMME ist größer als das MAXIMUM");
	assert(testField->sum >= 0 && "SUMME ist kleiner als NULL");
	std::cout << "--> true" << std::endl;

	// DELETE
	std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	testField->~Field();
	delete(testField);
	std::cout << std::endl << "FIELD CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;

}

void UnitTest::TEST_BOT()
{
	//BOT
	std::cout << "TEST_BOT :  " << std::endl;
	std::cout << ".....create TEST Field" << std::endl;
	Field testField;
	std::cout << ".....create TEST BOT" << std::endl;
	Bot1* testBot1 = new Bot1(testField);
	Bot2* testBot2 = new Bot2(testField);
	Bot3* testBot3 = new Bot3(testField);
	Bot4* testBot4 = new Bot4(testField);
	Bot5* testBot5 = new Bot5(testField);


	//NAV == TRUE
	assert(testBot1->x == 0 && "START X --> VALUE");
	std::cout << "--> true" << std::endl;
	assert(testBot1->y == 0 && "START Y--> VALUE");
	std::cout << "--> true" << std::endl;



	// DELETE
	std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	testField.~Field();
	testBot1->~Bot1();
	testBot2->~Bot2();
	testBot3->~Bot3();
	testBot4->~Bot4();
	testBot5->~Bot5();
	delete(testBot1);
	delete(testBot2);
	delete(testBot3);
	delete(testBot4);
	delete(testBot5);
	std::cout << std::endl << "BOT CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________"<< std::endl << std::endl << std::endl;
}

void UnitTest::TEST_GAME()
{
	//GAME
	std::cout << "TEST_GAME :  " << std::endl;
	std::cout << ".....create TEST GAME" << std::endl;
	GAME* testGAME = new GAME();
	
	//BOT 
	std::cout << std::endl << "CHECK BOTS POINTER" << std::endl;
	assert(testGAME->BOT_COUNTER == 0 && "BOTS --> not EMPTY");
	std::cout << "--> true" << std::endl;
	std::cout << std::endl << "CREATE 5 BOTS" << std::endl;
	testGAME->choose_BOT(true);
	assert(testGAME->BOTS[0] != nullptr && "BOTS --> CREATE");
	std::cout << "--> true" << std::endl;
	assert(testGAME->BOTS[1] != nullptr && "BOTS --> CREATE ");
	std::cout << "--> true" << std::endl;
	assert(testGAME->BOTS[2] != nullptr && "BOTS --> CREATE ");
	std::cout << "--> true" << std::endl;
	assert(testGAME->BOTS[3] != nullptr && "BOTS --> CREATE ");
	std::cout << "--> true" << std::endl;
	assert(testGAME->BOTS[4] != nullptr && "BOTS --> CREATE ");
	std::cout << "--> true" << std::endl;
	assert(testGAME->BOT_COUNTER == 5 && "BOTS --> CREATE ");
	std::cout << "--> true" << std::endl;
	std::cout << std::endl << "CREATE 5 BOTS SUCCESSFUL" << std::endl;

	// DELETE
	std::cout << std::endl << "DELETE OBJEKTS" << std::endl;
	testGAME->~GAME();
	delete(testGAME);
	std::cout << std::endl << "BOT CHECK SUCCESS 0 ERROR" << std::endl;
	std::cout << "_________________________________________________________________" << std::endl << std::endl << std::endl;


}




int UnitTest::rand1_3() {
	return rand() % 3 + 1;
}

int UnitTest::rand1_4() {
	return rand() % 4 + 1;
}
int UnitTest::rand1_5() {
	return rand() % 5 + 1;
}

int UnitTest::rand1_9() {
	return rand() % 9 + 1;
}

int UnitTest::rand1_10() {
	return rand() % 10 + 1;
}

int UnitTest::rand1_15() {
	return rand() % 15 + 1;
}


