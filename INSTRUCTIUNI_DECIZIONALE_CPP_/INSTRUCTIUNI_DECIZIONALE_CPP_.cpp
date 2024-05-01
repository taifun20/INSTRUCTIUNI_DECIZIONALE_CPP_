
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include "Switch_Homework_.h"

//Global Variables
int intTotalTries = 0;
std::string sTypeUser;
std::string sTypePassword;
bool bReturnLogInValue = false;


bool CE_LogIn_()
{
	if (intTotalTries != 3) { // Daca totalul de incercari nu este egal cu 3 atunci lasam utilizatorul sa isi introduca user-ul

		const std::string sUserName = "Taifun20";
		const std::string sUserPassword = "1243_pass";
		std::cout << "	Type your username to continue !" << std::endl;
		std::cout << "	Username: ";
		std::cin >> sTypeUser;

		// Daca numele de utilizator este corect atunci lasam utilizatorul sa introduca parola
		// In caz contrar apelam din nou functia CE_LogIn_
		if (sUserName == sTypeUser) {
			std::cout << "	Username is correct now enter your password to continue !" << std::endl << std::endl;
			std::cout << "	Password : ";
			std::cin >> sTypePassword;
		

			// Daca parola introdusa este corecta atunci lasam utilizatorul sa intre pe calculator, retunand true
			// In caz contrar apelam din nou functia CE_LogIn_ si incrementam intTotalTries cu 1
			if (sUserPassword == sTypePassword) {
				std::cout << "	Password is correct !" << std::endl;
				bReturnLogInValue = true;
			}
			else {
				std::cout << "	Wrong password, try again !" << std::endl;
				++intTotalTries;

				if (intTotalTries == 2) {
					std::cout << "	You have " << 3 - intTotalTries << " more try !" << std::endl;
				} 
				else {
					std::cout << "	You have " << 3 - intTotalTries << " more tries !" << std::endl;
				}
				std::cout << std::endl;
				
				CE_LogIn_();
			}
		}
		else {
			std::cout << "	Wrong username, try again !" << std::endl << std::endl;
			CE_LogIn_();
		}
	}
	// Daca numarul total de incercari de a introduce parola este egal cu 3 atunci returnam false
	// Si blocam utilizatorul de a intra pe calculator timp de 24 de ore =]
	else if (intTotalTries == 3) {
		std::cout << std::endl;
		std::cout << "	Your account is suspended for 24 hours !" << std::endl;
		bReturnLogInValue = false;
	}
	return bReturnLogInValue;
}

void CE_UserIsLoggedIn_()
{
	// Setam vaiabila bIsUserLoggedIn cu ce va returna functia CE_LogIn_
	bool bIsUserLoggedIn = CE_LogIn_();

	// Daca bIsUserLoggedIn este true atunci printam 3 texte diferite depinzand de ce valoare are intTotalTries
	if (bIsUserLoggedIn) {
		if (intTotalTries == 0) {
			std::cout << "	Good Morning my friend" << std::endl;
		}
		else if (intTotalTries == 1) {
			std::cout << "	Hm did you sleep well ? =]" << std::endl;
		}
		else if (intTotalTries == 2) {
			std::cout << "	Next time try write you password on paper !" << std::endl;
		}
	}
	else {
		std::cout << "	Try recover your account after your account is unsuspended !" << std::endl;
	}
}

void CE_CURS_01_()
{
	bool bIsRaining = true;

	if (bIsRaining == true) {
		std::cout << "Afara ploua, ce melancolie.." << std::endl;
	}
	else if (bIsRaining == false) {
		std::cout << "Ce zi frumoasa" << std::endl;
	}
	std::cout << "Azi mergem la pescuit." << std::endl;
}

void CE_CURS_02_()
{
	int ora_input = 9;

	if (ora_input >= 0 && ora_input <= 24) {

		if (ora_input >= 6 && ora_input <= 11) {
			std::cout << "Buna Dimineata" << std::endl;
		}
		else if (ora_input >= 12 && ora_input <= 17) {
			std::cout << "Buna Ziua" << std::endl;
		}
		else if (ora_input >= 18 && ora_input <= 23) {
			std::cout << "Buna Seara" << std::endl;
		}
		else {
			std::cout << "Nu vreau sa fiu deranjat" << std::endl;
		}

	}
	else {
		std::cout << "Ora invalida !" << std::endl;
	}


	bool bTest = true;
	int intTestVar = 0;

	if (bTest) // bTest == true | Fara {} putem face asta doar pentru o linie
		std::cout << "We are true" << std::endl;
	else 
		std::cout << "We are false" << std::endl;

	intTestVar = 15; // Este luat chiard daca bTest este true sau false !!
	std::cout << intTestVar << std::endl;
}

char CE_Calculator_Calificativ_()
{
	int intScor = 0;

	std::cout << "Introduceti scorul: ";
	std::cin >> intScor;
	std::cout << std::endl;

	if (intScor >= 90 && intScor <= 100) {
		return 'A';
	}
	else if (intScor >= 80 && intScor <= 89) {
		return 'B';
	}
	else if (intScor >= 70 && intScor <= 79) {
		return 'C';
	}
	else if (intScor >= 60 && intScor <= 69) {
		return 'D';
	}
	else if (intScor >= 0 && intScor< 60) {
		return 'E';
	}
	else {
		std::cout << "Scor invalid !" << std::endl;
		CE_Calculator_Calificativ_();
	}
}

void CE_OutScore_()
{
	char charScore = CE_Calculator_Calificativ_();
	std::cout << "Calificativul este " << charScore << " !" << std::endl;
}

void CE_TEMA_01_()
{
	// Tema Piscina
	std::string sIntrareRaspuns = "Nu";
	int intVarsta = 0;

	std::cout << "Doriti sa intrati in Aqua Park ? (Da sau Nu): ";
	std::cin >> sIntrareRaspuns;
	std::cout << std::endl;

	if (sIntrareRaspuns == "Da") {

		std::cout << "Ce varsta aveti ?" << std::endl;
		std::cin >> intVarsta;
		if (intVarsta > 7) {
			std::cout << "Intrarea este 30 RON" << std::endl;
			std::cout << std::endl;
		}
		else if (intVarsta >= 0 && intVarsta <= 7) {
			std::cout << "Intrarea este gratis" << std::endl;
			std::cout << std::endl;
		}
		else {
			std::cout << "Ceva nu este corect ?!" << std::endl;
			CE_TEMA_01_();
		}

	}
	else if (sIntrareRaspuns == "Nu") {
		std::cout << "Va mai asteptam si in alta zi !" << std::endl;
		std::cout << std::endl;
	}
	else {
		std::cout << "Nu am inteles ce ati zis, puteti sa repetati ?" << std::endl;
		CE_TEMA_01_();
	}
}

void CE_TEMA_02_()
{
	// Tema Universitate

	int intPunctaj = 0;

	std::cout << "Cate puncte ai luat la examen ?" << std::endl;
	std::cin >> intPunctaj;
	std::cout << std::endl;

	if (intPunctaj >= 90 && intPunctaj <= 100) {
		std::cout << "Admis !" << std::endl;
		std::cout << std::endl;
	}
	else if (intPunctaj >= 0 && intPunctaj < 90) {
		std::cout << "Respins ! " << std::endl;
		std::cout << std::endl;
	}
	else {
		std::cout << "Introdu un punctaj real (0p - 100p) !" << std::endl;
		CE_TEMA_02_();
	}

}

int CE_TEMA_03_Calculator_(int LocalVenit, int LocalProcent)
{
	int intRezultatImpozit = 0;

	intRezultatImpozit = LocalVenit * LocalProcent / 100;

	return intRezultatImpozit;
}

void CE_TEMA_03_()
{
	//Tema Impozit

	int intVenitAnual = 0;
	int intImpozit = 0;
	bool bValitInput = false;
	std::string sConvertNumber = "";

	std::cout << "Introduceti venitul anual: ";
	std::cin >> intVenitAnual;
	std::cout << std::endl;

	if (intVenitAnual > 0 && intVenitAnual <= 15000) {
		// 10 % impozit
		intImpozit = CE_TEMA_03_Calculator_(intVenitAnual, 10);
		bValitInput = true;
	}
	else if (intVenitAnual > 15000 && intVenitAnual <= 30000) {
		// 15 % impozit
		intImpozit = CE_TEMA_03_Calculator_(intVenitAnual, 15);
		bValitInput = true;
	}
	else if (intVenitAnual > 30000) {
		// 20 % impozit
		intImpozit = CE_TEMA_03_Calculator_(intVenitAnual, 20);
		bValitInput = true;
	}
	else {
		// Numar invalid, reluam functia !
		std::cout << "Valoarea este invalida, introduceti din nou !" << std::endl;
		std::cout << std::endl;
		bValitInput = false;
		CE_TEMA_03_();
	}

	// Aparent cand pun o valoare invalida iar CE_TEMA_03_ este reapelata iar acest cout era apelat de doua ori
	// odata cu valoarea reala de 2700 si adoua oara cu valoarea 0. De asta am adaugat si aceasta variabila bValidInput
	// pentru a fi sigur ca scriem impozitul doar daca suma introdusa este corecta

	if (bValitInput) {
		
		// Pentru format bani
		std::cout.imbue(std::locale(""));
		std::cout << std::fixed << std::setprecision(2);
		//

		std::cout << "Impozitul este de " << intImpozit << " LEI" << std::endl;
		std::cout << std::endl;
	}
	
}

void CE_TEMA_04_()
{
	//Tema Joc de Ghicit Numărul

	/*
	A doua varianta de generare 

	std::srand(static_cast<unsigned int>(std::time(0)));
	int intNumarRandom = (std::rand() % 10) + 1;

	*/

	// Prefer sa folosesc <random>
	// 
	// Inițializează un generator de numere aleatoare cu timpul curent
	std::random_device rd;
	std::mt19937 generator(rd());

	// Creează o distribuție uniformă între 1 și 10
	std::uniform_int_distribution<int> distributie(1, 10);

	int intNumarIntrodus = 0;
	int intNumarRandom = distributie(generator);
	std::string sTryAgain = "";

	std::cout << "Daca va simtiti norocos introduceti un numar de la 1 la 10 =)" << std::endl;
	std::cin >> intNumarIntrodus;
	std::cout << std::endl;

	if (intNumarIntrodus == intNumarRandom) {
		std::cout << "Bravo ai ghicit numarul !" << std::endl;
	}
	else if (intNumarIntrodus < intNumarRandom) {
		std::cout << "Prea mic ! Incearca din nou." << std::endl;
		std::cout << "Numarul era " << intNumarRandom << std::endl;
	}
	else if (intNumarIntrodus > intNumarRandom) {
		std::cout << "Prea mare ! Incearca din nou." << std::endl;
		std::cout << "Numarul era " << intNumarRandom << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Mai vrei o tura ? (Dau sau Nu)" << std::endl;
	std::cin >> sTryAgain;

	if (sTryAgain == "Da" or sTryAgain == "da") {
		std::cout << std::endl;
		CE_TEMA_04_();
	}
	std::cout << std::endl;

}

void CE_Switch_Cours_()
{

	int destination = 0;

	std::cout << "	Where do you want to go ?" << std::endl;
	std::cout << std::endl;
	std::cout << "	1.Rosewood ?" << std::endl;
	std::cout << "	2.Camden Beach ?" << std::endl;
	std::cout << "	3.Downtown Rockport ?" << std::endl;

	std::cout << "	GPS: ";


	std::cin >> destination;

	std::cout << std::endl;


}

void CE_SET_GPS_(int destination)
{
	switch (destination)
	{
	case 1:
		std::cout << "	GPS set to Rosewood";
		break;
	case 2:
		std::cout << "	GPS set to Camden Beach";
		break;
	case 3:
		std::cout << "	GPS set to Downtown Rockport";
		break;
	default:
		std::cout << "	Connection Error, try again !";
		break;
	}
}

void CE_SET_TIME_(int time)
{
	switch (time)
	{
	case 10:
		std::cout << "	TIME is set to 10 !";
		break;
	case 12:
		std::cout << "	TIME is set to 12 !";
		break;
	case 14:
		std::cout << "	TIME is set to 14 !";
		break;
	default:
		std::cout << "	Connection Error, try again !";
		break;
	}
}

void CE_Switch_IF_()
{
	int intSwitch_ = 0;

	std::cout << "	What do you want to do?" << std::endl;
	std::cout << "	1.Set GPS ?" << std::endl;
	std::cout << "	2.Set Time ?" << std::endl;

	std::cout << std::endl;
	std::cout << "	Input: ";

	std::cin >> intSwitch_;
	std::cout << std::endl;

	if (intSwitch_ == 1) {
		CE_SET_GPS_(2);
	}
	else if (intSwitch_ == 2) {
		CE_SET_TIME_(12);
	}
	else {
		CE_SET_GPS_(99);
	}

}

//////////////////// TEMA SWITCH ////////////////////


int main()
{
	// Apelam functia de Log In
	//CE_UserIsLoggedIn_();

	// Aplicatie in grup
	//CE_OutScore_();

	//CE_TEMA_01_();
	//CE_TEMA_02_();
	//CE_TEMA_03_();
	//CE_TEMA_04_();

	CE_Switch_Tema_01_();
	CE_Switch_Tema_02_();
	CE_Switch_Tema_03_();

	CE_Switch_Tema_04_(CE_Set_UserName_());

	return 0;
}

/*
Tema Piscina :

Admisia pentru piscina este gratis pentru copii sub 7 ani.
Programul primeste input varsta.
Task :
	Screti o aplicatie care printeaza gratis daca utilizatorul a introdus varsta de sub 7 ani
	pt cei ii mai mare printati 30 RON





	Tema Universitate :
Pentru a studia la univeristate trebie sa luati la examenul urmator mai mult sau egal cu 90 de punte
din 100 ca sa treceti.
Programul primeste puncte ca inptut.
Task :
	Completati codul sa printeze admis daca puncetle sunt mai mari sau egale cu 90 in caz contrar respins






	Calculator de Impozit
	Scop : Implementează un program care calculează
	impozitul pe venit pe baza venitului introdus de utilizator,
	aplicând diferite rate de impozitare în funcție de venit.

	Specificații :

	Utilizatorul introduce venitul său anual.
	Programul calculează și afișează suma impozitului conform următoarelor praguri :
Până la 15.000 : 10 % impozit
15.001 - 30.000 : 15 % impozit
Peste 30.000 : 20 % impozit
Utilizează if, else if, else pentru a determina pragul de venit și a calcula impozitul.
Exemplu de Input și Output :

Input: 18000
Output : Impozitul tău este de 2700.




Joc de Ghicit Numărul
Scop : Crează un joc simplu în care utilizatorul încearcă să ghicească un număr ales de program între 1 și 10.

Specificații :

	La începutul jocului, programul alege un număr între 1 și 10 (pentru simplificare,
		poți seta numărul manual în cod).(Bonus points daca faceti folosind random din C++)
	Utilizatorul este solicitat să introducă un ghicitor.
	Dacă ghicitorul este prea mare sau prea mic, programul afișează un mesaj corespunzător.
	Dacă ghicitorul este corect, programul felicită utilizatorul.
	Folosește if, else if, else pentru a evalua ghicitorul utilizatorului față de numărul ales.
	Exemplu de Input și Output :

Input: 5
Output : Prea mic!Încearcă din nou.
Input ulterior : 7
Output final: Felicitări!Ai ghicit numărul. 
*/