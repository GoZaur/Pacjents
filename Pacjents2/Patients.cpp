#include <iostream>
#include <string>
#include <locale.h>
#include "Patients.h"

using namespace std;


void Patients::set_imie(string imie_pacjenta) {
	this->imie = imie_pacjenta;
}
void Patients::set_nazwisko(string nazwisko_pacjenta) {
	this->nazwisko = nazwisko_pacjenta;
}
void Patients::set_adres(string adres_pacjenta) {
	this->adres = adres_pacjenta;
}
void Patients::set_pesel(unsigned long long pesel_pacjenta) {

	int ileCyfr = pesel_pacjenta > 0 ? (int)log10((double)pesel_pacjenta) + 1 : 1;//warunek sprawdzajacy ilosc cyfr

	if (ileCyfr != 11) {
		throw "B³¹d:Podano nieprawid³owy pesel.";
	}
	else {
		this->pesel = pesel_pacjenta;
	}
}

void Patients::set_telefon(unsigned int numer_tel_pacjenta) {
	int cyfry_telefon = numer_tel_pacjenta > 0 ? (int)log10((double)numer_tel_pacjenta) + 1 : 1;

	if (cyfry_telefon != 9) {
		throw "B³¹d: Podano nieprawid³owy numer.";
	}
	else {
		this->telefon = numer_tel_pacjenta;
	}
}

void Patients::set_ubezpieczenie(unsigned int kwota_ubezpieczenia_pacjenta) {
	if (kwota_ubezpieczenia_pacjenta < 0) {
		throw "B³¹d: Ubezpieczenie nie mo¿e byæ mniejsze od 0!";
	}
	else {
		this->ubezpieczenie = kwota_ubezpieczenia_pacjenta;
	}
}

void Patients::set_wiek(unsigned short wiek_pacjenta) {
	if (wiek_pacjenta < 0 || wiek_pacjenta>110) {
		throw "B³¹d: Nieprawid³owy wiek";
	}
	else {
		this->wiek = wiek_pacjenta;
	}
}
void Patients::set_wzrost(unsigned short wzrost_pacjenta) {

	cout << "Podaj wzrost w cm" << endl;
	cin >> wzrost_pacjenta;

	if (wzrost_pacjenta < 0 || wzrost_pacjenta	> 240) {
		throw "B³¹d: Wzrost nie mno¿e byæ mniejszy od zera!";
	}
	else {
		this->wzrost = wzrost_pacjenta;
	}
}
void Patients::set_waga(unsigned short waga_pacjenta) {

	if (waga_pacjenta < 0 || waga_pacjenta>250) {
		throw "B³¹d: Nieprawid³owa waga.";
	}
	else {
		this->waga = waga_pacjenta;
	}
}


Patients::Patients() {

};

Patients::Patients(string imie, string nazwisko, string adres, unsigned long long pesel, unsigned int telefon, unsigned int ubezpieczenie, unsigned short wiek, unsigned short wzrost, unsigned short waga) {
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->adres = adres;
	this->pesel = pesel;
	this->telefon = telefon;
	this->ubezpieczenie = ubezpieczenie;
	this->wiek = wiek;
	this->wzrost = wzrost;
	this->waga = waga;
};

string Patients::get_imie() {
	return imie;
}

string Patients::get_nazwisko() {
	return nazwisko;
}

string Patients::get_adres() {
	return adres;
}

unsigned long long Patients::get_pesel() {
	return pesel;
}

unsigned int Patients::get_telefon() {
	return telefon;
}

unsigned int Patients::get_ubezpieczenie() {
	return ubezpieczenie;
}

unsigned short Patients::get_wiek() {
	return wiek;
}

unsigned short Patients::get_wzrost() {      //b³êdy linkera   kiedy nie ma deklaracji w 2 pliku wywo³ujemy, a nie amy z czego
	return wzrost;
}

unsigned short Patients::get_waga() {
	return waga;
}


void Patients::wypisz_dane_pacjenta() {

	string name = Patients::get_imie();
	if (name != "") {
		cout << "Obiekt z klasy Patients ma na imiê: " << Patients::get_imie() << endl;
	}
	else {
		cout << "Obiekt klasy Patients nie ma wpisanego imienia." << endl;
	}


	string surname = Patients::get_nazwisko();
	if (surname != "") {
		cout << "Obiekt z klasy Patients ma na nazwisko: " << Patients::get_nazwisko() << endl;
	}
	else {
		cout << "Obiekt z klasy Patients nie ma wpisanego nazwiska." << endl;
	}


	string adress = Patients::get_adres();
	if (adress != "") {
		cout << "Adres obiektu z klasy Patients to : " << Patients::get_adres() << endl;
	}
	else {
		cout << "Obiekt z klasy Pacjent nie ma wpisanego adresu." << endl;
	}


	unsigned long long numer_identyfikacyjny = Patients::get_pesel();
	unsigned long long ileCyfr_Pesel = numer_identyfikacyjny > 0 ? (int)log10((double)numer_identyfikacyjny) + 1 : 1;
	if (ileCyfr_Pesel != 11) {
		cout << "Nieprawid³owy numer pesel." << endl;
	}
	else {
		cout << "pesel: " << numer_identyfikacyjny << endl;
	}


	unsigned int phon_number = Patients::get_telefon();
	unsigned int ileCyfr_tel = phon_number > 0 ? (int)log10((double)phon_number) + 1 : 1;
	if (ileCyfr_tel != 9) {
		cout << "Nieprawid³owy numer telefonu." << endl;
	}
	else {
		cout << "Numer telefonu: " << phon_number << endl;
	}

	unsigned int insurance = Patients::get_ubezpieczenie();
	if (insurance < 0 || insurance>10000) {
		cout << "Nieprawid³owa kwota ubezpiezenia" << endl;
	}
	else {
		cout << "Ubezpieczenie: " << Patients::get_ubezpieczenie() << "z³" << endl;
	}

	unsigned short age = Patients::get_wiek();
	if (age < 0 || age>110) {
		cout << "Nieprawid³owy wiek." << endl;
	}
	else {
		cout << "Wiek: " << Patients::get_wiek() << "lat" << endl;
	}


	unsigned short growth = Patients::get_wzrost();
	if (growth < 0 || growth > 240) {
		cout << "Nieprawid³owy wzrost." << endl;
	}
	else {
		cout << "Wzrost: " << Patients::get_wzrost() << "cm" << endl;
	}


	unsigned short weigh = Patients::get_waga();
	if (weigh < 0 || weigh>250) {
		cout << "Nieprawid³owa waga." << endl;
	}
	else {
		cout << "Waga: " << Patients::get_waga() << "kg";
	}

}