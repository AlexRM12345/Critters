#pragma once

#include <vector>
#include "Critter.h"
#include "Troll.h"
 //Classe Granja que controla tot el relacionat amb ella mateixa
class Granja {
public:
    Granja(int spaces = 4);
    void Add();
    void Inter(int gabiaIndex);
    void MostrarCritters();
    void PasarTemps(int time = 1);
    void VisitarTroll();
private:
    vector<Critter> m_critters;
    Troll troll;
};

