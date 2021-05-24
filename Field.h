#pragma once
#include <vector>


//Vector
typedef std::vector<std::vector<std::vector<int>>> vector3D;


class Field
{
private:

	//Zufalls Zahlen von 1-9 
	int rand1_9();
	//MAX zu erreichende SUMME

	// Feld Generieren 3D
	void setFullField(bool TEST);

	//Feld einfügen an einer Bestimmten stelle
	void setField(int x, int y, int z, int value);

	// ZEICHNET DIE GANZEN FELDER AUF
	void drawField(bool TEST);

protected:



public:
	int sum;
	vector3D mine;
	//Constructor
	Field();
	//Destructor
	~Field();


 

	friend class UnitTest;

};

