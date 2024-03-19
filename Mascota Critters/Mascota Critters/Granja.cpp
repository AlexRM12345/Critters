#include "Granja.h"
#include "Troll.h"
/// <summary>
/// Gestio del espai del vector
/// </summary>
/// <param name="spaces"></param>
Granja::Granja(int spaces) {
    m_critters.reserve(spaces);
}
/// <summary>
/// Funcio per affegir noves mascotes a la granja
/// </summary>
void Granja::Add() {
    string nomPet;
    cout << "Como se llamara la nueva mascota?" << endl;
    cin >> nomPet;

    if (m_critters.size() < m_critters.capacity()) {
        Critter newCritter;
        newCritter.Nom = nomPet;
        m_critters.push_back(newCritter);
        cout << "Se ha añadido una nueva mascota a la granja con el nombre: " << nomPet << endl;
    }
    else {
        cout << "No hay espacio suficiente en la granja para añadir más mascotas." << endl;
    }
}

/// <summary>
/// Funcio que actua com a menu dins de la granja i et permet veure les estadistiques de la mascota
/// Crear una nova mascota i visitar al troll
/// </summary>
/// <param name="gabiaIndex">Retorna els valors dins del vector</param>
void Granja::Inter(int gabiaIndex) {
    if (gabiaIndex < 0 || gabiaIndex >= m_critters.size()) {
        cout << "No hi ha una gabia amb aquest index." << endl;
        return;
    }

    int respuesta;
    cout << "    ___         v             v v     " << endl;
    cout << "   <*,*>      <*,*>          <*,*>            " << endl;
    cout << "   [`-']      [`-']          [`-']          " << endl;
    cout << "    -\"-\"-    -\"-\"-        -\"-\"-  " << endl;

    cout << "Que vols fer a la granja?" << endl;
    cout << "1 - Veure Mascotes" << endl;
    cout << "2 - Nova mascota" << endl;
    cout << "3 - Visitar troll" << endl;
    cout << "0 - Tornar al menú principal" << endl;
    cout << "Selecciona una opcio: ";
    cin >> respuesta;
    //menu 
    switch (respuesta) {
    case 1:
        Granja::MostrarCritters();//Crida de la funcio per mostrar les mascotes dins del array
        break;
    case 2:
        Granja::Add();// Crida la funcio per afegir noves mascotes
        break;
    case 3:
        VisitarTroll(); // Crida la funció per visitar al Troll
        break;
        break;
    case 0:
        cout << "Volviendo al menú principal." << endl;
        break;
    default:
        cout << "Opción inválida." << endl;
    }
    Granja::PasarTemps();//Activem el pas del temps per fer un recompte dels estats
}

/// <summary>
/// Funcio que imprimira per pantalla les criatures dins del vectos fins acabar de llegir tot el vector
/// </summary>
void Granja::MostrarCritters() {

    for (int i = 0; i < m_critters.size(); ++i) {
        cout << "Jaula " << i + 1 << endl;
       m_critters[i].Parlar(); 
        
        cout << endl;
    }
}
/// <summary>
/// Funcio que fa pasar el temps/torn dins de la granja
/// </summary>
/// <param name="time"></param>
void Granja::PasarTemps(int time) {
    for (auto& critter : m_critters) {
        critter.PasarTemps(time);
    }
}


/// <summary>
/// Funcio que permet visitar al troll e interactuar amb ell mitjançant un menu
/// </summary>
void Granja::VisitarTroll() {
    cout << "    ,    ,    /\\   /\\ " << endl;
    cout << "  /( /\\ )\\  _\\ \\_/ /_" << endl;
    cout << "  |\\_||_/| < \\_   _/ >" << endl;
    cout << "  \\______/  \\|0   0|/" << endl;
    cout << "    _\\/_" << "   " << "_(_  ^  _)_" << endl;
    cout << "   ( () ) /`\\|V\"\"\"V|/`\\" << endl;
    cout << "     {}   \\  \\_____/  /" << endl;
    cout << "     ()   /\\   )=(   /\\ " << endl;
    cout << "     {}  /  \\_/\\=/\\_/  \\" << endl;

    cout << "Visitan al troll a la seva cova..." << endl;
    cout << "El troll t'observa." << endl;
    cout << "Es millor no molestarlo gaire..." << endl;
    int opcion;
    cout << "Que vols fer amb el Troll?" << endl;
    cout << "1 - Parlar" << endl;
    cout << "2 - Alimentar" << endl;
    cout << "3 - Sortir a passejar" << endl;
    cout << "0 - Tornar" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    //Menu del troll
    switch (opcion) {
    case 1:
       troll.Parlar();//Funcio que permet parlar amb el troll heredada de critters
        break;
    case 2:
        troll.Alimentar();//Funcio heredada del critters per alimentarlo
        break;
    case 3:
        troll.SortirPaseig();//Funcio heredada y modificada per sortir de passeig amb el troll
        break;
    case 0:
        cout << "Volviendo..." << endl;
        break;
    default:
        cout << "Opció inválida." << endl;
        break;
    }
}

