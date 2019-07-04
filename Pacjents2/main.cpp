#include <math.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <ctime>
#include "Patients.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Polish");

	cout << "Dane pacjentów:" << endl;
	cout << "pierwszy pacjent:" << endl;

	Patients * p1 = new Patients("Jan", "Kowalski", "Warszawa, Nowy Œwiat 16", 8704125870, 56322489, 25555, 255, 1289, 392);

	p1->wypisz_dane_pacjenta();
	cout << endl;

	system("Pause");
}