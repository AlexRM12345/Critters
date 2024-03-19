#include "Troll.h"
#include <iostream>
//Declaracio de la classe Troll
Troll::Troll(int hunger, int boredom) : m_hunger(hunger), m_boredom(boredom) {}


/// <summary>
/// Funcio del troll heredada,sobresctrita per actuar amb el troll
/// </summary>
void Troll::Parlar() {
  cout << "Soc el rei de la montanya" << endl;
    cout << "GRRRRRRRRRRRRRRRRRAAAAAAAAAAAAAAAAAGRRR" << endl;
    cout << "El meu nivell de gana es: " << m_hunger << endl;
    cout << "I ara mateix tinc una diversio de: " << m_boredom << endl;
}
/// <summary>
/// Funcio heredada,sobrescrita per "alimentar" el troll
/// </summary>
void Troll::Alimentar() {
    cout << "ÑAM ÑAM ÑAM" <<endl;
    cout << "Et veus molt apetitos...." << endl;
    cout << "*Surts corrents" << endl;
    m_hunger++;
}

/// <summary>
/// Funcio heredada i sobrescrita per sortir de passeig amb el troll
/// </summary>
void Troll::SortirPaseig() {
    cout << "TU?! TREUEM COM UN GOS!?" << endl;
    cout << "JA POTS CORRER INSECTE!!!!" <<endl;
    cout << "* El troll et persegueix carregant un arbre per acabar amb tu *" << endl;
    m_boredom++;    
}
