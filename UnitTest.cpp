#include "UnitTest.h"
#include <assert.h>
#include "Field.h"
#include <iostream>
void UnitTest::TEST_FIELD(){


		
	std::cout << "TEST_FIELD :  " << std::endl << std::endl << std::endl;
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

	std::cout << std::endl << "FIELD CHECK SUCCESS 0 ERROR"<<std::endl;
	testField->~Field();
	delete(testField);
}

void UnitTest::TEST_BOT()
{





}

void UnitTest::TEST_MENU()
{
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


