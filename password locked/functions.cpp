#include "Common includes.h"
#pragma comment(lib, "Winmm.lib") //dit kan ook via de settings maar dit heb ik al eens eerder gebruikt dus vond ik iets makkelijker
int x = -1;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //met deze handle kan ik later letters kleurtjes geven

void functions::mainscreen() {
	clear();
	PlaySoundA("Spring_In_My_Step.wav", NULL, SND_ASYNC || SND_FILENAME); // leuk liedje
	x++;
	if (x < 1) { //als we dit doen zien we alleen de eerste keer die animatie, vond ik fijner hoefte ik niet elke keer te wachten
		cout << "H"; Sleep(200); cout << "e"; Sleep(200); cout << "l"; Sleep(200); cout << "l"; Sleep(200); cout << "o"; Sleep(200); //heel erg gare animatie xd
		cout << " and welcome to this useless program" << endl << endl; Sleep(1000);
		cout << "For roblox oof sound Press 1" << endl; Sleep(200);
		cout << "For the increasing penis press 2" << endl;
		cout << "to explode press 3" << endl;
		Sleep(1000);
	}
	else {
	cout << "For roblox oof sound Press 1" << endl;
	cout << "For penises press 2" << endl;
	cout << "to explode press 3" << endl;
	}
	cout << endl << "Music: Spring in my step by Silent Partner"; // beetje credits geven naar de muziek
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << endl << endl << "To return to the this screen press enter" << endl; // als je in een functie zit kan je op enter drukken om hier weer terug te komen

	for (;;) {
		if (GetAsyncKeyState(0x31)) // 1
		{
			oof();
		}
		else if (GetAsyncKeyState(0x32)) // 2
		{
			dick();
		}
		else if (GetAsyncKeyState(0x33)) // 3
		{
			allahu_Akbar();
		}
		Sleep(200);
	}
}

void functions::oof(){
	clear();
	cout << "oof";
	PlaySoundA("oof.wav", NULL, SND_ASYNC | SND_FILENAME); // oof 
	Sleep(1000);
	mainscreen();
}

void functions::dick() { // hmmmm?
	
		clear();
		for (;;) {
			longDick += "=";
			cout << longDick << ">";
			Sleep(20);
			clear();
			if (GetAsyncKeyState(VK_RETURN))
				break;
		}
		mainscreen();	
}
void functions::allahu_Akbar() {
	clear();
	cout << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl << "boem boem boem boem boem boem boem boem boem boem boem " << endl;
	PlaySoundA("boem.wav", NULL, SND_ASYNC | SND_FILENAME);
	Sleep(2000);
	mainscreen();
}


void functions::clear() { // handige funcite voor het opruimen van alles dat op het scherm staat en de kleurtjes weer naar wit brengen
	system("cls");
	system("color 0f"); // jaja ik weet system functies zijn slecht om te gebruiken maar het is gewoon zo makkelijk
}
	