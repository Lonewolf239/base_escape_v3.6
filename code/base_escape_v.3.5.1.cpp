﻿#include <iostream>
#include <fstream>
#include <conio.h>
#include <locale>
#include <windows.h>

using namespace std;

//основные настройки и достижения
int ndeath = 0, nsave = 0, nmoves = 0, timr = 45; float x_pl = 0, infection_stage = 0;
bool achievements1 = false, achievements2 = false, achievements3 = false, achievements4 = false, achievements5 = false, achievements6 = false, achievements7 = false, achievements8 = false, achievements9 = false, somebody = false, gas_gas_gas = false, sans = false;
bool Language = true, first_start = true, good_ending = false, firw = true;
//инвентарь часть 1
bool isHasKnife = false, isHasKey1 = false;
//инвентарь часть 2
bool isHasCrowbar = false, isHasMaul = false, isHasExplosives = false;
//инвентарь часть 3
bool isHasKey2 = false, isHasPlanks = false;
//инвентарь часть 4
bool isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false;
//инвентарь часть 5
bool escpe = false, gameover = false, first_run = true;
bool look_around = false, isHasTrap = false, loop = false, first = true, firhut = true, firroo = true, meat_open = false, isHasAxe = false, isHasBrick = false, lamp = false, oil = false, lamp_oil = false, house1_com = false, house2_com = false, house3_com = false, house4_com = false, church_open = false;
bool isHasKey4 = false, im_gay = true, isHasMeat = false, i_love_furry = true, isHasMask = false, poison = false, god = true,dog_die = false, home_open = false, fit = true, fir = true, fig = false, fig2 = false, fig3 = true, fit1 = true, fit2 = true, chg = false, T_virus = true, catag = true, tigr = true;
string house1, house2, house3, meat, haha, stage, door1, door2, meat_op, dach1, dach2, dach, cruch, cab;
//инвентарь часть 6
bool isHasKey5 = false;

//костыли функций (часть 1)
void start();
void save();
void location(int loc);
void cycle1();
void ghost_killing();
void window();
void close(int cl);
void door();
void carpter();
void escape();

//костыли функций (часть 2)
void yard(int yr);
void cycle2();
void mansion();
void gate();
void house();
void shed();

//костыли функций (часть 3)
void floor1(int floor1);
void cycle3();
void ladder();
void liver();
void kitchen();
void utroom();

//костыли функций (часть 4)
void floor2(int floor2);
void cycle4();
void cabinet();
int dark_souls();
void bedroom();
void restroom();
void attic();

//костыли функций (часть 5)
void forest();
void bushes();
void tree();
void barrel();
void path();
void shrek_dancing();
void deep_forest();
void right();
void left();

//костыли функций (часть 6)
void village(int vil);
void prev_village();
void cycle5();
void meat_shop();
void hut();
void room1();
void dacha();
void pavilion();
void warehouse();
void home();
void beroom();
void liroom();
void cottage();
void floor_2();
void cot_workshop();
void cot_cabinet();
void church();
void catacombs();
void deep_catacombs();
void deep_room1();
void deep_room2();
void deep_room3();
void deep_room4();

//основные пункты меню
void language();
void main_menu();
void endgame();
void levels();
void developer();
void updet_list();
void achievements();
void delte();

//часть 1
// 
//main
int main() {
	system("cls");
	setlocale(LC_CTYPE, "rus");
	if (first_start) {
		cout << "WW   WW  EEEEE   LL       CCCC    OOOO   MM   MM  EEEEE\nWW   WW  EE      LL      CC  CC  OO  OO  MMM MMM  EE\nWW W WW  EEEE    LL      CC      OO  OO  MM M MM  EEEE\nWWWWWWW  EE      LL      CC  CC  OO  OO  MM   NN  EE\n WW WW   EEEEE   LLLLLL   CCCC    OOOO   MM   MM  EEEEE" << endl << endl;
		cout << "IIIIII  NN  NN\n  II    NNN NN\n  II    NN NNN\n  II    NN  NN\nIIIIII  NN  NN" << endl << endl;
		cout << "BBBBB    AAAA    SSSS   EEEEE\nBB  BB  AA  AA  SS      EE\nBBBBB   AAAAAA   SSSS   EEEE\nBB  BB  AA  AA      SS  EE\nBBBBB   AA  AA   SSSS   EEEEE" << endl << endl;
		cout << "EEEEE   SSSS    CCCC    AAAA   PPPPP   EEEEE\nEE     SS      CC  CC  AA  AA  PP  PP  EE\nEEEE    SSSS   CC      AAAAAA  PPPPP   EEEE\nEE         SS  CC  CC  AA  AA  PP      EE\nEEEEE   SSSS    CCCC   AA  AA  PP      EEEEE" << endl << endl;
		cout << " 3333       55555\n3   33      55\n  333       55555\n3   33          55\n 3333   **  55555" << endl;
		system("pause");
	}
	main_menu();
	return 0;
}
//Старт
void start() {
	system("cls");
	timr = 45; x_pl = 0, infection_stage = 0, isHasKnife = false, isHasKey1 = false, isHasCrowbar = false, isHasMaul = false, isHasExplosives = false, isHasKey2 = false, isHasPlanks = false, isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false, escpe = false, gameover = false, first_run = true, look_around = false, isHasTrap = false, loop = false, first = true, firhut = true, firroo = true, meat_open = false, isHasAxe = false, isHasBrick = false, lamp = false, oil = false, lamp_oil = false, house1_com = false, house2_com = false, house3_com = false, house4_com = false, church_open = false, isHasKey4 = false, im_gay = true, isHasMeat = false, isHasKey5 = false, i_love_furry = true, isHasMask = false, poison = false, dog_die = false, home_open = false, fit = true, fir = true, fig = false, fig2 = false, fig3 = true, chg = false, tigr = true;
	if (Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |    Chapter 1. Basement.   |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou woke up in an unknown place. Looks like a basement..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nLooking around, you realized that you did not see anything :(" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nLooking around AT FEEL, you realized that it was a small room...\nYou found:\nWindow 1\nCloset 2\nDoor 3\nCarpet 4" << endl << endl;
	}
	if (!Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |      Глава 1. Подвал.     |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nТы проснулся в неизвестном месте. Напоминает подвал..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nОсмотревшись, ты понял, что ничего не видишь :(" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nОсмотревшись НА ОЩУПЬ, ты понял, что находишься в маленькой комнате...\nТы нашёл:\nОкно 1\nШкаф 2\nДверь 3\nКовёр 4" << endl << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		location(1);
		break;
	case '2':
		nmoves++;
		location(2);
		break;
	case '3':
		nmoves++;
		location(3);
		break;
	case '4':
		nmoves++;
		location(4);
		break;
	default:
		cycle1();
		break;
	}
}
//загрузка сохранения
void save() {
	system("cls");
	char sae[35];
	ifstream file("C:/Windows/Temp/save.txt");
	if (!file.is_open()) {
		cout << "SAVE FILE MISSING!" << endl;
		system("pause");
		start();
	}
	else {
		timr = 45; x_pl = 0, infection_stage = 0, isHasKnife = false, god = true, isHasKey1 = false, isHasCrowbar = false, isHasMaul = false, isHasExplosives = false, isHasKey2 = false, isHasPlanks = false, isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false, escpe = false, gameover = false, first_run = true, look_around = false, isHasTrap = false, loop = false, first = true, firhut = true, firroo = true, meat_open = false, isHasAxe = false, isHasBrick = false, lamp = false, oil = false, lamp_oil = false, house1_com = false, house2_com = false, house3_com = false, house4_com = false, church_open = false, isHasKey4 = false, im_gay = true, isHasMeat = false, isHasKey5 = false, i_love_furry = true, isHasMask = false, poison = false, dog_die = false, home_open = false, fit = true, fir = true, fig = false, fig2 = false, fig3 = true, chg = false, tigr = true;
		file.getline(sae, 25);
		file.close();
		if (sae[12] == 'B') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 1;
			nmoves = 14;
			system("pause");
			cycle2();
		}
		if (sae[12] == '5') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 2;
			nmoves = 28;
			system("pause");
			cycle3();
		}
		if (sae[12] == 't') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 3;
			nmoves = 42;
			system("pause");
			cycle4();
		}
		if (sae[12] == 'k') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 4;
			nmoves = 56;
			system("pause");
			forest();
		}
		if (sae[12] == '0') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 5;
			nmoves = 170;
			system("pause");
			cycle5();
		}
		if (sae[16] == 'F') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 666;
			nmoves = 280;
			system("pause");
			levels();
		}
	}
}
//подвал
void location(int loc) {
	nmoves++;
	system("cls");
	if (loc == 1) {
		if (Language)
			cout << "___________________________________________\nYou went to the window and tried to open it...it's closed\nLook 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к окну и попытались его открыть... оно закрыто\nОсмотреть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			window();
			break;
		case '2':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (loc == 2) {
		if (Language)
			cout << "___________________________________________\nYou have reached a closet... it is divided into two compartments, a lower and an upper one.\nOpen up 1\nOpen bottom 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к шкафу... он разделен на два отделения, нижнее и верхнее.\nОткрыть верхнее 1\nОткрыть нижнее 2\nУйти 3" << endl;
		switch (_getch()) {
		case '1':
			close(1);
			break;
		case '2':
			close(2);
			break;
		case '3':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (loc == 3) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door... it is locked\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери...она закрыта\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			door();
			break;
		case '2':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (loc == 4) {
		if (Language)
			cout << "___________________________________________\nYou looked at the carpet under your feet...\nIt looks like there's something under it...but its edges are concreted...\nInspect 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы посмотрели на ковёр под ногами...\nПохоже что под ним что-то есть...но его края забетонированы...\nИзучить 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			carpter();
			break;
		case '2':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
}
//цикл подвала
void cycle1() {
	nmoves++;
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou are standing in the center of the basement...\nWindow 1\nCloset 2\nDoor 3\nCarpet 4" << endl;
		if (isHasKnife)
			cout << endl << "You have: Knife..." << endl;
		if (isHasKey1)
			cout << endl << "You have: Key..." << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nТы стоишь в центре подвала...\nОкно 1\nШкаф 2\nДверь 3\nКовёр 4" << endl;
		if (isHasKnife)
			cout << endl << "У тебя есть: Нож..." << endl;
		if (isHasKey1)
			cout << endl << "У тебя есть: Ключ..." << endl;
	}
	switch (_getch()) {
	case '1':
		location(1);
		break;
	case '2':
		location(2);
		break;
	case '3':
		location(3);
		break;
	case '4':
		location(4);
		break;
	default:
		cycle1();
		break;
	}
}
//окно
void window() {
	nmoves++;
	system("cls");
	if (isHasKey1) {
		cout << "		 SSSS    AAAA   UU  UU  LL\n		SS      AA  AA  UU  UU  LL\n		 SSSS   AAAAAA  UU  UU  LL\n		    SS  AA  AA  UU  UU  LL\n		 SSSS   AA  AA   UUUU   LLLLLL" << endl << endl;
		cout << "		 GGGG    OOOO    OOOO   DDDDD   MM   MM   AAAA   NN  NN\n		GG      OO  OO  OO  OO  DD  DD  MMM MMM  AA  AA  NNN NN\n		GG GGG  OO  OO  OO  OO  DD  DD  MM M MM  AAAAAA  NN NNN\n		GG  GG  OO  OO  OO  OO  DD  DD  MM   MM  AA  AA  NN  NN\n		 GGGG    OOOO    OOOO   DDDDD   MM   MM  AA  AA  NN  NN" << endl << endl;
		system("explorer https://youtu.be/jeM9yRJwKl8");
	}
	if (Language)
		cout << "___________________________________________\nYou looked out the window...there is night\nYou turned around and went to the center of the room.." << endl << endl;
	if (!Language)
		cout << "___________________________________________\nВы выглянули в окно...там ночь\nВы повернулись и вернулись в центр комнаты.." << endl << endl;
	system("pause");
	cycle1();
}
//шкаф 
void close(int cl) {
	system("cls");
	if (cl == 1) {
		if (Language)
			cout << "___________________________________________\nYou have opened the top drawer... it is empty\nOpen bottom 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли верхний ящик... он пуст\nОткрыть нижний 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			close(2);
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (cl == 2 && isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou have opened the bottom drawer... it is empty\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли нижний ящик... он пуст\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (cl == 2 && isHasKey1) {
		if (Language)
			cout << "___________________________________________\nYou have opened the bottom drawer... it is empty\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли нижний ящик... он пуст\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (cl == 2 && !isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou have opened the bottom drawer... there is a knife\nTake knife 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли нижний ящик... там нож\nВзять нож 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			isHasKnife = true;
			if (Language)
				cout << "___________________________________________\nYou took a knife..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы взяли нож..." << endl;
			system("pause");
			cycle1();
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
}
//дверь
void door() {
	int save = 0;
	system("cls");
	if (!isHasKey1) {
		if (Language)
			cout << "___________________________________________\nI can't open this door..." << endl;
		if (!Language)
			cout << "___________________________________________\nЯ не могу открыть эту дверь..." << endl;
		system("pause");
		cycle1();
	}
	if (isHasKey1) {
		if (Language) {
			cout << "___________________________________________\nYou inserted the key into the lock and turned... the lock opened and fell to the floor with a clang of metal..." << endl;
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы вставили ключ в замок и повернули... замок открылся и с лязгом металла упал на пол..." << endl;
			cout << "Ты хочешь сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			save = 1;
			isHasKey1 = false;
			break;
		case '2':
			nmoves++;
			isHasKey1 = false;
			escape();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJBl2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			escape();
		}
	}
}
//кове́р
void carpter() {
	system("cls");
	if (isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы сели на ковёр и почувствовали, что под ним что-то есть...\nРазрезать 1\nУйти 2" << endl;
		switch (_getch())
		{
		case '1':
			nmoves++;
			isHasKey1 = true;
			isHasKnife = false;
			if (Language)
				cout << "___________________________________________\nYou cut the carpet with difficulty... you broke the Knife, but you got the Key from under the carpet" << endl;
			if (!Language)
				cout << "___________________________________________\nВы с трудом разрезали ковёр... вы сломали нож, но при этом достали ключ из углубления под ковром" << endl;
			system("pause");
			cycle1();
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (isHasKey1) {
		if (Language)
			cout << "___________________________________________\nYou looked at the carpet under your feet...\n.....why did you cut it in the shape of Among Us?..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы посмотрели на ковёр...\n.....почему вы разрезали его в форме Амогуса?..." << endl;
		system("pause");
		cycle1();
	}
	if (!isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы сели на ковёр и почувствовали, что под ним что-то есть...\nРазрезать 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou can't do it..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы не можете сделать это..." << endl;
			system("pause");
			cycle1();
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
}
//побег из подвала
void escape() {
	nmoves++;
	system("cls");
	if (Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |      Chapter 2. Yard.     |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "When you opened the door, a stream of fresh night wind immediately flew into your face, and the dim night light filled the room.\nConvinced that everything was safe, you went outside.\nIt was a wonderful cloudless night, which made the whole courtyard perfectly visible.\nYour attention was immediately attracted a large mansion in the center of the courtyard.\nLooking closer, you find:" << endl;
		cout << "Mansion 1\nGate 2\nTreehouse 3\nShed 4" << endl;
	}
	if (!Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |       Глава 2. Двор.      |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "Открыв дверь, тебе в лицо сразу же ударил поток свежего ночного воздуха, и тусклый ночной свет залил комнату.\nУбедившись, что все в безопасности, вы вышли на улицу.\nЭто была чудесная безоблачная ночь, от чего двор был прекрасно виден.\nВаше внимание сразу же привлек большой особняк в центре двора.\nПриглядевшись, вы нашли:" << endl;
		cout << "Особняк 1\nВорота 2\nДомик на дереве 3\nНебольшой сарайчик 4" << endl;
	}
	switch (_getch()) {
	case '1':
		yard(1);
		break;
	case '2':
		yard(2);
		break;
	case '3':
		yard(3);
		break;
	case '4':
		yard(4);
		break;
	default:
		cycle2();
		break;
	}
}

//часть 2
// 
//двор
void yard(int yr) {
	nmoves++;
	system("cls");
	if (yr == 1) {
		if (Language)
			cout << "___________________________________________\nApproaching the main entrance of the mansion, you saw a huge majestic wooden gate with metal edging\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nПодойдя к главному входу в особняк, вы увидели огромные величественные деревянные ворота с металлической окантовкой.\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			mansion();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (yr == 2) {
		if (Language)
			cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nInspect 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к большим железным воротам с многочисленными рисунками... на них висит громоздкий старый замок...\nКажется, что открыть его уже невозможно\nИзучить 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			gate();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (yr == 3) {
		if (Language)
			cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к домику на дереве... в него вели старые гнилые доски, прибитые к дереву...\nЗалезть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			house();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (yr == 4) {
		if (Language)
			cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к маленькому сараю...\nКажется, дверь открыта\nВойти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			shed();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}
//цикл двора
void cycle2() {
	system("cls");
	if (isHasExplosives) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nGate 1\nTreehouse 2\nShed 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите посреди двора...\nВорота 1\nДом на дереве 2\nСарай 3" << endl;
		switch (_getch())
		{
		case '1':
			nmoves++;
			yard(2);
			break;
		case '2':
			nmoves++;
			yard(3);
			break;
		case '3':
			nmoves++;
			yard(4);
			break;
		default:
			cycle2();
			break;
		}
	}
	if (!isHasExplosives) {
		if (Language) {
			cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nMansion 1\nGate 2\nTreehouse 3\nShed 4" << endl;
			if (isHasCrowbar)
				cout << endl << "You have: Crowbar..." << endl;
			if (isHasMaul)
				cout << endl << "You have: Maul..." << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы стоите посреди двора...\nОсобняк 1\nВорота 2\nДом на дереве 3\nСарай 4" << endl;
			if (isHasCrowbar)
				cout << endl << "У вас есть: Монтировка..." << endl;
			if (isHasMaul)
				cout << endl << "У вас есть: Кувалда..." << endl;
		}
		switch (_getch())
		{
		case '1':
			nmoves++;
			yard(1);
			break;
		case '2':
			nmoves++;
			yard(2);
			break;
		case '3':
			nmoves++;
			yard(3);
			break;
		case '4':
			nmoves++;
			yard(4);
			break;
		default:
			cycle2();
			break;
		}
	}
}
//особняк
void mansion() {
	system("cls");
	int save = 0, next = 0, next2 = 0;
	if (isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nClosed on the other side...\nTry to open 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nЗакрыто с другой стороны...\nПопробовать открыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nNothing succeeded..." << endl;
			if (!Language)
				cout << "___________________________________________\nНичего не получилось..." << endl;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (isHasMaul) {
		if (Language)
			cout << "___________________________________________\nClosed on the other side...\nTry to open 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nЗакрыто с другой стороны...\nПопробовать открыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			next = 1;
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (next == 1) {
		system("cls");
		if (Language) {
			cout << "___________________________________________\nYou hit the door with all your foolishness...\nThe door flew out of its hinges and fell to the floor with a crash..." << endl;
			system("pause");
			system("cls");
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы со всей дури ударили по двери...\nДверь слетела с петель и с грохотом упала на пол..." << endl;
			system("pause");
			system("cls");
			cout << "Ты хочешь сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			save = 1;
			system("cls");
			break;
		case '2':
			nmoves++;
			next2 = 1;
			break;
		default:
			cycle2();
			break;
		}
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJ5l2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			next2 = 1;
		}
	}
	if (next2 == 1) {
		system("cls");
		if (Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |  Chapter 3. First floor.  |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			isHasCrowbar = false;
			isHasMaul = false;
			cout << "___________________________________________\nYou entered a huge lobby... there was a large T-shaped staircase in its center... the first thing that caught your attention:\nStaircase 1\nLounge 2\nKitchen 3\nStorage 4" << endl;
		}
		if (!Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |   Глава 3. Первый этаж.   |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			isHasCrowbar = false;
			isHasMaul = false;
			cout << "___________________________________________\nВы вошли в огромный вестибюль... в его центре была большая Т-образная лестница... первое, что привлекло ваше внимание:\nЛестница 1\nГостинная 2\nКухня 3\nКладовка 4" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			floor1(1);
			break;
		case '2':
			nmoves++;
			floor1(2);
			break;
		case '3':
			nmoves++;
			floor1(3);
			break;
		case '4':
			nmoves++;
			floor1(4);
			break;
		default:
			cycle3();
			break;
		}
	}
	if (!isHasMaul) {
		if (Language)
			cout << "___________________________________________\nYou examined the door of the mansion... it seems to be closed on the other side..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы осмотрели дверь особняка... кажется, она закрыта с другой стороны..." << endl;
		system("pause");
		cycle2();
	}
}
//ворота
void gate() {
	int sav = 0, nex = 0;
	system("cls");
	if (isHasExplosives) {
		system("cls");
		if (Language)
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		if (!Language)
			cout << "Вы хотите сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			sav = 1;
			break;
		case '2':
			nmoves++;
			nex = 1;
			break;
		default:
			forest();
			break;
		}
		if (sav == 1) {
			system("cls");
			ofstream file("C:/Windows/Temp/save.txt");
			if (file.is_open()) {
				file << "lx55GZ6dG6eJkl2oh6S0vtXVS3|MsS";
				file.close();
				cout << "SAVE SUCCESSFUL" << endl << endl << endl;
				nsave++;
				system("pause");
			}
			nex = 1;
		}
		if(nex == 1)
			forest();
	}
	if (isHasMaul) {
		if (Language)
			cout << "___________________________________________\nYou swung your arm around and hit the castle with a sledgehammer...the castle shattered...you opened the gate\nEscape 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы со всей дури ударили по замку...замок разлетелся вдребезги...вы открыли ворота\nСбежать 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			system("cls");
			system("explorer https://youtu.be/dQw4w9WgXcQ");
			cout << endl << endl << "	IIIIII   WW   WW   AAAA    SSSS\n	  II     WW   WW  AA  AA  SS\n	  II     WW W WW  AAAAAA   SSSS\n	  II     WWWWWWW  AA  AA      SS\n	IIIIII    WW WW   AA  AA   SSSS" << endl << endl;
			cout << "	KK  KK  IIIIII  DDDDD   DDDDD   IIIIII  NN  NN   GGGG   ))   ))   ))\n	KK KK     II    DD  DD  DD  DD    II    NNN NN  GG       ))   ))   ))\n	KKKK      II    DD  DD  DD  DD    II    NN NNN  GG GGG    )    )    )\n	KK KK     II    DD  DD  DD  DD    II    NN  NN  GG  GG   ))   ))   ))\n	KK  KK  IIIIII  DDDDD   DDDDD   IIIIII  NN  NN   GGGG   ))   ))   ))" << endl << endl;
			if (Language)
				cout << "___________________________________________\nYou swung around and hit the castle with a sledgehammer... the castle was not damaged, but your hands were very sore\nLeave 1" << endl;
			if (!Language)
				cout << "___________________________________________\nВы со всей силы ударили кувалдой по замку... замок не пострадал, но ваши руки сильно заболели" << endl;
			system("pause");
			cycle2();
			break;
		default:
			gate();
			break;
		}
	}
	if (isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nYou tried to remove it with a tire iron...no result\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы пытались снять его монтировкой... безрезультатно.\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (!isHasMaul) {
		if (Language)
			cout << "___________________________________________\nAfter examining the lock, you realized... that it has not been operational for a long time, but it is very durable...\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nОсмотрев замок, вы поняли... что он давно проржавевший, но очень прочный...\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}
//домик на дереве
void house() {
	system("cls");
	if (isHasMaul || isHasExplosives) {
		if (Language)
			cout << "___________________________________________\nThere is nothing interesting there... I don't want to go up there" << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного... я не хочу туда подниматься" << endl;
		system("pause");
		cycle2();
	}
	if (!isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...\nTry to tear off the boards 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nПоднявшись по лестнице на небольшой балкон, вы увидели, что вход в дом заколочен досками...\nПопробовать оторвать доски 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nCompletely sick?! How can I tear the boards off with my bare hands?.." << endl;
			if (!Language)
				cout << "___________________________________________\nСовсем больной?! Как я могу голыми руками оторвать доски?.." << endl;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...\nTry to tear off the boards 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nПоднявшись по лестнице на небольшой балкон, вы увидели, что вход в дом заколочен досками...\nПопробовать оторвать доски 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nAfter tearing off the boards and going inside, you saw a small box...\nYou found a sledgehammer...but since the crowbar was very rusty, it broke with a bang in the middle..." << endl;
			if (!Language)
				cout << "___________________________________________\nОторвав доски и зайдя внутрь, вы увидели небольшой ящик...\nВы нашли кувалду...но так как монтировка была очень ржавой, она с треском разломалась надвое..." << endl;
			isHasCrowbar = false;
			isHasMaul = true;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}
//сарайчик
void shed() {
	system("cls");
	if (isHasCrowbar || isHasMaul || isHasExplosives) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle2();
	}
	if (!isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nWhen you open the door and go inside...you can't see anything..again\nTurn on the light 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли дверь и зашли внутрь...вы ничего не видите...снова\nВключить свет 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nTurning on the light, you saw a crowbar lying on a shelf\nYou took a tire iron" << endl;
			if (!Language)
				cout << "___________________________________________\nВключив свет, вы увидели монтировку лежащую на полке\nВы взяли монтировку" << endl;
			isHasCrowbar = true;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}

//часть 3
// 
//первый этаж
void floor1(int floor1) {
	nmoves++;
	system("cls");
	if (floor1 == 1) {
		//я люблю коли волосаті мужики обмазуються олією
		if (!isHasPlanks) {
			if (Language)
				cout << "___________________________________________\nYou have come to a T-shaped staircase...a few planks are broken in the middle of the junction\nIt looks like you can jump over\nJump 1\nLeave 2" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к Т-образной лестнице... несколько досок сломаны посередине лестницы\nПохоже можно перепрыгнуть\nПрыгнуть 1\nУйти 2" << endl;
			switch (_getch()) {
			case '1':
				ladder();
				break;
			case '2':
				cycle3();
				break;
			default:
				cycle3();
				break;
			}
		}
		if (isHasPlanks) {
			if (Language)
				cout << "___________________________________________\nYou've come to a T-shaped staircase...a few planks are broken in the middle of the junction\nBut now you can make a bridge\nMake bridge 1\nLeave 2" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к Т-образной лестнице... несколько досок сломаны посередине лестницы\nНо теперь вы можете сделать мост\nСделать мост 1\nУйти 2" << endl;
			switch (_getch()) {
			case '1':
				ladder();
				break;
			case '2':
				cycle3();
				break;
			default:
				cycle3();
				break;
			}
		}
	}
	if (floor1 == 2) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nThe door is open\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nДверь открыта\nЗайти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			liver();
			break;
		case '2':
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
	if (floor1 == 3) {
		if (Language)
			cout << "___________________________________________\nYou approached the kitchen\nLooks open\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к кухне\nПохоже открыто\nЗайти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			kitchen();
			break;
		case '2':
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
	if (floor1 == 4) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nThe door is closed\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nДверь закрыта\nЗайти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			utroom();
			break;
		case '2':
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
}
//цикл первого этажа
void cycle3() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou are standing in the center of the hallway...\nStaircase 1\nLounge 2\nKitchen 3\nStorage 4" << endl;
		if (isHasPlanks)
			cout << endl << "You have: Planks..." << endl;
		if (isHasKey2)
			cout << endl << "You have: Key..." << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы стоите в центре прихожей...\nЛестница 1\nГостинная 2\nКухня 3\nКладовка 4" << endl;
		if (isHasPlanks)
			cout << endl << "У вас есть: Доски..." << endl;
		if (isHasKey2)
			cout << endl << "У вас есть: Ключ..." << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		floor1(1);
		break;
	case '2':
		nmoves++;
		floor1(2);
		break;
	case '3':
		nmoves++;
		floor1(3);
		break;
	case '4':
		nmoves++;
		floor1(4);
		break;
	default:
		cycle3();
		break;
	}
}
//лестница
void ladder() {
	system("cls");
	int save = 0, next = 0, next2 = 0;
	if (isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nYou put down the plank and fixed it a little with nails\nNow you can go up to the second floor\nEnter 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы положили доску и немного закрепили ее гвоздями\nТеперь вы можете подняться на второй этаж\nПодняться 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			next = 1;
			break;
		default:
			cycle3();
			break;
		}
	}
	if (next == 1) {
		system("cls");
		if (Language)
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		if (!Language)
			cout << "Вы хотите сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			save = 1;
			break;
		case '2':
			nmoves++;
			next2 = 1;
			break;
		default:
			cycle3();
			break;
		}
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJtl2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			next2 = 1;
		}
	}
	if (next2 == 1) {
		system("cls");
		if (Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |  Chapter 4. Second floor. |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nYou climbed to the second floor...the floor creaked under your feet, but looking around you found:\nCabinet 1\nBedroom 2\nRestroom 3\nAttic 4" << endl;
		}
		if (!Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |   Глава 4. Второй этаж.   |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nВы залезли на второй этаж...пол скрипел под вашими ногами, осмотревшись вы нашли:\nКабинет 1\nСпяльню 2\nКомнату отдыха 3\nЧердак 4" << endl;
		}
		isHasKey2 = false;
		isHasPlanks = false;
		switch (_getch()) {
		case '1':
			nmoves++;
			floor2(1);
			break;
		case '2':
			nmoves++;
			floor2(2);
			break;
		case '3':
			nmoves++;
			floor2(3);
			break;
		case '4':
			nmoves++;
			floor2(4);
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nYou ran hard...but tripped over a protruding nail and fell into a hole...\nYOU ARE DEAD\n" << endl;
		if (!Language)
			cout << "___________________________________________\nВы разбежались изо всех сил... но споткнулись о торчащий гвоздь и упали в яму...\nВЫ МЕРТВЫ\n" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		ndeath++;
		system("pause");
		main();
	}
}
//гостинная
void liver() {
	system("cls");
	if (isHasKey2 || isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle3();
	}
	if (!isHasKey2) {
		if (Language)
			cout << "___________________________________________\nEntering the living room you saw a large oval table with a bunch of chairs\nComing closer you found a large birthday cake\nLooks delicious.\nTry a cake 1\nDon't try the cake 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВойдя в гостиную, вы увидели большой овальный стол с кучей стульев.\nПодойдя поближе, вы обнаружили большой праздничный торт.\nВыглядит аппетитно.\nПопробовать торт 1\nНе пробовать торт 2." << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou've tasted the cake...and it's damn delicious!..although with some strange aftertaste\nYour stomach hurts sharply...\nYou feel unbearable pain...\nYOU ARE DEAD" << endl;
			if (!Language)
				cout << "___________________________________________\nВы попробовали торт...и он чертовски вкусный!..хоть и с каким-то странным привкусом\nЖивот резко разболелся...\nВы чувствуете невыносимую боль...\nВЫ МЕРТВЫ" << endl;
			cout << endl << "		 CCCC    AAAA   KK  KK  EEEEE\n		CC  CC  AA  AA  KK KK   EE\n		CC      AAAAAA  KKKK    EEEE\n		CC  CC  AA  AA  KK KK   EE\n		 CCCC   AA  AA  KK  KK  EEEEE" << endl << endl;
			cout << "		IIIIII   SSSS      AAAA\n		  II    SS        AA  AA\n		  II     SSSS     AAAAAA\n		  II        SS    AA  AA\n		IIIIII   SSSS     AA  AA" << endl << endl;
			cout << "		LL      IIIIII  EEEEE\n		LL        II    EE\n		LL        II    EEEE\n		LL        II    EE\n		LLLLLL  IIIIII  EEEEE" << endl << endl;
			cout << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl;
			system("pause");
			ndeath++;
			main();
			break;

		case '2':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou decided not to eat this rubbish, because CAKE IS A LIE...\nSo you took it and threw the cake on the floor\nThere was a key under the cake" << endl;
			if (!Language)
				cout << "___________________________________________\nВы решили не есть эту дрянь, потому что ТОРТ ЭТО ЛОЖЬ...\nВы взяли торт и бросили его на пол\nПод тортом был ключ" << endl;
			isHasKey2 = true;
			system("pause");
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
}
//кухня
void kitchen() {
	nmoves++;
	system("cls");
	if (Language) {
		cout << "___________________________________________\nEntering the kitchen, you saw... the kitchen is AMAZING...\nThere is a lot of food on the table...the air smells of freshly cooked food...\nYou really wanted to eat\nGoing to the table, you were unable to stop\nSitting at the table and when you start eating you immediately feel how delicious this food is" << endl;
		system("pause");
		system("cls");
		cout << "_____________________________________\nYou have been sitting and eating for about 10 minutes, when suddenly you felt a blow to your back, and then unbearable pain...\nAfter that, someone grabbed you and threw you to the floor...\nBefore you died, you only managed to see an ax flying at you\nYOU ARE DEAD" << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nЗайдя на кухню, вы увидели... кухню УДИВИТЕЛЬНО...\nНа столе стояло много еды...в воздухе ведает аромат свежеприготовленной едой...\nВам очень захотелось есть\nПодходя к столу, вы не смогли остановиться\nСев за стол и попробовав еду, вы поняли насколько она вкусная" << endl;
		system("pause");
		system("cls");
		cout << "_____________________________________\nВы сидели и ели около 10 минут, как вдруг почувствовали удар в спину, а затем невыносимую боль...\nПосле этого кто-то схватил вас и швырнул на пол...\nПеред смертью вы успели увидеть только летящий в вас топор\nВЫ МЕРТВЫ" << endl;
	}
	cout << endl << endl << "          DDDDD    OOOO       NN  NN   OOOO   TTTTTT\n          DD  DD  OO  OO      NNN NN  OO  OO    TT\n          DD  DD  OO  OO      NN NNN  OO  OO    TT\n          DD  DD  OO  OO      NN  NN  OO  OO    TT\n          DDDDD    OOOO       NN  NN   OOOO     TT" << endl << endl;
	cout << "                  EEEEE   AAAA   TTTTTT\n                  EE     AA  AA    TT\n                  EEEE   AAAAAA    TT\n                  EE     AA  AA    TT\n                  EEEEE  AA  AA    TT" << endl << endl;
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	ndeath++;
	main();
}
//подсобка
void utroom() {
	nmoves++;
	if (isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing interesting here anymore" << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь больше нет ничего интересного" << endl;
		system("explorer https://youtu.be/t6isux5XWH0");
		system("pause");
		cycle3();
	}
	if (isHasKey2) {
		if (Language)
			cout << "___________________________________________\nOpening the door and going in, you found: a few boards, a hammer and a couple of nails" << endl;
		if (!Language)
			cout << "___________________________________________\nОткрыв дверь и войдя, вы обнаружили: несколько досок, молоток и пару гвоздей." << endl;
		isHasPlanks = true;
		isHasKey2 = false;
		system("pause");
		cycle3();
	}
	if (!isHasKey2) {
		if (Language)
			cout << "___________________________________________\nHow were you going to open that door without a key?" << endl;
		if (!Language)
			cout << "___________________________________________\nКак ты собрался открыть эту дверь без ключа?" << endl;
		system("pause");
		cycle3();
	}
}

//часть 4
// 
//второй этаж
void floor2(int floor2 ) {
	nmoves++;
	if (god) {
		if (Language)
			cab = "You went to the door and tried to open...closed...\nOpen";
		if (!Language)
			cab = "Вы подошли к двери и попробовали её открыть...закрыто...\nОткрыть";
		god = false;
	}
	system("cls");
	if (floor2 == 1) {
		if (Language)
			cout << "___________________________________________\n" << cab << " 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\n" << cab << " 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			cabinet();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (floor2 == 2) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			bedroom();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (floor2 == 3) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			restroom();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (floor2 == 4) {
		if (Language)
			cout << "___________________________________________\nYou have reached the attic hatch...strange sounds are coming from there...\nPeek 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к чердачному люку...оттуда доносятся странные звуки...\nЗаглянуть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			attic();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
}
//цикл фторого этажа
void cycle4() {
	system("cls");
	if (god) {
		if (Language)
			cab = "You went to the door and tried to open...closed...\nOpen";
		if (!Language)
			cab = "Вы подошли к двери и попробовали её открыть...закрыто...\nОткрыть";
		god = false;
	}
	if (Language) {
		cout << "___________________________________________\nYou are standing next to the stairs\nCabinet 1\nBedroom 2\nRestroom 3\nAttic 4" << endl;
		if (isHasFirecracker)
			cout << endl << "You have: Firecracker..." << endl;
		if (isHasKey3)
			cout << endl << "You have: Key..." << endl;
		if (isHasBooks)
			cout << endl << "You have: Books..." << endl;
		if (bedroomOpen)
			cout << endl << "Somewhere a door is open..." << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы стоите рядом с лестницей\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		if (isHasFirecracker)
			cout << endl << "У вас есть: Петарды..." << endl;
		if (isHasKey3)
			cout << endl << "У вас есть: Ключ..." << endl;
		if (isHasBooks)
			cout << endl << "У вас есть: Книги..." << endl;
		if (bedroomOpen)
			cout << endl << "Где-то открыта дверь..." << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		floor2(1);
		break;
	case '2':
		nmoves++;
		floor2(2);
		break;
	case '3':
		nmoves++;
		floor2(3);
		break;
	case '4':
		nmoves++;
		floor2(4);
		break;
	default:
		cycle4();
		break;
	}
}
//кабинет
void cabinet() {
	system("cls");
	if (isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle4();
	}
	if (isHasBooks) {
		if (Language)
			cout << "___________________________________________\nYou entered the office... there are still a couple of books missing from the shelves... but now you have them\nHow to put them?\nBlue - right; Red - left 1\nBlue - left; Red - right 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в кабинет... на полках не хватает пары книг... но теперь они у вас есть\nКак их поставить?\nСиняя - справа; Красная - слева 1\nСиняя - слева; Красная - справа 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nThe books moved into place... when suddenly a small box crawled out of the wall... there was a firecracker and a lighter in it" << endl;
			if (!Language)
				cout << "___________________________________________\nКниги встали на свои места... как вдруг из стены выползла маленькая коробочка... в ней была петарда и зажигалка" << endl;
			isHasBooks = false;
			isHasFirecracker = true;
			system("pause");
			cycle4();
			break;
		case '2':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nThe books moved...but immediately flew out and fell to the floor...the door to the study slammed shut...\nApparently you should have watched the Matrix more carefully\nYOU DIE" << endl;
			if (!Language)
				cout << "___________________________________________\nКниги задвинулись...но тут же вылетели и упали на пол...дверь в кабинет захлопнулась...\nВидимо надо было внимательнее смотреть Матрицу\nВЫ МЕРТВЫ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			main();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (bedroomOpen) {
		if (Language)
			cout << "___________________________________________\nThere is nothing you can do here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle4();
	}
	if (isHasKey3) {
		if (Language) {
			cab = "You come to the door...it's open...\nEnter";
			cout << "___________________________________________\nYou opened the door and entered a spacious room...it was a dark gothic office with a bunch of bookshelves\nIt seems that one of the shelves is missing a couple of books...\nWhen leaving, you pressed some kind of lever on the wall...it seems that somewhere- then the door opened...\nLeave 1" << endl;
		}
		if (!Language) {
			cab = "Вы подошли к двери...она открыта...\nВойти";
			cout << "___________________________________________\nВы открыли дверь и вошли в просторную комнату... это был темный готический кабинет с кучей книжных полок\nКажется, что на одной из полок не хватает пары книг...\nВыходя, вы нажали какой-то рычаг на стене...кажется что где-то открылась дверь...\nУйти 1" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			isHasKey3 = false;
			bedroomOpen = true;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!isHasKey3) {
		if (Language)
			cout << "___________________________________________\nYou can't...\n-So, teller, wait. What can't you see? Yes, on the other side of the monitor is mentally retarded!\nGod...how stupid do you have to be to open the door without a key to it...I don't want to play like that...I don't want to!..\nYOU ARE DEAD" << endl;
		if (!Language)
			cout << "___________________________________________\nВы не можете...\n-Так, рассказчик, подожди. Ты что не видишь? Да по ту сторону монитора умственно отсталый!\nБоже...каким надо быть тупым, чтобы открыть дверь без ключа от нее...я не хочу так играть...не хочу!..\nВЫ МЕРТЫ" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		ndeath++;
		main();
	}
}
//спальня
void bedroom() {
	system("cls");
	if (isHasFirecracker || isHasBooks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing interesting..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle4();
	}
	if (bedroomOpen) {
		if (Language)
			cout << "___________________________________________\nYou entered a spacious bedroom... after examining the bedroom, you found:\nBooks on the bed 1\nCloset 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в просторную спальню... осмотрев спальню, вы нашли:\nКниги лежащие на кровати 1\nШкаф 2\nУйти 3" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou took the books and hurried out of the bedroom" << endl;
			if (!Language)
				cout << "___________________________________________\nВы взяли книги и вышли из спальни" << endl;
			isHasBooks = true;
			bedroomOpen = false;
			system("pause");
			cycle4();
			break;
		case '2':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou were looking at an old wardrobe...when you suddenly heard someone's footsteps in the corridor...\nYou opened it and climbed into the wardrobe...as soon as you entered, the doors closed...you tried to open them, but failed\nIn some then a long wide spike began to drive out from below...\nYOU ARE DEAD" << endl;
			if (!Language)
				cout << "___________________________________________\nВы смотрели на старый шкаф... как вдруг услышали чьи-то шаги в коридоре...\nВы открыли шкаф и забрались в него... как только вы вошли, двери закрылись... вы попытались открыть их, но не удалось\nСразу же из пола начал выезжать длинный широкий кол...\nВЫ МЕРТВЫ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			main();
			break;
		case '3':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!bedroomOpen) {
		if (Language)
			cout << "___________________________________________\nThe door is closed..." << endl;
		if (!Language)
			cout << "___________________________________________\nДверь закрыта..." << endl;
		system("pause");
		cycle4();
	}
}
//комната отдыха
void restroom() {
	system("cls");
	if (isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nAMOGUS?!?!\nExplore 1" << endl;
		if (!Language)
			cout << "___________________________________________\nАМОГУС?!?!\nИзучить 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			isHasAmongus = true;
			system("explorer https://youtu.be/T59N3DPrvac");
			system("pause");
			cycle4();
			break;
		default:
			restroom();
			break;
		}


	}
	if (isHasKey3 || bedroomOpen || isHasBooks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		nmoves++;
		system("pause");
		cycle4();
	}
	if (!isHasKey3) {
		if (Language)
			cout << "___________________________________________\nYou entered the rest room...it was a spacious room with several sofas and some sports equipment\nAmidst all this rubbish, you noticed a key lying on the sofa\nTake key 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в комнату отдыха...это была просторная комната с несколькими диванами и кое-каким спортивным инвентарем\nСреди всего этого хлама вы заметили лежащий на диване ключ\nВзять ключ 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou have taken the key..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы взяли ключ..." << endl;
			isHasKey3 = true;
			system("pause");
			cycle4();
			break;
		case '2':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
}
//чердак
void attic() {
	system("cls");
	if (isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nYou carefully opened the hatch...\nThrow firecracker 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы осторожно открыли люк...\nБросить петарду 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou set it on fire and threw a firecracker into the attic, closed the hatch...\nThere was an explosion, and then the infernal spawn burst out screaming...when everything was quiet, you climbed into the attic\nIn the center of the attic lay a large box...it contained some explosives" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подожгли петарду и бросили её на чердак, а после закрыли люк...\nРаздался взрыв, а потом адское отродье разразилось криками...когда все стихло, вы тихо полезли на чердак\nВ центре чердака лежал большой ящик... в нем была какая-то взрывчатка" << endl;
			if (Language)
				cout << "___________________________________________\nYou hurried down to the first floor and out into the street..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы быстро спустились на первый этаж и вышли на улицу..." << endl;
			system("pause");
			isHasFirecracker = false;
			isHasExplosives = true;
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы аккуратно заглянули на чердак...там полно летучих мышей...\nЗабраться 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU ARE DEAD" << endl;
			if (!Language)
				cout << "___________________________________________\nВы забрались на чердак и закрыли за собой люк... летучие мыши тут же напали на вас...\nС каждой атакой они наносили вам тяжелые увечья...\nВЫ МЕРТВЫ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			main();
			break;
		case '2':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
}

//часть 5
// 
//лес
void forest() {
	nmoves++;
	system("cls");
	if (first_run) {
		if (Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |     Chapter 5. Forest.    |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nYou approached the gate and tied explosives to the lock, ignited the fuse and ran for cover...\nAfter 10 seconds, there was an explosion\n________________________________________________________\nYou crawled out of your hiding place and saw fragments of the once great gate lying on the ground\nYou ran towards the gate...when suddenly a shot rang out...past...you better speed up\n" << endl;
			cout << "\n          ==================\n              Run: Space\n          ==================" << endl << endl;
			system("pause");
			system("cls");
		}
		if (!Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |        Глава 5. Лес.      |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nВы подошли к воротам и привязали взрывчатку к замку, подожгли фитиль и убежали в укрытие...\nЧерез 10 секунд раздался взрыв\n________________________________________________________\nВы вылезли из своего укрытия и увидели осколки некогда великих ворот лежащие на земле\nВы побежали в сторону ворот...как вдруг раздался выстрел...мимо...лучше вам ускориться\n" << endl;
			cout << "\n          ==================\n            Бежать: Пробел\n          ==================" << endl << endl;
			system("pause");
			system("cls");
		}
	}
	while (!escpe && !gameover) {
		if (timr == 0)
			gameover = true;
		if (x_pl < 0)
			gameover = true;
		if (x_pl >= 100)
			escpe = true;
		system("cls");
		if (!Language)
			cout << "					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN\n\n			                       Отрыв: " << x_pl << " %                     \n			                   Осталось " << timr << " секунд                 \n\n					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN" << endl;
		if (Language)
			cout << "					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN\n\n			                  Escape progress: " << x_pl << "%                    \n			                   Seconds left: " << timr << "                 \n\n					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN" << endl;
		if (_kbhit()) {
			switch (_getch()) {
			case ' ':
				x_pl += 2.5;
				break;
			default:
				x_pl--;
				break;
			}
		}
		Sleep(1000);
		timr--;
	}
	if (gameover) {
		if (!Language) {
			system("cls");
			cout << "___________________________________________\nВы бежали изо всех сил...но ваши преследователи вас догоняли...\nКак вдруг вам в плечо втыкается нож... Видимо стоит научиться бегать быстрее\nВЫ МЕРТВЫ" << endl << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			gameover = false;
			x_pl = 0;
			timr = 45;
			main();
		}
		if (Language) {
			system("cls");
			cout << "___________________________________________\nYou were running as fast as you could...but your pursuers were catching up...\nWhen suddenly a knife is stuck in your shoulder... Maybe you should learn to run faster\nYOU ARE DEAD" << endl << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			gameover = false;
			x_pl = 0;
			timr = 45;
			main();
		}
	}
	if (escpe) {
		first_run = false;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou have broken away from your pursuers, but you'd better hide quickly\nLooking around you found several places:\nBush 1\nSmall barrel 2\nTree 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы оторвались от своих преследователей, но вам лучше быстрее спрятаться\nОсмотревшись вы нашли несколько мест:\nКусты 1\nНебольшая бочка 2\nДерево 3" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			bushes();
			break;
		case '2':
			nmoves++;
			barrel();
			break;
		case '3':
			nmoves++;
			tree();
			break;
		default:
			forest();
			break;
		}
	}
}
//кусты
void bushes() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou climbed into the bushes, when you suddenly felt unbearable pain...\nThere was a bear trap in the bushes...you passed out from the pain and soon you were found...\nYOU ARE DEAD" << endl << endl;
	if (!Language)
		cout << "___________________________________________\nВы залезли в кусты, как вдруг почувствовали невыносимую боль...\nВ кустах стоял медвежий капкан...от боли вы отрубились и вскоре вас нашли...\nВЫ МЕРТВЫ" << endl << endl;
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	ndeath++;
	first_run = true;
	escpe = false;
	gameover = false;
	x_pl = 0;
	timr = 45;
	main();
}
//бочка
void barrel() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou ran up to the barrel and carefully climbed into it...there was some water in it, but it was tolerable\nSoon about 10 people with torches and guns appeared\nThey were clearly aggressive and were looking for you ..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou've been sitting in the barrel for quite some time and you've already begun to freeze...when suddenly someone knocked over the barrel\nThe last thing you heard was a speech you didn't understand...\nYOU ARE DEAD" << endl << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы подбежали к бочке и аккуратно в неё залезли...в ней было немного воды, но это было терпимо\nВскоре показалось около 10 человек с факелами и ружьями\nОни явно были настроены агрессивно и искали вас..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nВы сидели в бочке довольно-таки долго и уже начали замерзать...как вдруг кто-то опрокинул бочку\nПоследнее что вы услышали это непонятная для вас речь...\nВЫ МЕРТВЫ" << endl << endl;
	}
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	ndeath++;
	first_run = true;
	escpe = false;
	gameover = false;
	x_pl = 0;
	timr = 45;
	main();
}
//дерево
void tree() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou looked up, the branches of the tree were quite low and you could easily reach them\nYou took a few steps back, and then ran up and jumped...\nAfter a couple of seconds you were at the very top and saw how detachments with fakers were passing from below and guns..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou have been sitting on a tree for about half an hour...when you suddenly realized that you were very sleepy\nSitting comfortably so as not to fall from the tree, you fell asleep\nYou woke up in the late evening of the next day\nYour whole body hurt, but you had to go further...you slowly climbed down from the tree..." << endl << endl;
		system("pause");
		first_run = true;
		escpe = false;
		gameover = false;
		x_pl = 0;
		timr = 45;
		path();
	}
	if (!Language) {
		cout << "___________________________________________\nВы посмотрели вверх, ветки дерева были довольно низко и вы с лёгкостью до них дотянетесь\nВы сделали несколько шагов назад, а после разбежались и подпрыгнули...\nУже спустя пару секунд вы были на самой верхушке и лицезрели как снизу проходят отряды с факерами и ружьями..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nВы сидели на дереве уже около получаса...как вдруг поняли что вас сильно клонит в сон\nУдобно расположившись, чтобы не упасть с дерева, вы уснули\nПроснулись же вы глубоким вечером следующего дня\nВсё тело болело, но нужно было идти дальше...вы медленно слезли с дерева..." << endl << endl;
		system("pause");
		first_run = true;
		escpe = false;
		gameover = false;
		x_pl = 0;
		timr = 45;
		path();
	}
}
//тропа
void path() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou climbed out of the tree and found an unremarkable path...maybe it will lead you out of this nightmare?\nLook around 1\nFollow path 2" << endl;
	if (!Language)
		cout << "___________________________________________\nВы слезли с дерева и нашли неприментную тропинку...может она выведет вас из этого кошмара?\nОсмотреться 1\nПойти по тропинке 2" << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		look_around = true;
		deep_forest();
		break;
	case '2':
		nmoves++;
		deep_forest();
		break;
	default:
		path();
		break;
	}
	deep_forest();
}
//глубины леса
void deep_forest() {
	if (look_around) {
		system("cls");
		if (Language) {
			cout << "___________________________________________\nYou looked around the area and found a bear trap under a bush... it's good that you didn't hide there...\nYou took a bear trap..." << endl;
			system("pause");
		}
		if (!Language) {
			cout << "___________________________________________\nВы осмотрели окрестности и нашли медвежий капкан под кустом...как хорошо что вы туда не спрятались...\nВы взяли медвежий капкан..." << endl;
			system("pause");
		}
		isHasTrap = true;
		look_around = false;
	}
	if (!look_around) {
		system("cls");
		if (Language) {
			cout << "___________________________________________\nYou walked along the path and apparently went deeper into the forest...but at some point you came to a crossroads\nIt was a fork in three directions, and there was an index stone nearby:\nIf you go left - you will find death for yourself 1\nGo straight - you will not you will come 2\nYou will go to the right - you will not collect the bones 3" << endl;
			if (isHasTrap)
				cout << endl << "You have: Bear trap..." << endl;
			if (loop)
				cout << "___________________________________________\nLooks like you've been here before..." << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы шли по тропинке и видимо всё сильнее углублялись в лес...но в какой-то момент вы вышли на перекрёсток\nЭто была развилка в три стороны, а рядом был указательный камень:\nНалево пойдёшь - смерть себе найдёшь 1\nПрямо пойдёшь - никуда не прийдёшь 2\nНаправо пойдёшь - костей не соберёшь 3" << endl;
			if (isHasTrap)
				cout << endl << "У вас есть: Медвежий капкан..." << endl;
			if (loop)
				cout << "___________________________________________\nКажется вы здесь уже были..." << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			left();
			break;
		case '2':
			nmoves++;
			loop = true;
			system("cls");
			if(Language)
				cout << "___________________________________________\nYou walked around the stone and went straight..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы обошли камень и пошли прямо..." << endl;
			system("pause");
			deep_forest();
			break;
		case '3':
			nmoves++;
			right();
			break;
		default:
			deep_forest();
			break;
		}
	}
}
//налево
void left() {
	int save = 0;
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou turned left...after a while you came out onto an old brick path...\nYou walked for quite some time when suddenly a house appeared from behind the trees...and behind it another and another...\nYou have come to the village..." << endl;
	if (!Language)
		cout << "___________________________________________\nВы свернули налево...через какое-то время вы вышли на старую кирпичную дорожку...\nВы шли довольно-таки долго как вдруг из-за деревьев показался домик...а за ним ещё один и ещё один...\nВы пришли в деревню..." << endl;
	system("pause");
	system("cls");
	if(Language)
		cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
	if(!Language)
		cout << "Вы хотите сохранить свой прогресс?\nДа 1\nНет 2" << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		save = 1;
		break;
	case '2':
		nmoves++;
		prev_village();
		break;
	default:
		left();
		break;
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJ0l2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			prev_village();
		}
	}
}
//направо
void right() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou walked along the path for a long time, when suddenly the forest began to thin out...\nLooking around you realized that you had gone into some kind of swamp...for some reason it looks quite familiar\nYou continued walking and soon stumbled upon some kind of hut\nYou didn’t have time to approach her as the door swung open abruptly...\nYOU ARE DEAD" << endl;
	if (!Language) 
		cout << "___________________________________________\nВы долго шли по тропе, как вдруг лес начал редеть...\nОглядевшись вы поняли, что вышли в какое-то болото...почему-то выглядит оно довольно знакомо\nВы продолжили идти и вскоре наткнулись на какую-то хижину\nНеуспели вы к ней подойти как дверь резко распахнулась...\nВЫ МЕРТВЫ" << endl;
	system("pause");
	system("cls");
	cout << " SSSS    OOOO   MM   MM  EEEEE  BBBBB    OOOO   DDDDD   YY  YY\nSS      OO  OO  MMM MMM  EE     BB  BB  OO  OO  DD  DD   YYYY\n SSSS   OO  OO  MM M MM  EEEE   BBBBB   OO  OO  OO  OO    YY\n    SS  OO  MM  MM   MM  EE     BB  BB  OO  OO  DD  DD    YY\n SSSS    OOOO   MM   MM  EEEEE  BBBBB    OOOO   DDDDD     YY\n\n OOOO   NN  NN   CCCC   EEEEE\nOO  OO  NNN NN  CC  CC  EE\nOO  OO  NN NNN  CC      EEEE\nOO  OO  NN  NN  CC  CC  EE\n OOOO   NN  NN   CCCC   EEEEE\n\nTTTTTT   OOOO   LL      DDDDD\n  TT    OO  OO  LL      DD  DD\n  TT    OO  OO  LL      DD  DD\n  TT    OO  OO  LL      DD  DD\n  TT     OOOO   LLLLLL  DDDDD\n\nMM   MM  EEEEE\nMMM MMM  EE\nMM M MM  EEEE\nMM   MM  EE\nMM   MM  EEEEE  **  **  **\n" << endl;
	cout << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl;
	system("explorer https://youtu.be/pxw-5qfJ1dk");
	system("pause");
	somebody = true;
	ndeath++;
	main();
}

//часть 6
//
//преддеревня
void prev_village() {
	system("cls");
	if (Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |    Chapter 6. Village.    |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou are standing in the middle of an abandoned village...quite a creepy place...\nThere is a rotten stench in the air...it seems you are not alone here...you should be careful\nLooking around you found some interesting houses:\nButcher shop 1\nDwelling house 2\nDwelling house 3\nDwelling house 4\nChurch 5" << endl;
	}
	if (!Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |     Глава 6. Деревня.     |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nВы стоите в центре заброшенной деревни...довольно-таки жуткое место...\nВ воздухе веет гнильная вонь...кажется вы тут не одни...стоит быть осторожным\nОсмотревшись вы нашли несколько интересных домиков:\nМясная лавка 1\nЖилой дом 2\nЖилой дом 3\nЖилой дом 4\nЦерковь 5" << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		village(1);
		break;
	case '2':
		nmoves++;
		village(2);
		break;
	case '3':
		nmoves++;
		village(3);
		break;
	case '4':
		nmoves++;
		village(4);
		break;
	case '5':
		nmoves++;
		village(5);
		break;
	default:
		prev_village();
		break;
	}
}
//деревня
void village(int vil) {
	system("cls");
	if (Language && first)
		house1 = "Dwelling house", house2 = "Dwelling house", house3 = "Dwelling house", meat = "closed", haha = "Find another way", meat_op = "Open", dach = "You approached the dacha...the gate is closed...\nYou tried to open it a little, but the dog immediately pounced on you...you quickly closed the gate...\nApparently you should distract it first...\n", dach1 = "Leave 1\n", dach2 = "", cruch = "You have approached the entrance to the catacombs...the door is boarded up...\nApparently we need to find a way to open the door...\nCut the boards 1\nLeave 2";
	if (!Language && first)
		house1 = "Жилой дом", house2 = "Жилой дом", house3 = "Жилой дом", meat = "закрыта", haha = "Найти иной путь", meat_op = "Открыть", dach = "Вы подошли к дачному участку...калитка закрыта...\nВы попытались её приоткрыть, но на вас сразу же накинулась собака...\nВы быстро закрыли калитку...видимо стоит её сначало отвлечь...\n", dach1 = "Уйти 1\n", dach2 = "", cruch = "Вы подошли к входу в катакомбы...дверь забита досками...\nВидимо надо найти способ открыть дверь...\nРазрубить доски 1\nУйти 2";
	first = false;
	if (vil == 1) {
		if (Language)
			cout << "___________________________________________\nYou come to a butcher's shop...the sign says something illegible...The door is " << meat << "\n" << meat_op << " 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к мясной лавке...на вывеске написано что-то неразборчивое...Дверь " << meat << "\n" << meat_op << " 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			meat_shop();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
	if (vil == 2) {
		if (Language) {
			cout << "___________________________________________\nYou have reached a small hut... The door is boarded up...\nMaybe there is another way...\n" << haha << " 1\nLeave 2" << endl;
			house1 = "Small hut";
		}
		if (!Language) {
			cout << "___________________________________________\nВы подошли к небольшой хижине...Дверь заколочена досками...\nВозможно есть иной путь...\n" << haha << " 1\nУйти 2" << endl;
			house1 = "Небольшая хижина";
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			hut();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
	if (vil == 3) {
		if (Language) {
			if (isHasMeat)
				dach1 = "Throw Meat 1\n", dach2 = "Leave 2\n";
			if (dog_die)
				dach = "You have reached the dacha...the gate is open...\n", dach1 = "Enter 1\n", dach2 = "Leave 2\n";
			cout << "___________________________________________\n" << dach << dach1 << dach2;
			house2 = "Dacha";
		}
		if (!Language) {
			if (isHasMeat)
				dach1 = "Кинуть Мясо 1\n", dach2 = "Уйти 2\n";
			if (dog_die)
				dach = "Вы подошли к дачному участку...калитка открыта...\n", dach1 = "Войти 1\n", dach2 = "Уйти 2\n";
			cout << "___________________________________________\n" << dach << dach1 << dach2;
			house2 = "Дача";
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			if (isHasMeat || dog_die)
				dacha();
			if (!isHasMeat)
				cycle5();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
	if (vil == 4) {
		if (Language) {
			cout << "___________________________________________\nYou have come to a two-story cottage...it looks rich, but abandoned...\nObviously no one has been watching the building for a long time\nEnter 1\nLeave 2" << endl;
			house3 = "Cottage";
		}
		if (!Language) {
			cout << "___________________________________________\nВы подошли к двухэтажному коттеджу...выглядит богато, но заброшено...\nЗа зданием явно давно никто не следит\nВойти 1\nУйти 2" << endl;
			house3 = "Коттедж";
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			cottage();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
	if (vil == 5) {
		system("cls");
			if (Language)
				cout << "___________________________________________\nYou have reached the church...the doors are open\nEnter 1\nLeave 2" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к церкви...двери открыты\nВойти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			church();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
}
//цикл деревни 
void cycle5() {
	if (Language && first)
		house1 = "Dwelling house", house2 = "Dwelling house", house3 = "Dwelling house", meat = "closed", haha = "Find another way", meat_op = "Open", dach = "You approached the dacha...the gate is closed...\nYou tried to open it a little, but the dog immediately pounced on you...you quickly closed the gate...\nApparently you should distract it first...\n", dach1 = "Leave 1\n", dach2 = "", cruch = "___________________________________________\nYou have approached the entrance to the catacombs...the door is boarded up...\nApparently we need to find a way to open the door...\nCut the boards 1\nLeave 2";
	if (!Language && first)
		house1 = "Жилой дом", house2 = "Жилой дом", house3 = "Жилой дом", meat = "закрыта", haha = "Найти иной путь", meat_op = "Открыть", dach = "Вы подошли к дачному участку...калитка закрыта...\nВы попытались её приоткрыть, но на вас сразу же накинулась собака...\nВы быстро закрыли калитку...видимо стоит её сначало отвлечь...\n", dach1 = "Уйти 1\n", dach2 = "", cruch = "___________________________________________\nВы подошли к входу в катакомбы...дверь забита досками...\nВидимо надо найти способ открыть дверь...\nРазрубить доски 1\nУйти 2";
	first = false;
	if (poison)
		infection_stage++;
	system("cls");
	if (Language && infection_stage < 10)
		stage = "Normal";
	if (!Language && infection_stage < 10)
		stage = "Нормально";
	if (Language && infection_stage > 10 && infection_stage < 15)
		stage = "Everything is bad";
	if (!Language && infection_stage > 10 && infection_stage < 15)
		stage = "Всё плохо";
	if (Language && infection_stage > 15 && infection_stage < 20)
		stage = "On the verge of death";
	if (!Language && infection_stage > 15 && infection_stage < 20)
		stage = "На грани смерти";
	if (infection_stage == 20) {
		if (Language)
			cout << "___________________________________________\nYou tried to resist the infection...but alas, you couldn't\nYOU ARE DEAD\n" << endl << endl;
		if (!Language)
			cout << "___________________________________________\nВы пытались сопротивляться заражению...но увы не смогли\nВЫ МЕРТВЫ\n" << endl << endl;
		cout << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl;
		gas_gas_gas = true;
		ndeath++;
		system("pause");
		main();
	}
	if (Language) {
		cout << "___________________________________________\nYou are standing in the middle of an abandoned village...\nButcher shop 1\n" << house1 << " 2\n" << house2 << " 3\n" << house3 << " 4\nChurch 5" << endl;
		if (isHasKey4)
			cout << endl << "You have: Key to the butcher shop..." << endl;
		if (isHasTrap)
			cout << endl << "You have: Bear trap..." << endl;
		if (isHasMeat)
			cout << endl << "You have: Rotten Meat..." << endl;
		if (isHasMask)
			cout << endl << "You have: Respirator..." << endl;
		if (isHasBrick)
			cout << endl << "You have: Log..." << endl;
		if (isHasAxe)
			cout << endl << "You have: Axe..." << endl;
		if (oil)
			cout << endl << "You have: Kerosene..." << endl;
		if (lamp)
			cout << endl << "You have: Kerosene lamp (EMPTY)..." << endl;
		if (lamp_oil)
			cout << endl << "You have: Kerosene lamp..." << endl;
		if (poison)
			cout << endl << "Stage of infection: " << stage << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы стоите в центре заброшенной деревни...\nМясная лавка 1\n" << house1 << " 2\n" << house2 << " 3\n" << house3 << " 4\nЦерковь 5" << endl;
		if (isHasKey4)
			cout << endl << "У вас есть: Ключ от мясной лавки..." << endl;
		if (isHasTrap)
			cout << endl << "У вас есть: Медвежий капкан..." << endl;
		if (isHasMeat)
			cout << endl << "У вас есть: Протухшее мясо..." << endl;
		if (isHasMask)
			cout << endl << "У вас есть: Респиратор..." << endl;
		if (isHasBrick)
			cout << endl << "У вас есть: Полено..." << endl;
		if(isHasAxe)
			cout << endl << "У вас есть: Топор..." << endl;
		if (oil)
			cout << endl << "У вас есть: Керосин..." << endl;
		if (lamp)
			cout << endl << "У вас есть: Керосиновая лампа (ПУСТО)..." << endl;
		if (lamp_oil)
			cout << endl << "У вас есть: Керосиновая лампа..." << endl;
		if (poison)
			cout << "========================" << endl << "Стадия заражения: " << stage << "\n========================" << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		village(1);
		break;
	case '2':
		nmoves++;
		village(2);
		break;
	case '3':
		nmoves++;
		village(3);
		break;
	case '4':
		nmoves++;
		village(4);
		break;
	case '5':
		nmoves++;
		village(5);
		break;
	default:
		cycle5();
		break;
	}
}
//мясная лавка 
void meat_shop() {
	system("cls");
	if (house1_com) {
		if (Language) {
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
			system("pause");
		}
		if (!Language) {
			cout << "___________________________________________\nЗдесь больше нет ничего интересного..." << endl;
			system("pause");
		}
		cycle5();
	}
	if (isHasKey4) {
		if (Language) {
			cout << "___________________________________________\nYou inserted the key into the lock and turned...the door gave in with difficulty and opened...you immediately felt an unbearable stench...\nEnter 1\nLeave 2" << endl;
			if (!isHasMask)
				cout << "===============================================\nPerhaps we should find something like a mask...\n===============================================" << endl;
			meat = "open", meat_op = "Come up";
		}
		if (!Language) {
			cout << "___________________________________________\nВы вставили ключ в замок и повернули...дверь с трудом поддалась и открылась...вы сразу почувствовали невыносимую вонь...\nВойти 1\nУйти 2" << endl;
			if (!isHasMask)
				cout << "===============================================\nВозможно стоит найти что-то на подобии маски...\n===============================================" << endl;
			meat = "открыта", meat_op = "Подойти";
		}
		isHasKey4 = false, meat_open = true;
		switch (_getch()) {
		case '1':
			nmoves++;
			system("cls");
			if (!isHasMask) {
				if (Language)
					cout << "___________________________________________\nYou entered a butcher's shop...the unbearable stench of decaying meat immediately made you vomit...\nIt's impossible to imagine how many years these remains have been rotting here...\nYou quickly found what you were looking for, namely a small piece of meat, and quickly left the shop\nYou seem to have contracted something while you were there...maybe you should have found a respirator first..." << endl;
				if (!Language)
					cout << "___________________________________________\nВы зашли в мясницкую лавку...от невыносимой вони разлагающегося мяса вас тут же стошнило...\nНевозможно представить сколько лет тут гниют эти останки...\nВы быстро нашли то, что искали, а именно небольшой кусочек мяса и быстро вышли из магазинчика\nКажется вы чем-то заразились пока были там...видимо стоило сначало найти респиратор..." << endl;
				poison = true;
			}
			if (isHasMask) {
				if (Language)
					cout << "___________________________________________\nYou entered the butcher's shop...there was devastation all around, and the floor and walls were decorated with rotting pieces of meat\nEven through the respirator you breathed with difficulty...going around the whole shop, you found something like a refrigerator\nInside it lay a rotten piece of meat ...You quickly stuffed it into your bag and left the store..." << endl;
				if (!Language)
					cout << "___________________________________________\nВы зашли в мясницкую лавку...кругом была разруха, а пол и стены украшали догнивающие куски мяса\nДаже через респиратор вы дышали с трудом...обойдя весь магазинчик, вы нашли что-то на подобии холодильника\nВнутри него лежал тухлый кусок мяса...Вы быстро засунули его в сумку и вышли из магазина..." << endl;
			}
			isHasMeat = true, house1_com = true;
			system("pause");
			cycle5();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
	if (meat_open) {
		if (Language) {
			cout << "___________________________________________\nYou came to a butcher's shop...the door was open and an unbearable stench emanated from it...\nEnter 1\nLeave 2" << endl;
			if (!isHasMask)
				cout << "===============================================\nPerhaps we should find something like a mask...\n===============================================" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы подошли к мясной лавке...дверь была открыта и из неё источалась невыносимая вонь...\nВойти 1\nУйти 2" << endl;
			if (!isHasMask)
				cout << "===============================================\nВозможно стоит найти что-то на подобии маски...\n===============================================" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			system("cls");
			if (!isHasMask) {
				if (Language)
					cout << "___________________________________________\nYou entered a butcher's shop...the unbearable stench of decaying meat immediately made you vomit...\nIt's impossible to imagine how many years these remains have been rotting here...\nYou quickly found what you were looking for, namely a small piece of meat, and quickly left the shop\nYou seem to have contracted something while you were there...maybe you should have found a respirator first..." << endl;
				if (!Language)
					cout << "___________________________________________\nВы зашли в мясницкую лавку...от невыносимой вони разлагающегося мяса вас тут же стошнило...\nНевозможно представить сколько лет тут гниют эти останки...\nВы быстро нашли то, что искали, а именно небольшой кусочек мяса и быстро вышли из магазинчика\nКажется вы чем-то заразились пока были там...видимо стоило сначало найти респиратор..." << endl;
				poison = true;
			}
			if (isHasMask) {
				if (Language)
					cout << "___________________________________________\nYou entered the butcher's shop...there was devastation all around, and the floor and walls were decorated with rotting pieces of meat\nEven through the respirator you breathed with difficulty...going around the whole shop, you found something like a refrigerator\nInside it lay a rotten piece of meat ...You quickly stuffed it into your bag and left the store..." << endl;
				if (!Language)
					cout << "___________________________________________\nВы зашли в мясницкую лавку...кругом была разруха, а пол и стены украшали догнивающие куски мяса\nДаже через респиратор вы дышали с трудом...обойдя весь магазинчик, вы нашли что-то на подобии холодильника\nВнутри него лежал тухлый кусок мяса...Вы быстро засунули его в сумку и вышли из магазина..." << endl;
			}
			isHasMeat = true, house1_com = true;
			system("pause");
			cycle5();
			break;
		case '2':
			nmoves++;
			cycle5();
			break;
		default:
			cycle5();
			break;
		}
	}
	if (!isHasKey4) {
		if (Language)
			cout << "___________________________________________\nYou don't have the key to this door..." << endl;
		if (!Language)
			cout << "___________________________________________\nУ тебя нет ключа от этой двери..." << endl;
		system("pause");
		cycle5();
	}
}
//хижина мясника 
void hut() {
	if (Language && firhut)
		door1 = "Door", door2 = "Strange door", haha = "Climb in the window";
	if (!Language && firhut)
		door1 = "Дверь", door2 = "Странная дверь", haha = "Залезть в окно";
	firhut = false;
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou walked around the shack and climbed through one of the open windows...\nIt was a very old hut, almost completely rotten.\nYou found:\n" << door1 << " 1\n" << door2 << " 2\nHatch to basement 3\nLeave 4" << endl;
	if (!Language)
		cout << "___________________________________________\nВы обошли лачугу и залезли в одно из открытых окон...\nЭто была очень старая, практически полностью сгнившая хижина\nВы нашли:\n" << door1 <<" 1\n" << door2 << " 2\nЛюк в подвал 3\nУйти 4" << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language) {
			cout << "___________________________________________\nThis is the front door...surprisingly, it's closed on the other side..." << endl;
			door1 = "Entrance door";
		}
		if (!Language) {
			cout << "___________________________________________\nЭто входная дверь...удивительно, но она закрыта с другой стороны..." << endl;
			door1 = "Входная дверь";
		}
		system("pause");
		hut();
		break;
	case '2':
		nmoves++;
		if(Language)
			door2 = "Bedroom";
		if(!Language)
			door2 = "Спальня";
		room1();
		break;
	case '3':
		nmoves++;
		system("cls");
		if (isHasMask) {
			if (Language)
				cout << "___________________________________________\nYou opened a trapdoor to the basement...heaps of decomposing bodies lay in its depths...\nYou decided not to go there and just closed the trapdoor..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы открыли люк в подвал...в его глубинах лежали горы разлагающихся тел...\nВы решили не лезть туда и просто закрыли люк..." << endl;
		}
		if (!isHasMask) {
			if (Language)
				cout << "___________________________________________\nYou opened the hatch to the basement...a stream of rotten stink immediately flew into your face\nYou quickly closed the hatch...but, alas, you managed to inhale this rubbish...\nYou don't feel very well" << endl;
			if (!Language)
				cout << "___________________________________________\nВы открыли люк в подвал...вам в лицо сразу же влетел поток гнильной вони\nВы быстро закрыли люк...но увы успели надышаться этой дрянью...\nВы чувствуете себя не очень хорошо" << endl;
			poison = true;
		}
		system("pause");
		hut();
		break;
	case '4':
		nmoves++;
		cycle5();
		break;
	default:
		hut();
	}
}
//спальня хижины 
void room1() {
	system("cls");
	if (firroo) {
		if (Language)
			cout << "___________________________________________\nYou entered a small room with rickety walls...looks like a bedroom\nLooking around the room you find:\nBedside table 1\nBed 2\nCloset 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в небольшую комнату с покосившимися стенами...похоже на спальню\nОсмотрев комнату вы нашли:\nТумбочка 1\nКровать 2\nШкаф 3\nУйти 4" << endl;
	}
	if (!firroo) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the middle of the bedroom...\nBedside table 1\nBed 2\nCloset 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите в центре спальни...\nТумбочка 1\nКровать 2\nШкаф 3\nУйти 4" << endl;
	}
	firroo = false;
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou opened a small nightstand...it contained several packs of cigarettes...nothing interesting..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли небольшую тумбочку...в ней лежали несколько пачек сигарет...ничего интересного..." << endl;
		system("pause");
		room1();
		break;
	case '2':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou looked under the bed...there was a skeleton under it...interesting..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы заглянули под кровать...под ней лежал скелет...интересненько..." << endl;
		system("pause");
		room1();
		break;
	case '3':
		nmoves++;
		system("cls");
		if (house2_com) {
			if (Language)
				cout << "___________________________________________\nYou opened the closet...there are a lot of things...nothing interesting..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы открыли шкаф...там лежит куча вещей...ничего интересного..." << endl;
			system("pause");
			room1();
		}
		if (!isHasKey4) {
			if (Language)
				cout << "___________________________________________\nYou opened the closet...there are a lot of things and some kind of bag...\nYou took the bag for yourself...there was a key in it..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы открыли шкаф...там лежит куча вещей и какая-то сумка...\nВы взяли сумку себе...в ней был ключ..." << endl;
			isHasKey4 = true, house2_com = true;
			system("pause");
			room1();
		}
		break;
	case '4':
		nmoves++;
		firroo = true;
		hut();
		break;
	default:
		room1();
		break;
	}
}
//дача 
void dacha() {
	system("cls");
	if (!fit) {
		if (Language) {
			cout << "___________________________________________\nYou are standing in the center of the dacha...\nPavilion 1\nWarehouse 2\nPorch 3\nWindow 4\nLeave 5" << endl;
		if (isHasBrick)
			cout << endl << "You have: Log..." << endl;
	}
		if (!Language) {
			cout << "___________________________________________\nВы стоите в центре дачного участка...\nБеседка 1\nСклад 2\nКрыльцо 3\nОкно 4\nУйти 5" << endl;
			if (isHasBrick)
				cout << endl << "У вас есть: Полено..." << endl;
		}
	}
	if (dog_die && fit) {
		if (Language)
			cout << "___________________________________________\nYou entered through an open gate...sorry for the dog...\nLooking around you found:\nPavilion 1\nWarehouse 2\nPorch 3\nWindow 4\nLeave 5" << endl;
		if (!Language)
			cout << "___________________________________________\nВы зашли через открытую калитку...жалко пёселя...\nОсмотревшись вы нашли:\nБеседка 1\nСклад 2\nКрыльцо 3\nОкно 4\nУйти 5" << endl;
		fit = false;
	}
	if (isHasMeat && fit) {
		if (Language) 
			cout << "___________________________________________\nYou threw a piece of meat over the fence...immediately after that, strange sounds were heard from behind the fence\nWhen everything was quiet, you opened the gate and went inside...the lifeless body of a dog lay in front of you\nApparently the meat was a little not fresh...Looking around you found:\nPavilion 1\nWarehouse 2\nPorch 3\nWindow 4\nLeave 5" << endl;
		if (!Language) 
			cout << "___________________________________________\nВы кинули кусок мяса через забор...сразу же после этого из-за забора раздались странные звуки\nКогда всё затихло вы открыли калитку и зашли внутрь...перед вами лежало безжизненное тело собаки\nВидимо мясо было немного не свежим...Осмотревшись вы нашли:\nБеседка 1\nСклад 2\nКрыльцо 3\nОкно 4\nУйти 5" << endl;
		isHasMeat = false, dog_die = true, fit = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		pavilion();
		break;
	case '2':
		nmoves++;
		warehouse();
		break;
	case '3':
		nmoves++;
		system("cls");
		if (!home_open) {
			if (Language)
				cout << "___________________________________________\nYou walked up to the porch and tried to open the front door...closed on the other side..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к крыльцу и попытались открыть входную дверь...закрыто с другой стороны..." << endl;
			system("pause");
			dacha();
		}
		if (home_open) {
			if (Language)
				cout << "___________________________________________\nYou walked up to the porch and opened the front door..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к крыльцу и открыли входную дверь..." << endl;
			system("pause");
			home();
		}
		break;
	case '4':
		nmoves++;
		system("cls");
		if (home_open) {
			if (Language)
				cout << "___________________________________________\nYou almost cut yourself last time...it's better to go through the door..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы и так в прошлый раз чуть не порезались...лучше зайти через дверь..." << endl;
			system("pause");
			dacha();
		}
		if (isHasBrick) {
			if (Language)
				cout << "___________________________________________\nYou moved away from the window, swung and threw a log at him...\nIt was loud...but now you can get into the house...\nYou carefully climbed through the window..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы отошли от окна подальше, размахнулись и кинули в него полена...\nБыло громко...но теперь можно попасть в дом...\nВы аккуратно залезли через окно..." << endl;
			system("pause");
			home();
		}
		if (!isHasBrick) {
			if (Language)
				cout << "___________________________________________\nAn ordinary glass window in a wooden frame...\n...hmm..a glass window..." << endl;
			if (!Language)
				cout << "___________________________________________\nОбычное стеклянное окно в деревянной раме...\n...хм..стеклянное окно..." << endl;
			system("pause");
			dacha();
		}
		break;
	case '5':
		nmoves++;
		fit = true;
		cycle5();
		break;
	default:
		dacha();
		break;
	}
}
//беседка 
void pavilion() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou entered the pavilion...it was an ordinary log pavilion with a table in the center...\nFlies were flying over the table, and there was a jug of water on the table...\nDrink 1\nLeave 2" << endl;
	if (!Language)
		cout << "___________________________________________\nВы зашли в беседку...это была обычная бревенчатая беседка со столом в центре...\nНад столом летали мухи, а на самом столе стоял кувшин с водой...\nПопить 1\nУйти 2" << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou took a few sips and passed out immediately... it didn't seem like it was really water...\nYOU ARE DEAD";
		if (!Language)
			cout << "___________________________________________\nВы сделали несколько глотков и тут же отрубились...кажется это была не совсем вода...\nВЫ МЕРТВЫ";
		cout << endl << endl << "          DDDDD    OOOO       NN  NN   OOOO   TTTTTT\n          DD  DD  OO  OO      NNN NN  OO  OO    TT\n          DD  DD  OO  OO      NN NNN  OO  OO    TT\n          DD  DD  OO  OO      NN  NN  OO  OO    TT\n          DDDDD    OOOO       NN  NN   OOOO     TT" << endl << endl;
		cout << "           DDDDD   RRRRR   IIIIII  NN  NN  KK  KK\n           DD  DD  RR  RR    II    NNN NN  KK KK\n           DD  DD  RRRRR     II    NN NNN  KKKK\n           DD  DD  RR  RR    II    NN  NN  KK KK\n           DDDDD   RR  RR  IIIIII  NN  NN  KK  KK"<<endl<<endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		ndeath++;
		main();
		break;
	case '2':
		nmoves++;
		dacha();
		break;
	default:
		dacha();
		break;
	}
}
//поленница 
void warehouse() {
	system("cls");
	if (isHasBrick || house3_com) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь больше нет ничего интересного..." << endl;
	}
	if (!isHasBrick) {
		if (Language)
			cout << "___________________________________________\nYou entered a small woodpile...there was some firewood...\nYou took a log" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в небольшую поленницу...тут было немного дров...\nВы взяли полено" << endl;
		isHasBrick = true;
	}
	system("pause");
	dacha();
}
//дом дачи 
void home() {
	system("cls");
	if (!fir) {
		if (Language)
			cout << "___________________________________________\nYou stand in the center of the hall\nBedroom 1\nLiving room 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите в центре коридора\nСпальня 1\nГостинная 2\nУйти 3" << endl;
	}
	if (fir && home_open) {
		if (Language)
			cout << "___________________________________________\nYou entered the house...damn it, it's more convenient than through the window...\nBedroom 1\nLiving room 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы зашли в дом...блин, а ведь так удобнее чем через окно...\nСпальня 1\nГостинная 2\nУйти 3" << endl;
	}
	if (fir && isHasBrick) {
		if (Language)
			cout << "___________________________________________\nYou entered the house...the first thing you did was go to the front door and open it...\nClimbing through the broken window is too dangerous...\nLooking around you found:\nBedroom 1\nLiving room 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы зашли в дом...первым делом вы подошли к входной двери и открыли её...\nЛезть через разбитое окно слишком опасно...\nОсмотревшись вы нашли:\nСпальня 1\nГостинная 2\nУйти 3" << endl;
		fir = false, home_open = true, isHasBrick = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		beroom();
		break;
	case '2':
		nmoves++;
		liroom();
		break;
	case '3':
		nmoves++;
		fir = true;
		dacha();
		break;
	default:
		home();
		break;
	}
}
//спальня дачи 
void beroom() {
	system("cls");
	if (fig) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the middle of the bedroom...\nBed 1\nChest of drawers 2\nSmall mirror 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите посреди спальни...\nКровать 1\nКомод 2\nНебольшое зеркальце 3\nУйти 4" << endl;
	}
	if (!fig) {
		if (Language)
			cout << "___________________________________________\nYou entered a small bedroom...\nIt was an ordinary village bedroom...cheap but cheerful\nLooking around you found:\nBed 1\nChest of drawers 2\nSmall mirror 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в небольшую спальню...\nЭто была обычная деревенская спальня...дёшево, но сердито\nОсмотревшись вы нашли:\nКровать 1\nКомод 2\nНебольшое зеркальце 3\nУйти 4" << endl;
		fig = true;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou went to the bed and looked under it...there is no skeleton(((" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к кровати и заглянули под неё...тут нет скелета(((" << endl;
		sans = true;
		system("pause");
		beroom();
		break;
	case '2':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou went to the chest of drawers and opened the top drawer...empty\nThere must be a knife in the bottom drawer...\nAh...no. empty too..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к комоду и открыли верхний ящик...пусто\nДолжно быть в нижнем ящике нож...\nА...нет. тоже пусто..." << endl;
		system("pause");
		beroom();
		break;
	case '3':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nIt's you...handsome...\n                                                    X#@#9     ;.                                            \n                                              .@            A                                               \n                                           B                  B  r;                                         \n                                         9          h          M                                            \n                                       i    9   G      ,GS5B    @                                           \n                                     S  S   ,    s                                                          \n                                        .@@2 i                   &                                          \n                                  s    r    #   9   .  B@H       #                                          \n                              X S    :      M 5      @     s                                                \n                               r      : #   ,       A        3                                              \n                            9       A.     r;       5       B     9                                         \n                                    #     . i  h    ;   #   @     9r                                        \n                          .         ,A   & H  A  : 5        #     r  i                                      \n                           r             h   H   2 9             .                                          \n                          9                 B      r             @  .                                       \n                         r                 H      3 :S.SM                                                   \n                                          B        ;            @ ,                                         \n                        3                 H         ,          B                                            \n                        :     ,i,.  .        , . ,.           ,                                             \n                           B   ,   i  ,    .       ; 3       ,                                              \n                             5   ,3hXr:,;XAh:        &      ,                                               \n                                G                5   B     i                                                \n                        M          ,H.       Xs      :    @                                                 \n                                :      :                 X                                                  \n                         H                             @                                                    \n                          #                          @                                                      \n                           ;          i          H9                                                         \n                              @            X@3                                                              " << endl;
		if (!Language)
			cout << "___________________________________________\nЭто ты...красавец...\n                                                    X#@#9     ;.                                            \n                                              .@            A                                               \n                                           B                  B  r;                                         \n                                         9          h          M                                            \n                                       i    9   G      ,GS5B    @                                           \n                                     S  S   ,    s                                                          \n                                        .@@2 i                   &                                          \n                                  s    r    #   9   .  B@H       #                                          \n                              X S    :      M 5      @     s                                                \n                               r      : #   ,       A        3                                              \n                            9       A.     r;       5       B     9                                         \n                                    #     . i  h    ;   #   @     9r                                        \n                          .         ,A   & H  A  : 5        #     r  i                                      \n                           r             h   H   2 9             .                                          \n                          9                 B      r             @  .                                       \n                         r                 H      3 :S.SM                                                   \n                                          B        ;            @ ,                                         \n                        3                 H         ,          B                                            \n                        :     ,i,.  .        , . ,.           ,                                             \n                           B   ,   i  ,    .       ; 3       ,                                              \n                             5   ,3hXr:,;XAh:        &      ,                                               \n                                G                5   B     i                                                \n                        M          ,H.       Xs      :    @                                                 \n                                :      :                 X                                                  \n                         H                             @                                                    \n                          #                          @                                                      \n                           ;          i          H9                                                         \n                              @            X@3                                                              " << endl;
		system("pause");
		beroom();
		break;
	case '4':
		nmoves++;
		fig = false;
		home();
		break;
	default:
		beroom();
		break;
	}
}
//гостинная дачи 
void liroom() {
	system("cls");
	if (fig2) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the center of the living room...\nSofa 1\Rack 2\nCoffee table 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите в центре гостиной...\nДиван 1\nСтеллаж 2\nЖурнальный столик 3\nУйти 4" << endl;
	}
	if (!fig2) {
		if (Language)
			cout << "___________________________________________\nYou entered the living room...finally, somewhere in this village there is no rotten stench...\nLooking around you found:\nSofa 1\Rack 2\nCoffee table 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в гостиную...наконец-то хоть где-то в этой деревне нет гнильной вони...\nОсмотревшись вы нашли:\nДиван 1\nСтеллаж 2\nЖурнальный столик 3\nУйти 4" << endl;
		fig2 = true;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou sat down on the couch and felt how soft it was...and how much it hurts...\nYou couldn't help but fall asleep...forever\nYOU ARE DEAD" << endl;
		if (!Language)
			cout << "___________________________________________\nВы присели на диван и почувствовали насколько он мягок...и насколько у вас всё болит...\nВы не смогли удержаться и уснули...навсегда\nВЫ МЕРТВЫ " << endl;
		cout << endl << endl << "          DDDDD    OOOO       NN  NN   OOOO   TTTTTT\n          DD  DD  OO  OO      NNN NN  OO  OO    TT\n          DD  DD  OO  OO      NN NNN  OO  OO    TT\n          DD  DD  OO  OO      NN  NN  OO  OO    TT\n          DDDDD    OOOO       NN  NN   OOOO     TT" << endl << endl;
		cout << "             SSSS   LL      EEEEE  EEEEE  PPPPP\n            SS      LL      EE     EE     PP  PP\n             SSSS   LL      EEEE   EEEE   PPPPP\n	        SS  LL      EE     EE     PP\n             SSSS   LLLLLL  EEEEE  EEEEE  PP" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		fig2 = false;
		ndeath++;
		main();
		break;
	case '2':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou approached a bookcase...it was full of books\nYou took out one '72 Facts About Concrete'...you opened a random page\n...The first prototype of concrete mix was invented about 6000 years ago...\nInteresting...you put the book away..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к стеллажу...он был полностью забит книгами\nВы достали одну '72 Факта о Бетоне'...вы открыли случайную страницу\n...Первый прототип бетонной смеси был изобретен около 6000 лет назад...\nИнтересно...вы убрали книгу на место..." << endl;
		system("pause");
		liroom();
		break;
	case '3':
		nmoves++;
		system("cls");
		if (isHasAxe || house3_com) {
			if (Language)
				cout << "___________________________________________\nWho did this to a poor table?.." << endl;
			if (!Language)
				cout << "___________________________________________\nКто так поступил с бедным столиком?.." << endl;
		}
		if (!isHasAxe) {
			if (Language)
				cout << "___________________________________________\nYou have come to the coffee table...there is an ax stuck in it...\nNow you have an ax..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к журнальному столику...в нём торчит топор...\nТеперь у вас есть топор..." << endl;
			isHasAxe = true, house3_com = true;
		}
		system("pause");
		liroom();
		break;
	case '4':
		nmoves++;
		fig2 = false;
		home();
		break;
	default:
		liroom();
		break;
	}
}
//коттедж 
void cottage() {
	system("cls");
	if (!fig3) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the center of the first floor...\nKitchen 1\nWorkshop 2\Bathroom 3\nStairs to the second floor 4\nLeave 5" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите в центре первого этажа...\nКухня 1\nМастерская 2\nВанная комната 3\nЛестница на второй этаж 4\nУйти 5" << endl;
	}
	if (fig3) {
		if (Language)
			cout << "___________________________________________\nYou entered the spacious hall on the first floor...\nThere were dozens of paintings hanging on the walls...\nBut the only thing that caught your attention was:\nKitchen 1\nWorkshop 2\Bathroom 3\nStairs to the second floor 4\nLeave 5" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в просторный зал первого этажа...\nНа стенах висели десятки картин...\nНо единственное что привлекло ваше внимание это:\nКухня 1\nМастерская 2\nВанная комната 3\nЛестница на второй этаж 4\nУйти 5" << endl;
		fig3 = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou went into the kitchen...it was a bright and spacious room with a panoramic window...\nThe views from the window, to put it mildly, are not very...\nTherefore, you walked around the room a bit and found some canned food...\nFor quite a long time you didn't eat...so we decided to have a bite to eat\nDidn't the mansion's kitchen teach you anything?\nYOU ARE DEAD" << endl;
		if (!Language)
			cout << "___________________________________________\nВы зашли на кухню...это было яркое и просторное помещение с панорамным окно...\nВиды из окна мягко говоря не очень...\nПоэтому вы немного прошлись по помещению и нашли немного консервов...\nУже довольно-таки давно вы ничего не ели...поэтому решили перекусить\nНеужели кухня особняка вас ничему не научила?\nВЫ МЕРТВЫ" << endl;
		cout << endl << endl << "          DDDDD    OOOO       NN  NN   OOOO   TTTTTT\n          DD  DD  OO  OO      NNN NN  OO  OO    TT\n          DD  DD  OO  OO      NN NNN  OO  OO    TT\n          DD  DD  OO  OO      NN  NN  OO  OO    TT\n          DDDDD    OOOO       NN  NN   OOOO     TT" << endl << endl;
		cout << "                  EEEEE   AAAA   TTTTTT  !!!\n                  EE     AA  AA    TT    !!!\n                  EEEE   AAAAAA    TT    !!!\n                  EE     AA  AA    TT\n                  EEEEE  AA  AA    TT    !!!" << endl << endl;
		cout << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl;
		system("pause");
		fig3 = true;
		ndeath++;
		main();
		break;
	case '2':
		nmoves++;
		cot_workshop();
		break;
	case '3':
		nmoves++;
		cot_cabinet();
		break;
	case '4':
		nmoves++;
		floor_2();
		break;
	case '5':
		nmoves++;
		fig3 = true;
		cycle5();
		break;
	default:
		cottage();
		break;
	}
}
//мастерская коттеджа 
void cot_workshop() {
	system("cls");
	if (!fit1) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the middle of the workshop...\nTool box 1\nWooden box 2\nCardboard box 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите посреди мастерской...\nЯщик с инструментами 1\nДеревянный ящик 2\nКартонную каробку 3\nУйти 4" << endl;
	}
	if (fit1) {
		if (Language)
			cout << "___________________________________________\nYou entered a small workshop...\nLooking around you found:\nTool box 1\nWooden box 2\nCardboard box 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в небольшую мастерскую...\nОсмотревшись вы нашли:\nЯщик с инструментами 1\nДеревянный ящик 2\nКартонную каробку 3\nУйти 4" << endl;
		fit1 = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou looked into the tool box...\num...it doesn't look like tools more than specific toys..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы заглянули в ящик с инструментами...\nэм...это больше походит не на инструменты, а на специфические игрушки..." << endl;
		system("pause");
		cot_workshop();
		break;
	case '2':
		nmoves++;
		system("cls");
		if (oil || house4_com) {
			if (Language)
				cout << "___________________________________________\nEmpty broken box...nothing interesting..." << endl;
			if (!Language)
				cout << "___________________________________________\nПустой сломанный ящик...ничего интересного..." << endl;
			system("pause");
			cot_workshop();
		}
		if (isHasAxe) {
			if (Language)
				cout << "___________________________________________\nYou hit the lid of the box with all your strength with your ax...it broke in two...\nThere was a can of Kerosene in the box..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы со всей силы ударили топором по крышке ящика...она разломалась надвое...\nВ ящике лежала банка Керосина..." << endl;
			oil = true, chg = true;
			if (oil && lamp)
				lamp_oil = true, lamp = false, oil = false, house4_com = true;
			if (chg && church_open)
				isHasAxe = false;
			system("pause");
			cot_workshop();
		}
		if (!isHasAxe) {
			if (Language)
				cout << "___________________________________________\nYou have nothing to open this box..." << endl;
			if (!Language)
				cout << "___________________________________________\nТебе нечем открыть этот ящик..." << endl;
			system("pause");
			cot_workshop();
		}
		break;
	case '3':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou looked into the cardboard box...there is an inflatable boat...\nIt seems now is not the time for long voyages" << endl;
		if (!Language)
			cout << "___________________________________________\nВы заглянули в картонную коробку...а там бипки...\nВы решили их не трогать..." << endl;
		system("pause");
		cot_workshop();
		break;
	case '4':
		nmoves++;
		fit1 = true;
		cottage();
		break;
	default:
		cot_workshop();
	}
}
//ванна коттеджа 
void cot_cabinet() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou entered the bathroom...it was full of dirty water...\nYou pulled back the bathroom curtain and saw a terrifying sight...\nThere was a girl's bloodied body in the bathtub\nNothing interesting...\nTake a shower 1\nLeave 2" << endl;
	if (!Language)
		cout << "___________________________________________\nВы вошли в ванную комнату...она вся была залита грязной водой...\nВы отодвинули шторку ванной и увидели ужасающую картину...\nВ ванне лежало окровавленное тело девушки\nНичего интересного...\nПринять душ 1\nУйти 2" << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		if (Language)
			cout << endl << "___________________________________________\n- Sick in the head?" << endl;
		if (!Language)
			cout << endl << "___________________________________________\n- Совсем больной?" << endl;
		system("pause");
		cottage();
		break;
	case '2':
		nmoves++;
		cottage();
		break;
	default:
		cot_cabinet();
		break;
	}
}
//второй этаж коттеджа 
void floor_2() {
	system("cls");
	if (!fit2) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the center of the second floor...\nBedroom 1\nBedroom 2\nAttic 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите в центре второго этажа...\nСпальня 1\nСпальня 2\nЧердак 3\nУйти 4" << endl;
	}
	if (fit2) {
		if (Language)
			cout << "___________________________________________\nYou came to the stairs and climbed to the second floor...\nLooking around you found:\nBedroom 1\nBedroom 2\nAttic 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к лестнице и поднялись на второй этаж...\nОсмотревшись вы нашли:\nСпальня 1\nСпальня 2\nЧердак 3\nУйти 4" << endl;
		fit2 = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (lamp || house4_com) {
			if (Language)
				cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
			if (!Language)
				cout << "___________________________________________\nТут больше нет ничего интересного..." << endl;
			system("pause");
			floor_2();
		}
		if (!lamp) {
			if (Language)
				cout << "___________________________________________\nYou entered a spacious bedroom...\nIt was a very beautiful room with a large double bed...\nLooking around, you found a Kerosene lamp lying on the bed...\nYou took it and tried to light it...to no avail...probably ran out of kerosene..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы вошли в просторную спальню...\nЭто было весьма красивое помещение с большой двуспальной кроватью...\nОсмотревшись вы нашли лежащую на кровати Керосиновую лампу...\nВы взяли её и попробовали зажечь...безрезультатно...видимо кончился керосин..." << endl;
			lamp = true;
			if (oil && lamp)
				lamp_oil = true, lamp = false, oil = false, house4_com = true;
			system("pause");
			floor_2();
		}
		break;
	case '2':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou entered a spacious bedroom...when suddenly the floor collapsed under your feet...\nYou fell to the first floor...but unfortunately...a huge rebar stuck in your back...\nYOU ARE DEAD" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в просторную спальню...как вдруг под вашими ногами провалился пол...\nВы упали на первый этаж...но увы неудачно...вам в спину воткнулась огромная арматура...\nВЫ МЕРТВЫ" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		fit1 = true, fit2 = true;
		ndeath++;
		main();
		break;
	case '3':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nThere is no boogeyman there!" << endl;
		if (!Language)
			cout << "___________________________________________\nНет там никакого бугимена!" << endl;
		system("pause");
		floor_2();
		break;
	case '4':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou walked up to the stairs and went down to the first floor..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к лестнице и спустились на первый этаж..." << endl;
		fit2 = true;
		system("pause");
		cottage();
		break;
	default:
		floor_2();
		break;
	}
}
//церковь 
void church() {
	system("cls");
	if (!T_virus) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the center of the church...\nClimbing the tower 1\nScaffolding 2\nDescent into the catacombs 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите в центре церкви...\nПодъём на башню 1\nСтроительные леса 2\nСпуск в катакомбы 3\nУйти 4" << endl;
	}
	if (T_virus) {
		if (Language)
			cout << "___________________________________________\nYou entered the church...\nIt was a spacious catholic church...although half destroyed\nLooking around you found:\nClimbing the tower 1\nScaffolding 2\nDescent into the catacombs 3\nLeave 4" << endl;
		if (!Language)
			cout << "___________________________________________\nВы зашли в церковь...\nЭто была просторная католическая церковь...правда наполовину разрушенная\nОсмотревшись вы нашли:\nПодъём на башню 1\nСтроительные леса 2\nСпуск в катакомбы 3\nУйти 4" << endl;
		T_virus = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (Language)
			cout << "___________________________________________\nYou've reached the stairs leading to the tower...it's broken in two...\nAlas, it's impossible to climb..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к лестнице ведущей в башню...она сломана надвое...\nУвы, но подняться невозможно..." << endl;
		system("pause");
		church();
		break;
	case '2':
		nmoves++;
		system("cls");
		if (isHasMask) {
			if (Language)
				cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
			if (!Language)
				cout << "___________________________________________\nЗдесь больше нет ничего интересного..." << endl;
		}
		if (!isHasMask) {
			if (Language)
				cout << "___________________________________________\nYou approached the scaffolding...next to it were a can of paint and a respirator...\nNow you are S.T.A.L.K.E.R." << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к строительным лесам...рядом с ними лежали банка с краской и респиратор...\nТеперь вы С.Т.А.Л.К.Е.Р." << endl;
			isHasMask = true;
		}
		system("pause");
		church();
		break;
	case '3':
		nmoves++;
		catacombs();
		break;
	case '4':
		nmoves++;
		T_virus = true;
		cycle5();
		break;
	default:
		church();
		break;
	}
}
//катакомбы 
void catacombs() {
	system("cls");
	cout << cruch << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		system("cls");
		if (church_open) {
			if (lamp_oil) {
				isHasKey4 = false, isHasMeat = false, isHasMask = false, isHasBrick = false, isHasAxe = false, oil = false, lamp = false, lamp_oil = false, poison = false;
				deep_catacombs();
			}
			if (!lamp_oil) {
				if (Language)
					cout << "___________________________________________\nYou opened the door to the catacombs and were about to go there...\nWhen you suddenly realized that it was too dark...\nWe need to find at least some source of light..." << endl;
				if (!Language)
					cout << "___________________________________________\nВы открыли дверь в катакомбы и собрались уже было туда идти...\nКак вдруг поняли, что там слишком темно...\nНадо найти хоть какой-то источник света..." << endl;
				system("pause");
				church();
			}
		}
		if (isHasAxe) {
			if (Language) {
				cout << "___________________________________________\nYou cut those planks with difficulty...wasting about an hour...\nBut...the door is now open!" << endl;
				cruch = "___________________________________________\nYou have reached the entrance to the catacombs......the door is open\nEnter 1\nLeave 2";
			}
			if (!Language) {
				cout << "___________________________________________\nВы с трудом разрубили эти доски...потратив где-то час времени...\nНо зато...дверь теперь открыта!" << endl;
				cruch = "___________________________________________\nВы подошли к входу в катакомбы......дверь открыта\nВойти 1\nУйти 2";
			}
			church_open = true;
			if (chg)
				isHasAxe = false;
			system("pause");
			church();
		}
		if (!isHasAxe) {
			if (Language)
				cout << "___________________________________________\nAnd what are you going to cut them with?" << endl;
			if (!Language)
				cout << "___________________________________________\nИ чем ты собрался их рубить?" << endl;
			system("pause");
			church();
		}
		break;
	case '2':
		nmoves++;
		church();
		break;
	default:
		catacombs();
		break;
	}
}
//глубиные катакомбы 
void deep_catacombs() {
	system("cls");
	if (!tigr) {
		if (Language) {
			cout << "___________________________________________\nYou are standing in the middle of the catacombs...\nDoor 1\nDoor 2\ nDoor 3\nDoor 4" << endl;
			if (isHasKey5)
				cout << endl << "You have: Key..." << endl;
			if (isHasTrap)
				cout << endl << "You have: Bear trap..." << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы стоите посреди катакомб...\nДверь 1\nДверь 2\nДверь 3\nДверь 4" << endl;
			if (isHasKey5)
				cout << endl << "У вас есть: Ключ..." << endl;
			if (isHasTrap)
				cout << endl << "У вас есть: Медвежий капкан..." << endl;
		}
	}
	if (tigr) {
		if (Language) {
			cout << "___________________________________________\nYou opened the door and entered the catacombs...when suddenly the door slammed shut behind you...\nApparently it can't be opened anymore...\nYou continued to descend into the catacombs...as you descended, you saw a fork:\nDoor 1\nDoor 2\ nDoor 3\nDoor 4" << endl;
			if (isHasKey5)
				cout << endl << "You have: Key..." << endl;
			if (isHasTrap)
				cout << endl << "You have: Bear trap..." << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы открыли дверь и зашли в катакомбы...как вдруг дверь за вами захлопнулась...\nВидимо её уже не открыть...\nВы продолжили спускаться в катакомбы...спустившись вашему взору предстала развилка:\nДверь 1\nДверь 2\nДверь 3\nДверь 4" << endl;
			if (isHasKey5)
				cout << endl << "У вас есть: Ключ..." << endl;
			if (isHasTrap)
				cout << endl << "У вас есть: Медвежий капкан..." << endl;
		}
		tigr = false;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		deep_room1();
		break;
	case '2':
		nmoves++;
		deep_room2();
		break;
	case '3':
		nmoves++;
		deep_room3();
		break;
	case '4':
		nmoves++;
		deep_room4();
		break;
	default:
		deep_catacombs();
		break;
	}
}
//комната с книжкой 
void deep_room1() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou entered the first door...it was a small room...\nThere was a table in the center of the room...on it lay the 'Quantum Physics Textbook'...\nYou opened it..." << endl;
	if (!Language)
		cout << "___________________________________________\nВы зашли в первую дверь...это была небольшая комната...\nВ центре комнаты стоял стол...на нём лежал 'Учебник по квантовой физике'...\nВы открыли его..." << endl;
	system("pause");
	system("cls");
	if (Language)
		cout << "___________________________________________\nInside the 'Quantum Physics Textbook' was the 'Joke Book'...you opened it..." << endl;
	if (!Language)
		cout << "___________________________________________\nВнутри 'Учебника по квантовой физике' был 'Сборник анекдотов'...вы открыли его..." << endl;
	system("pause");
	system("cls");
	if (Language)
		cout << "___________________________________________\nInside the 'Joke Book' was the 'Quantum Physics Textbook'...you opened it..." << endl;
	if (!Language)
		cout << "___________________________________________\nВнутри 'Сборника анекдотов' был 'Учебник по квантовой физике'...вы открыли его..." << endl;
	system("pause");
	system("cls");
	if (Language)
		cout << "___________________________________________\nInside the 'Quantum Physics Textbook' was the 'Joke Book'...stop...you closed it and left the room..." << endl;
	if (!Language)
		cout << "___________________________________________\nВнутри 'Учебника по квантовой физике' был 'Сборник анекдотов'...стоп...вы закрыли его и вышли из комнаты..." << endl;
	system("pause");
	deep_catacombs();
}
//комната с ключём 
void deep_room2() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou entered the second room... there was a coffin in the center of the room... you approached it and carefully opened the lid...\nThere was a skeleton... it has been lying there for a long time\nYou examined it and found the key to the some door...\nAfter you turned around and went into the corridor..." << endl;
	if (!Language)
		cout << "___________________________________________\nВы зашли во вторую комнату...в центре комнаты лежал гроб...вы подошли к нему и аккуратно открыли крышку...\nТам лежал скелет...давно он тут лежит\nВы осмотрели его и нашли у него в руках ключ от какой-то двери...\nПосле вы развернулись и ушли в коридор..." << endl;
	isHasKey5 = true;
	system("pause");
	deep_catacombs();
}
//комната сюжета
void deep_room3() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou have reached the door...it is closed...\nOpen 1\nLeave 2" << endl;
	if (!Language)
		cout << "___________________________________________\nВы подошли к двери...она закрыта...\nОткрыть 1\nУйти 2" << endl;
	switch (_getch()) {
	case '1':
		nmoves++;
		if (!isHasKey5) {
			if (Language)
				cout << endl << "___________________________________________\nHow are you planning to open the door?" << endl;
			if (!Language)
				cout << endl << "___________________________________________\nЧем дверь открывать планируешь?" << endl;
			system("pause");
			deep_catacombs();
		}
		if (isHasKey5) {
			system("cls");
			if (Language)
				cout << "___________________________________________\nYou opened the door and entered a small room...the first thing you saw was a huge tunnel in the wall...\nSuddenly, a door creaked in the corridor, and then a quick stomp...\nApparently they came for you...you need to run" << endl;
			if (!Language)
				cout << "___________________________________________\nВы открыли дверь и вошли в небольшую комнату...первое что вы увидели это огромный тонель в стене...\nКак вдруг в коридоре раздался скрип двери, а после и быстрый топот...\nВидимо за вами пришли...надо бежать" << endl;
			system("pause");
			if (!isHasTrap)
				good_ending = false;
			if (isHasTrap)
				good_ending = true;
			endgame();
		}
		break;
	case '2':
		nmoves++;
		deep_catacombs();
		break;
	default:
		deep_room3();
		break;
	}
}
//комната взаимодействия
void deep_room4() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou opened the door and entered a strange room...it was a small room with a computer desk against the wall...\nYou walked up to it and were horrified...on the table...under the table...even by the table there were huge piles of coffee cups...\nThe computer itself was out of power, but there was a note on its screen:\n'Don't forget to write down the last room of the basement'\n...strange place...you turned around and went into the corridor. .." << endl;
	if (!Language)
		cout << "___________________________________________\nВы открыли дверь и вошли в странную комнату...это была небольшая комнатка с компьютерным столом у стены...\nВы подошли к нему и были повергнуты в ужас...на столе...под столом...даже у стола были огромные кучи стаканчиков из под кофе...\nСам компьютор был обесточен, но на его экране висела записка:\n'Не забудь прописать последнюю комнату подвала'\n...странное место...вы развернулись и ушли в коридор..." << endl;
	system("pause");
	deep_catacombs();
}

//меню и прочее
// 
//конец игры
void endgame() {
	system("cls");
	char files[5];
	if (good_ending) {
		if (Language) {
			cout << "___________________________________________\nYou set a trap under the door and ran into the tunnel...\nSomewhere in the middle of the way you heard a loud click...and then a heart-rending scream...\nYou ran for about 10 more minutes when you finally saw the light.. .\nYou came out of a small cave in the middle of the forest...a village could be seen in the distance...\nIt seems your 'journey' is finally over..." << endl << endl;
			cout << endl << endl << "		 GGGG    OOOO    OOOO   DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  NN   GGGG\n		GG      OO  OO  OO  OO  DD  DD    EE     NNN NN  DD  DD    II    NNN NN  GG\n		GG GGG  OO  OO  OO  OO  DD  DD    EEEE   NN NNN  DD  DD    II    NN NNN  GG GGG\n		GG  GG  OO  OO  OO  OO  DD  DD    EE     NN  NN  DD  DD    II    NN  NN  GG  GG\n		 GGGG    OOOO    OOOO   DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  GG   GGGG" << endl << endl;
			system("pause");
			system("cls");
			cout << "Do you want to delete save files? yes/no" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы поставили под дверь капкан и побежали в тоннель...\nГде-то на середине пути вы услышали громкий щелчок...а после и истошный крик...\nВы бежали ещё около 10 минут, когда наконец-то увидели свет...\nВы вышли из небольшой пещерки в центре леса...в дали виднелась деревня...\nКажется ваше 'путешествие' наконец закончилось..." << endl << endl;
			cout << endl << endl << "		 GGGG    OOOO    OOOO   DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  NN   GGGG\n		GG      OO  OO  OO  OO  DD  DD    EE     NNN NN  DD  DD    II    NNN NN  GG\n		GG GGG  OO  OO  OO  OO  DD  DD    EEEE   NN NNN  DD  DD    II    NN NNN  GG GGG\n		GG  GG  OO  OO  OO  OO  DD  DD    EE     NN  NN  DD  DD    II    NN  NN  GG  GG\n		 GGGG    OOOO    OOOO   DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  GG   GGGG" << endl << endl;
			system("pause");
			system("cls");
			cout << "Вы хотите удалить файлы сохранения? yes/no" << endl;
		}
	}
	if (!good_ending) {
		if (Language) {
			cout << "___________________________________________\nYou immediately ran into the tunnel and ran with all your might...\nBut somewhere in the middle of the way, you felt a strong blow from behind...and then fell and passed out\nAlas, you were not destined to survive..." << endl;
			cout << endl << endl << "		BBBBB    AAAA   DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  NN   GGGG\n		BB  BB  AA  AA  DD  DD    EE     NNN NN  DD  DD    II    NNN NN  GG\n		BBBBB   AAAAAA  DD  DD    EEEE   NN NNN  DD  DD    II    NN NNN  GG GGG\n		BB  BB  AA  AA  DD  DD    EE     NN  NN  DD  DD    II    NN  NN  GG  GG\n		BBBBB   AA  AA  DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  NN   GGGG" << endl << endl;
			system("pause");
			system("cls");
			cout << "Do you want to delete save files? yes/no" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы сразу же побежали в туннель и бежали из всех своих сил...\nНо где-то на середине пути вы почувствовали сильный удар сзади...а после упали и отрубились\nУвы, но выжить вам было не суждено..." << endl;
			cout << endl << endl << "		BBBBB    AAAA   DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  NN   GGGG\n		BB  BB  AA  AA  DD  DD    EE     NNN NN  DD  DD    II    NNN NN  GG\n		BBBBB   AAAAAA  DD  DD    EEEE   NN NNN  DD  DD    II    NN NNN  GG GGG\n		BB  BB  AA  AA  DD  DD    EE     NN  NN  DD  DD    II    NN  NN  GG  GG\n		BBBBB   AA  AA  DDDDD     EEEEE  NN  NN  DDDDD   IIIIII  NN  NN   GGGG" << endl << endl;
			system("pause");
			system("cls");
			cout << "Вы хотите удалить файлы сохранения? yes/no" << endl;
		}
	}
	cin >> files;
	if (files[0] == 'Y' || files[0] == 'y' || files[0] == 'D' || files[0] == 'd') {
		if (remove("C:/Windows/Temp/save.txt") != 0)
			cout << endl << endl << endl << "ERROR DELETE SAVE FILE" << endl << endl << endl << endl;
		else
			cout << endl << endl << endl << "SAVE FILES SUCCESSFULLY DELETED" << endl << endl << endl << endl;
		system("pause");
		system("cls");
	}
	if (files[0] == 'N' || files[0] == 'n') {
		cout << endl << endl << endl << "SELECT SAVE MODE UNLOCKED" << endl << endl << endl << endl;
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "ecQmXo|*2}}UD}iRFEE1O85ZQDEh9j";
			file.close();
		}
		system("pause");
		system("cls");
	}
	if (nmoves < 260) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n             Speedrunner\n  Complete the game in less than 260 moves\n===========================================" << endl;
		if (!Language)
			cout << "==========================================\n           Получено достижение:\n               Спидранер\n    Пройти игру меньше чем за 260 ходов\n==========================================" << endl;
		achievements5 = true;
		system("pause");
		system("cls");
	}
	if (nmoves > 300) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n        Look under every stone...\n Complete the game in more than 300 moves\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\n        Заглянуть под каждый камень...\n    Пройти игру больше чем за 300 ходов\n===========================================" << endl;
		achievements4 = true;
		system("pause");
		system("cls");
	}
	if (nsave == 0) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n         Save is for the weak!\n    Complete the game without saving\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n          Получено достижение:\n        Сохранения для слабаков!\n         Ни разу не сохраниться\n===========================================" << endl;
		achievements3 = true;
		system("pause");
		system("cls");
	}
	if (ndeath == 0) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n       Guided by the right path...\n    Complete the game without dying\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n          Получено достижение:\n        Ведомый верными путями...\n           Ни разу не умереть\n===========================================" << endl;
		achievements2 = true;
		system("pause");
		system("cls");
	}
	if (nsave == 5) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n                Coward!\n             Save 5 times\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n          Получено достижение:\n               Трусишка!\n           Сохраниться 5 раз\n===========================================" << endl;
		achievements1 = true;
		system("pause");
		system("cls");
	}
	if (somebody) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n         Somebody once told me...\n              Meet Shrek\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\n          Самбади ванс толд ми...\n             Встретить Шрека\n===========================================" << endl;
		achievements6 = true;
		system("pause");
		system("cls");
	}
	if (isHasAmongus) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n                 AMOGUS\n              Find AMOGUS\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\n                 AMOGUS\n              Найти AMOGUS\n===========================================" << endl;
		achievements7 = true;
		system("pause");
		system("cls");
	}
	if (gas_gas_gas) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n              Too stuffy\n          Die from poisoning\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\n                 Душнила\n          Умереть от отравления\n===========================================" << endl;
		achievements8 = true;
		system("pause");
		system("cls");
	}
	if (sans) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n    I'm not fat. I'm just big boned!\n  Don't find the skeleton under the bed\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\nЯ не толстый. У меня просто КОСТЬ широкая!\n      Не найти скелета под кроватью\n===========================================" << endl;
		achievements9 = true;
		system("pause");
		system("cls");
	}
	if (Language)
		cout << "During this journey you died " << ndeath << " times" << endl << endl;
	if (!Language)
		cout << "Во время этого путешествия вы умерли " << ndeath << " раз" << endl << endl;
	cout << endl << endl << "TTTTTT  HH  HH   AAAA   NN  NN  KK  KK   SSSS  \n  TT    HH  HH  AA  AA  NNN NN  KK KK   SS     \n  TT    HHHHHH  AAAAAA  NN NNN  KKKK     SSSS  \n  TT    HH  HH  AA  AA  NN  NN  KK KK       SS \n  TT    HH  HH  AA  AA  NN  NN  KK  KK   SSSS  " << endl << endl;
	cout << "FFFFFF   OOOO   RRRRR     PPPPP   LL       AAAA   YY  YY  IIIIII  NN  NN   GGGG   !!!\nFF      OO  OO  RR  RR    PP  PP  LL      AA  AA   YYYY     II    NNN NN  GG      !!!\nFFFF    OO  OO  RRRRR     PPPPP   LL      AAAAAA    YY      II    NN NNN  GG GGG  !!!\nFF      OO  OO  RR  RR    PP      LL      AA  AA    YY      II    NN  NN  GG  GG\nFF       OOOO   RR  RR    PP      LLLLLL  AA  AA    YY    IIIIII  NN  NN   GGGG   !!!" << endl;
	system("pause");
	ndeath = 0, nsave = 0, nmoves = 0, timr = 45; x_pl = 0, infection_stage = 0, isHasKnife = false, god = true, isHasKey1 = false, isHasCrowbar = false, isHasMaul = false, isHasExplosives = false, isHasKey2 = false, isHasPlanks = false, isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false, escpe = false, gameover = false, first_run = true, look_around = false, isHasTrap = false, loop = false, first = true, firhut = true, firroo = true, meat_open = false, isHasAxe = false, isHasBrick = false, lamp = false, oil = false, lamp_oil = false, house1_com = false, house2_com = false, house3_com = false, house4_com = false, church_open = false, isHasKey4 = false, im_gay = true, isHasMeat = false, isHasKey5 = false, i_love_furry = true, isHasMask = false, poison = false, dog_die = false, home_open = false, fit = true, fir = true, fig = false, fig2 = false, fig3 = true, chg = false, tigr = true;
	main();
}
//выбор локации
void levels() {
	system("cls");
	if (Language) {
		cout << "=========Location selection========" << endl;
		cout << "What location do you want to go to?\nBasement 1\nYard 2\nMansion floor first 3\nMansion floor second 4\nForest 5\nVillage 6\n===================================\nBack to menu 7" << endl;
	}
	if (!Language) {
		cout << "=========Выбор локации=========" << endl;
		cout << "В какую локацию хотите попасть?\nПодвал 1\nДвор 2\nПервый этаж особняка 3\nВторой этаж особняка 4\nЛес 5\nДеревня 6\n===============================\nВернуться в меню 7" << endl;
	}
	switch (_getch()) {
	case '1':
		cycle1();
		break;
	case '2':
		cycle2();
		break;
	case '3':
		cycle3();
		break;
	case '4':
		cycle4();
		break;
	case '5':
		forest();
		break;
	case '6':
		cycle5();
		break;
	case '7':
		main_menu();
		break;
	default:
		levels();
		break;
	}
}
//локализация
void language() {
	system("cls");
	Language = !Language;
	main_menu();
}
//меню
void main_menu() {
	system("cls");
	if (Language) {
		cout << "=================base_escape_v3.5=================" << endl << endl;
		cout << "Welcome to my updated version of base_escape_v3.5.1\n==================================================\n                       Start 1\n                     Load save 2\n                About the developer 3\n                  Русский/English 4\n              =========================\n                    Changes list 5\n                    Achievements 6\n              =========================\n                 Delete save files 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	}
	if (!Language) {
		cout << "======================base_escape_v3.5======================" << endl << endl;
		cout << " Добро пожаловать в мою обновлённую версию base_escape_v3.5.1\n============================================================\n                           Старт 1\n                   Загрузить сохранение 2\n                        Разработчик 3\n                      Русский/English 4\n              ==================================\n                      Список изменений 5\n                         Достижения 6\n              ==================================\n                  Удалить файлы сохранения 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	}
	switch (_getch()) {
	case '1':
		start();
		break;
	case '2':
		save();
		break;
	case '3':
		developer();
		break;
	case '4':
		language();
		break;
	case '5':
		updet_list();
		break;
	case '6':
		achievements();
		break;
	case '0':
		delte();
		break;
	default:
		main_menu();
		break;
	}
}
//о разработчике
void developer() {
	system("cls");
	if (!Language)
		cout << "       Мои соц.сети:\n===========================\n    Discord: Bubba#4211\n       VK: @1blitz01\n    Telegram: @an1onime\n===========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<< endl << endl;
	if (Language)
		cout << "    My social networks:\n===========================\n    Discord: Bubba#4211\n       VK: @1blitz01\n    Telegram: @an1onime\n===========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
	system("pause");
	main_menu();
}
//список обновления
void updet_list() {
	system("cls");
	if (Language)
		cout << "==========================================\n             List of changes:\n==========================================\n*Added 'Killer Village'\n*Some cosmetic updates\n*Added several new achievements\n*Reworked game ending\n\n==========================================\n        Plans for future updates:\n==========================================\n*Change starting locations: Basement, Yard\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl << endl;
	if (!Language)
		cout << "==========================================\n            Список изменений:\n==========================================\n*Добавлена 'Деревня Убийц'\n*Некоторые косметические обновления\n*Добавлено несколько новых достижений\n*Переработана концовка игры\n\n==========================================\n        Планы на будущие обновления:\n==========================================\n*Изменение начальных локаций: Подвал, Двор\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl << endl;
	system("pause");
	main_menu();
}
//достижения
void achievements() {
	system("cls");
	if (firw) {
		if (Language)
			cout << "		         ===================\n		         |     Warning     |\n		         ===================\n=======================================================================\nAchievements are counted only after the complete completion of the game\n=======================================================================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl << endl;
		if (!Language)
			cout << "	              ==================\n	              | Предупреждение |\n	              ==================\n==============================================================\nДостижения засчитываются только после полного прохождения игры\n==============================================================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl << endl;
		firw = false;
		system("pause");
		system("cls");
	}
	string do1, do2, do3, do4, do5, do6, do7, do8, do9;
	if (Language) {
		do1 = "                         (X)|", do2 = "     (X)|", do3 = "           (X)|", do4 = "       (X)|", do5 = "                     (X)|", do6 = "        (X)|", do7 = "                          (X)|", do8 = "                      (X)|", do9 = "             (X)|";
		if (achievements1)
			do1 = "                      (DONE)|";
		if (achievements2)
			do2 = "  (DONE)|";
		if (achievements3)
			do3 = "        (DONE)|";
		if (achievements4)
			do4 = "    (DONE)|";
		if (achievements5)
			do5 = "                  (DONE)|";
		if (achievements6)
			do6 = "     (DONE)|";
		if (achievements7)
			do7 = "                       (DONE)|";
		if (achievements8)
			do8 = "                   (DONE)|";
		if (achievements9)
			do9 = "          (DONE)|";
	}
	if (!Language) {
		do1 = "                           (X)|", do2 = "           (X)|", do3 = "            (X)|", do4 = "      (X)|", do5 = "                           (X)|", do6 = "             (X)|", do7 = "                              (X)|", do8 = "                             (X)|", do9 = "        (X)|";
		if (achievements1)
			do1 = "                        (DONE)|";
		if (achievements2)
			do2 = "        (DONE)|";
		if (achievements3)
			do3 = "         (DONE)|";
		if (achievements4)
			do4 = "   (DONE)|";
		if (achievements5)
			do5 = "                        (DONE)|";
		if (achievements6)
			do6 = "          (DONE)|";
		if (achievements7)
			do7 = "                           (DONE)|";
		if (achievements8)
			do8 = "                          (DONE)|";
		if (achievements9)
			do9 = "     (DONE)|";
	}
	if (Language)
		cout << "============Achievements============\nCoward!" << do1 << "\n___________________________________|\nGuided by the right path..." << do2 << "\n___________________________________|\nSave is for the weak!" << do3 << "\n___________________________________|\nLook under every stone..." << do4 << "\n___________________________________|\nSpeedrunner" << do5 << "\n___________________________________|\nSomebody once told me..." << do6 << "\n___________________________________|\nAMOGUS" << do7 << "\n___________________________________|\nToo stuffy" << do8 << "\n___________________________________|\nI'm not fat.                       |\nI'm just big boned!" << do9 << "\n___________________________________|\n\n\n\n\n\n\n\n" << endl << endl;
	if (!Language)
		cout << "===============Достижения===============\nТрусишка!" << do1 << "\n_______________________________________|\nВедомый верными путями..." << do2 << "\n_______________________________________|\nСохранения для слабаков!" << do3 << "\n_______________________________________|\nЗаглянуть под каждый камень..." << do4 << "\n_______________________________________|\nСпидранер" << do5 << "\n_______________________________________|\nСамбади ванс толд ми..." << do6 << "\n_______________________________________|\nAMOGUS" << do7 << "\n_______________________________________|\nДушнила" << do8 << "\n_______________________________________|\nЯ не толстый.                          |\nУ меня просто КОСТЬ широкая!" << do9 << "\n_______________________________________|\n\n\n\n\n\n\n\n" << endl << endl;
	system("pause");
	main_menu();
}
//удалялка
void delte() {
	char files[5];
	system("cls");
	if (Language) {
		cout << "Are you sure you want to delete save files? yes/no" << endl;
	}
	if (!Language) {
		cout << "Вы уверены что хотите удалить файлы сохранения? yes/no" << endl;
	}
	cin >> files;
	if (files[0] == 'Y' || files[0] == 'y' || files[0] == 'D' || files[0] == 'd') {
		if (remove("C:/Windows/Temp/save.txt") != 0)
			cout << endl << endl << endl << "		ERROR DELETE SAVE FILE" << endl << endl << endl << endl;
		else
			cout << endl << endl << endl <<	"		SAVE FILES SUCCESSFULLY DELETED" << endl << endl << endl << endl;
	}
	else
		cout << "	 OOOO   KK  KK\n	OO  OO  KK KK\n	OO  OO  KKKK\n	OO  OO  KK KK\n	 OOOO   KK  KK" << endl << endl;
	system("pause");
	main_menu();
}