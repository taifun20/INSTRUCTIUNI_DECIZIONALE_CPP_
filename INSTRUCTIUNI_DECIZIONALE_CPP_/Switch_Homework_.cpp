
//////////////////// TEMA SWITCH ////////////////////
#include <string>
#include <random>
#include "Switch_Homework_.h"

std::string CE_SET_COLOR_(std:: string ColorIndex)
{
	return "\033[" + ColorIndex;

	/*
		ANSI escape color codes :
		Name            FG  BG
		Black           30  40
		Red             31  41
		Green           32  42
		Yellow          33  43
		Blue            34  44
		Magenta         35  45
		Cyan            36  46
		White           37  47
		Bright Black    90  100
		Bright Red      91  101
		Bright Green    92  102
		Bright Yellow   93  103
		Bright Blue     94  104
		Bright Magenta  95  105
		Bright Cyan     96  106
		Bright White    97  107
	*/
}

void CE_CIN_DELAY_()
{
	char cDelayChar_;
	std::cout << CE_SET_COLOR_("90m");

	std::cout << std::endl;
	std::cout << "	Press " << CE_SET_COLOR_("93m") << "ENTER" << CE_SET_COLOR_("90m") << " to continue !";
	std::cin >> cDelayChar_;
}

void CE_Switch_01_(int switch_number_, int danger_level)
{
	switch(switch_number_) {
	case 0:
		std::cout << CE_SET_COLOR_("90m") << "	Danger level: " << CE_SET_COLOR_("32m") << danger_level << CE_SET_COLOR_("90m") << std::endl;
		std::cout << "	I can handle this" << std::endl;
		break;
	case 1:
		std::cout << CE_SET_COLOR_("90m") << "	Danger level: " << CE_SET_COLOR_("93m") << danger_level << CE_SET_COLOR_("90m") << std::endl;
		std::cout << "	Hmm, i can use some help" << std::endl;
		break;
	case 2:
		std::cout << CE_SET_COLOR_("90m") << "	Danger level: " << CE_SET_COLOR_("91m") << danger_level << CE_SET_COLOR_("90m") << std::endl;
		std::cout << "	Good luck Batman, you are on your own!" << std::endl;
		break;
	default:
		std::cout << CE_SET_COLOR_("90m") << "	Error, Index Invalid !!!" << std::endl << "index supported 0 - 2 !" << std::endl;
		break;
	}
}


void CE_Switch_02_(int switch_number_)
{
	switch (switch_number_) {
	case 0:
		std::cout << CE_SET_COLOR_("93m");
		std::cout << "	EGALITATE !!" << std::endl;
		break;
	case 1:
		std::cout << CE_SET_COLOR_("91m");
		std::cout << "	Ai pierdut !!" << std::endl;
		break;
	case 2:
		std::cout << CE_SET_COLOR_("92m");
		std::cout << "	Ai castigat !!" << std::endl;
		break;
	default:
		std::cout << CE_SET_COLOR_("90m") << "	Error, Index Invalid !!!" << std::endl << "index supported 0 - 2 !" << std::endl;
		break;
	}
}

void CE_Switch_Tema_01_()
{
	system("cls");

	std::random_device rd;
	std::uniform_int_distribution<int> distribution(1, 20);
	std::mt19937 generator(rd());

	int intRandomNum = distribution(generator);

	if (intRandomNum >= 1 && intRandomNum < 5) {
		CE_Switch_01_(0, intRandomNum);
	}
	else if (intRandomNum >= 5 && intRandomNum <= 10) {
		CE_Switch_01_(1, intRandomNum);
	}
	else if (intRandomNum > 10) {
		CE_Switch_01_(2, intRandomNum);
	}

	CE_CIN_DELAY_();
}

void CE_Switch_Tema_02_()
{
	system("cls");

	int intNumarCulori = 0, fTVA = 0, fPretTotal = 0;
	float fPretKitArta = 40.00;
	float fPretCulori = 5.00;

	std::cout << CE_SET_COLOR_("90m");
	std::cout << "	Pentru a picta capodopera de arta voma avea nevoie de: " << std::endl << std::endl;

	std::cout << "	Pensulele si panza - " << CE_SET_COLOR_("93m") << "40.00 lei" << CE_SET_COLOR_("90m") << std::endl;
	std::cout << "	Culoare - " << CE_SET_COLOR_("93m") << "5.00 lei" << CE_SET_COLOR_("90m") << std::endl;
	std::cout << "	Taxa este de " << CE_SET_COLOR_("97m") << "10%" << CE_SET_COLOR_("90m") << std::endl << std::endl;

	std::cout << "	De cate culori ai nevoie ?" << std::endl;

	std::cin >> intNumarCulori;

	std::cout << "	Deci avem " << CE_SET_COLOR_("93m") << intNumarCulori << CE_SET_COLOR_("90m") << " culori care vor costa " << CE_SET_COLOR_("93m");
	std::cout << intNumarCulori * fPretCulori << " lei." << CE_SET_COLOR_("90m") << std::endl;

	fTVA = ((intNumarCulori * fPretCulori) + fPretKitArta) * 10 / 100;
	fPretTotal = (intNumarCulori * fPretCulori) + fPretKitArta + fTVA;

	std::cout << "	Totalul va fii de " << CE_SET_COLOR_("93m") << fPretTotal << " lei" << CE_SET_COLOR_("90m") << std::endl;

	CE_CIN_DELAY_();
}

void CE_Switch_Tema_03_()
{
	system("cls");

	int intTipCafea_ = 0;

	std::string sTipuriCafele[5] = { "Late", "Americano", "Esspreso", "Cappuciono", "Machiato"};

	std::cout << CE_SET_COLOR_("90m");
	std::cout << "	Ce tip de Cafea doresti ?" << std::endl;

	std::cout << CE_SET_COLOR_("96m");
	for (int i = 0; i < 5; i++) {
		std::cout << "	" << sTipuriCafele[i] << std::endl;
	}

	std::cout << CE_SET_COLOR_("90m");
	std::cout << std::endl;

	std::cin >> intTipCafea_;

	if (intTipCafea_ >= 1 && intTipCafea_ <= 5) {

		std::cout << "	Pregatim un " 
		<< CE_SET_COLOR_("96m") << sTipuriCafele[--intTipCafea_] 
		<< CE_SET_COLOR_("90m") << " chiar acum !" << std::endl;

	}
	else {
	
		std::cout << CE_SET_COLOR_("91m") << "	Eroare ! "
				  << CE_SET_COLOR_("90m") << "Poti tasta doar de la "
				  << CE_SET_COLOR_("93m") << "1" 
				  << CE_SET_COLOR_("90m") << " la " 
				  << CE_SET_COLOR_("93m") << "5" 
				  << std::endl;

		std::cout << CE_SET_COLOR_("90m");
	}
			
	CE_CIN_DELAY_();
}

std::string CE_Set_UserName_()
{
	system("cls");

	std::string sLocalUserName_ = "";
	std::cout << "	Introduceti un UserName !" << std::endl;
	std::cin >> sLocalUserName_;

	if (sLocalUserName_ == "") {
		return "Guest";
	}
	else {
		return sLocalUserName_;
	}
}

void CE_Switch_Tema_04_(std::string sUser)
{
	system("cls");

	int intUserChoice = 0;
	int intAIChoice = 0;
	std::string sTryAgain_ = "";
	std::string sGameChoice[3] = { "Piatra", "Foarfeca", "Hartie" };

	//std::random_device rd;
	//std::uniform_int_distribution<int> distribution(1, 3);
	//std::mt19937 generator(rd());

	std::random_device rd;
	std::uniform_int_distribution<int> distribution(1, 3);
	unsigned short intAIChoice = distribution(rd);

	std::cout << CE_SET_COLOR_("90m");
	std::cout << "	Joc Piatra, Foarfeca, Hartie" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 3; i++) {
		std::cout << "	(" << i + 1 << ")	" << CE_SET_COLOR_("96m") << sGameChoice[i] << CE_SET_COLOR_("90m") << std::endl;
	}

	std::cin >> intUserChoice;
	//intAIChoice = distribution(generator);

	std::cout << "	" << CE_SET_COLOR_("93m") << sUser << CE_SET_COLOR_("90m") << ":" << std::endl;
	std::cout << "	(" << intUserChoice << ")	" << CE_SET_COLOR_("96m") << sGameChoice[intUserChoice - 1] << std::endl << std::endl;
	std::cout << CE_SET_COLOR_("90m");

	std::cout << "	" << CE_SET_COLOR_("93m") << "AI" << CE_SET_COLOR_("90m") << ":" << std::endl;
	std::cout << "	(" << intAIChoice << ")	" << CE_SET_COLOR_("96m") << sGameChoice[intAIChoice - 1] << std::endl << std::endl;
	std::cout << CE_SET_COLOR_("90m");


	if (intUserChoice == intAIChoice) {
		// EGALITATE
		CE_Switch_02_(0);
	}
	else if (intUserChoice == 1 && intAIChoice == 3) {
		// FAIL
		CE_Switch_02_(1);
	}
	else if (intUserChoice == 2 && intAIChoice == 1) {
		// FAIL
		CE_Switch_02_(1);
	}
	else if (intUserChoice == 3 && intAIChoice == 2) {
		// FAIL
		CE_Switch_02_(1);
	}
	else if (intUserChoice == 1 && intAIChoice == 2) {
		// WIN
		CE_Switch_02_(2);
	}
	else if (intUserChoice == 2 && intAIChoice == 3) {
		// WIN
		CE_Switch_02_(2);
	}
	else if (intUserChoice == 3 && intAIChoice == 1) {
		// WIN
		CE_Switch_02_(2);
	}

	std::cout << CE_SET_COLOR_("90m");
	std::cout << std::endl;
	std::cout << "	Mai vrei o tura ?" << std::endl;

	std::cin >> sTryAgain_;

	if (sTryAgain_ == "Da" or sTryAgain_ == "da") {
		CE_Switch_Tema_04_(sUser);
	}
	else {
		CE_CIN_DELAY_();
	}

}