#include "Critter.h"


using namespace std;
/// <summary>
/// Funcio per parlar amb les mascotes que ens retornaran les seves estadistiques
/// </summary>
void Critter::Parlar()
{
	cout << "Hola! " << endl;
	cout << "El meu nivell de gana es: " << m_Hunger << endl;
	cout<< "I ara mateix tinc una diversio de: "<< m_Boredom << endl;
}

//Funcio que crea un nou critter amb les estadistiques inicials
Critter::Critter(int hunger, int boredom)
{
	cout << "A nascut un nou Chocobo!" << endl;
	m_Hunger = hunger;
	m_Boredom = boredom;
}

/// <summary>
/// Funcio que utilitza un contador per augmentar el nivell de gana i aborriment en cada opcio del jugador
/// </summary>
/// <param name="time">Valor que es restara en cada cicle</param>
void Critter::PasarTemps(int time) {

	int ganaRandom = rand() % 2; // Genera un número aleatorio entre 0 y 1
	int boredRandom = rand() % 2; // Genera un número aleatorio entre 0 y 1


	m_Hunger -= time + ganaRandom; // Incrementar el la gana amb el temps
	m_Boredom -= time; +boredRandom; // Incrementar l'aburriment amb el temps


}





/// <summary>
/// Funcio que permet reduir el nivell daborriment segons les hores que el jugador decideix jugar amb la mascota
/// </summary>
/// <param name="fun"></param>
void Critter::Jugar(int fun) {
	m_Boredom += fun;
	if (m_Boredom < 0) {
		cout << "No pots posar un nivell negatiu d'avorriment al Critter" << endl;
		m_Boredom = 0;
	}	
}
/// <summary>
/// Funcio que permet reduir el nivell de gana segons la quantitat de menjar que li donarem
/// </summary>
/// <param name="food"></param>
void Critter::Alimentar(int food) {
	m_Hunger += food;
	if (m_Hunger < 0) {
		cout << "No pots posar un nivell negatiu de gana al Critter" << endl;
		m_Hunger = 0;
	}
}
/// <summary>
/// Funcio que ens permet sortir a fer un passeig que augmentara la diversio pero baixara la gana 
/// </summary>
void Critter::SortirPaseig()
{
	m_Boredom += 3; // Aumentar la diversión en 3
	m_Hunger -= 1;  // Reducir el hambre en 1
	cout << "Has sortir de paseig amb el teu Chocobo! Us ho heu pasat molt be, pero ara te gana!." << endl;
}




