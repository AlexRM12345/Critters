#pragma once
#include "Critter.h"

//Classe Troll, hereda les funcions de Critters

class Troll: public Critter
{
public:
	Troll(int m_hunger = 0, int m_boredom = 0);
	void virtual Parlar();//Funcio heredada
	void virtual Alimentar();//Funcio heredada
	void virtual SortirPaseig();//Funcio heredada

private:
	int m_hunger;
	int m_boredom;
};

