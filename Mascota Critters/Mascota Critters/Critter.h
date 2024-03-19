#pragma once

//Classe critter amb les seves funcions membres publiques i privades
#include <iostream>
#include <vector>


using namespace std;

//class Granja;

class Critter {
public:
	Critter(int hunger = 0, int boredom = 0);
	void Parlar();
	void Alimentar(int food);
	void Jugar(int fun);
	void PasarTemps(int time = 2);
	void SortirPaseig();
	string Nom;
private:
	int m_Hunger;
	int m_Boredom;


};



