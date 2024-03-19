// Mascota Critters.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Granja.h"
#include "Troll.h"

using namespace std;

int main()
{
	cout << "                                                                                     " << endl;
	cout << "                                                                                     " << endl;
	cout << "  ,----..    ,---,                                                                  " << endl;
	cout << " /   /   \\ ,--.' |                                   ,---,                           " << endl;
	cout << "|   :     :|  |  :       ,---.              ,---.  ,---.'|      ,---.                " << endl;
	cout << ".   |  ;. /:  :  :      '   ,'\\            '   ,'\\ |   | :     '   ,'\\   .--.--.     " << endl;
	cout << ".   ; /--` :  |  |,--. /   /   |   ,---.  /   /   |:   : :    /   /   | /  /    '    " << endl;
	cout << ";   | ;    |  :  '   |.   ; ,. :  /     \\.   ; ,. ::     |,-..   ; ,. :|  :  /`./    " << endl;
	cout << "|   : |    |  |   /' :'   | |: : /    / ''   | |: :|   : '  |'   | |: :|  :  ;_      " << endl;
	cout << ".   | '___ '  :  | | |'   | .; :.    ' / '   | .; :|   |  / :'   | .; : \\  \\    `\\   " << endl;
	cout << "'   ; : .'||  |  ' | :|   :    |'   ; :__|   :    |'   : |: ||   :    |  `----.   \\  " << endl;
	cout << "'   | '/  :|  :  :_:,' \\   \\  / '   | '.'|\\   \\  / |   | '/ : \\   \\  /  /  /`--'  / " << endl;
	cout << "|   :    / |  | ,'      `----'  |   :    : `----'  |   :    |  `----'  '--'.     /  " << endl;
	cout << " \\   \\ .'  `--''                 \\   \\  /          /    \\  /             `--'---'   " << endl;
	cout << "  `---`                           `----'           `-'----'                 ,---,    " << endl;
	cout << "                                                                         ,`--.' |    " << endl;
	cout << "    ,---,                                                                |   :  :    " << endl;
	cout << "  .'  .' `\\                                                              '   '  ;    " << endl;
	cout << ",---.'     \\                                              __  ,-.        |   |  |    " << endl;
	cout << "|   |  .`\\  |                                           ,' ,'/ /|        '   :  ;    " << endl;
	cout << ":   : |  '  |  ,--.--.        .--,   ,---.     ,--.--.  '  | |' | ,---.  |   |  '    " << endl;
	cout << "|   ' '  ;  : /       \\     /_ ./|  /     \\   /       \\ |  |   ,'/     \\ '   :  |    " << endl;
	cout << "'   | ;  .  |.--.  .-. | , ' , ' : /    / '  .--.  .-. |'  :  / /    /  |;   |  ;    " << endl;
	cout << "|   | :  |  ' \\__\\/: . ./___/ \\: |.    ' /    \\__\\/: . .|  | ' .    ' / |`---'. |    " << endl;
	cout << "'   : | /  ;  ,\" .--.; | .  \\  ' |'   ; :__   ,\" .--.; |;  : | '   ;   /| `--..`;    " << endl;
	cout << "|   | '` ,/  /  /  ,.  |  \\  ;   :'   | '.'| /  /  ,.  ||  , ; '   |  / |.--,_      " << endl;
	cout << ";   :  .'   ;  :   .'   \\  \\  \\  ;|   :    :;  :   .'   \\---'  |   :    ||    |`.   " << endl;
	cout << "|   ,.'     |  ,     .-./   :  \\  \\\\   \\  / |  ,     .-./       \\   \\  / `-- -`, ;  " << endl;
	cout << "'---'        `--`---'        \\  ' ; `----'   `--`---'            `----'    '---`\"   " << endl;

	int gabiaIndex=0;
	int resposta;
	cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*"<<endl;
	cout << "Benvingut a Chocobo's Caretaker!" << endl;
	cout << "      .---.        .-----------" << endl;
	cout << "     /     \\  __  /    ------" << endl;
	cout << "    / /     \\(  )/    -----" << endl;
	cout << "   //////   ' \\/ `   ---" << endl;
	cout << "  //// / // :    : ---" << endl;
	cout << " // /   /  /`    '--" << endl;
	cout << "//          //..\\\\" << endl;
	cout << "       ====UU====UU====" << endl;
	cout << "          '//'||'\\\\`" << endl;

	cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
	cout << "Aqui tens el teu primer chocobo!" << endl;
	//Crea un nou chocobo amb nivell de gana 5 i nivell d'aborriment 3
	Critter crit(5,3);
	Granja granja(3);
	granja.Add();
	
	granja.MostrarCritters();

	do {

		cout << "Chocobo's Caretaker"<<endl;
		cout << "*------------------------*" << endl;
		cout << "0 - Sortir" << endl;
		cout << "1 - Parlar amb el Chocobo"<<endl;
		cout << "2 - Alimentar al Chocobo" << endl;
		cout << "3 - Jugar amb el teu Chocobo" << endl;
		cout << "4 - Sortir de paseig" << endl;
		cout << "5 - Anar a la granja" << endl;
		cout << "  /\"\"\\      ," << endl;
		cout << " <>^  L____/|" << endl;
		cout << "  `) /`   , /" << endl;
		cout << "   \\ `---' /" << endl;
		cout << "    `'\";\\)`" << endl;
		cout << "    _/_Y" << endl;

		cout << "Que vols fer?: " << endl;
		cin >> resposta;



		switch (resposta) {
		case 0:
			cout << "Fins la proxima!" << endl;
			break;
		case 1:
			//Mostrem l'estat actual del chocobo
			crit.Parlar();
			break;
		case 2:
			//Alimentem al chocobo
			int food;
			cout << "Amb cuantes verdures Gysahl vols alimentar?" << endl;
			cin >> food;

			crit.Alimentar(food);
			cout << "El Chocobo ha menjat totes les verudes!" << endl;
			
			cout << "            _  _" << endl;
			cout << "          ( \\/ )" << endl;
			cout << "           \\  /   .-\"-. " << endl;
			cout << "            \\/   / 4 4 \\" << endl;
			cout << "                 \\_ v _/" << endl;
			cout << "                 //   \\\\" << endl;
			cout << "                 ((     ))" << endl;
			cout << "              =====\"\"===\"\"=======" << endl;
			cout << "                     |||" << endl;
			cout << "                      |" << endl;
		break;
		case 3:
			//Juguem amb el chocobo
			int fun;
			cout << "Quantes hores vols jugar amb el chocobo?" << endl;
			cin >> fun;
			crit.Jugar(fun);
			cout << " ,`````.          _________" << endl;
			cout << "' CiCi  `,       /_  ___   \\" << endl;
			cout << "'  ^_^   `.     /@ \\/@  \\   \\" << endl;
			cout << "` , . , '  `..  \\__/\___/   /" << endl;
			cout << "                 \\_\\/______/" << endl;
			cout << "                 /     /\\\\\\\\" << endl;
			cout << "                |     |\\\\\\\\\\\\" << endl;
			cout << "                 \\      \\\\\\\\\\" << endl;
			cout << "                  \\______/\\\\\\\\     " << endl;
			cout << "            _______ ||_||_______" << endl;
			cout << "           (______(((_(((______(@)" << endl;

			break;
		case 4:
			crit.SortirPaseig();
			break;
		case 5:
			cout << "Revisar la granja" << endl;
			granja.Inter(gabiaIndex);
			break;
		default:
			cout << "La opcio no es valida" << endl;

		}
		crit.PasarTemps();
	} while (resposta != 0);




	return 0;

}