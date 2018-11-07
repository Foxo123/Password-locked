#include "Common includes.h"

//dit is een programma om te oefenen met het loopen door een array en kijken of de gegeven string gelijk is aan een van de dingen in
//de array en een beetje kloten met rare functies maken xd lel
//het is nog best unstable maar heb wel veel fouten er al uit gehaald en alles werkt technisch gezien wel maar niet allemaal op de manier dat ik het wil
functions func;

HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE); //met deze handle kan ik later letters kleurtjes geven
bool passwordcorrect = false; //variabele die veranderd naar true als het wachtwoord goed is
string inPassword;
string password[5] = { "sheet", "D1nsd2g!", "M22nd2g!", "lel", "xd" }; // wachtwoorden die goed zijn
void draw(); 
bool GetPassWord(string pW) {
		for (int x = 0; x < 6; x++) { //loop door de wachtwoorden heen met het ingegeven woord
			if (pW == password[x]) {
				passwordcorrect = true;
				break; //niet door gaan als je een goed antwoord hebt
			}
	}
		if (passwordcorrect) //als het wachtwoord goed is dan in het groen "succes"
		{
			SetConsoleTextAttribute(a,	FOREGROUND_GREEN | FOREGROUND_INTENSITY); // groene letters jeej (niet zelf gemaakt wel snap ik hoe t werkt
			cout << "Succes" << endl;
			return true;
		}
		else //als het niet goed is "password incorrect"
		{
			cout << "password incorrect" << endl; // "print "password incorrect"
			return false;				
	}
}
void draw() { // hier een functie die zorgt dat we het scherm kunnen clearen en dan opnieuw "password: " kunnen printen
	cout << "Password: "; cin >> inPassword; cout << endl;
}
int main() {//hier start het programma
	SetConsoleTitle("Programma door Tom Lenkie"); //zo kunnen we het naam van het schermpje dat ontstaat veranderen
	draw(); // ik roep hier de functies aan
	for (;;) { //oneindige loop for(;;) > while(true)
		if (GetPassWord(inPassword))
			break;
		else {
			func.clear();
			draw();
			GetPassWord(inPassword);
		}
	}
			
	Sleep(200); //niet te snel jongens opa kan niet zo hard lopen
	func.clear();
	func.mainscreen();
	getchar(); //geen idee of dit werkt eigenlijk 
	return 0; //einde van het programma
}