#include <iostream>
#include "Chainsaw.h"

using namespace std;

string Chainsaw::getName()
{
	return name;
}

int Chainsaw::getPower()
{
	return power;
}

int Chainsaw::getNumberOfTurnes()
{
	return numberOfTurnes;
}

void Chainsaw::printAll()
{
	cout << "Name: " << name << "\nPower: " << power << "\nNumber Of Turnes: " << numberOfTurnes << "\nVar1: " << var1 << "\nVar2: " << var2 << "\nVar3: " << var3 << "\nVar4: " << var4 << "\n\n";
}

Chainsaw::Chainsaw()
{
}

Chainsaw::Chainsaw(string newName, int newPower, int newNumberOfTurnes, int newVar1 = 1, int newVar2 = 2)
{
	name = newName;
	power = newPower;
	numberOfTurnes = newNumberOfTurnes;
	var1 = newVar1;
	var2 = newVar2;
}


Chainsaw::~Chainsaw()
{
	cout << "Destructor was executed\n";
}
