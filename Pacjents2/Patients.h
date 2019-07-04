#include <string.h>
#pragma once

using namespace std;

class Patients {

private:
	unsigned long long pesel;
	unsigned int ubezpieczenie;
	std::string nazwisko;
	std::string imie;
	std::string adres;
	unsigned int telefon;

public:
	unsigned short wiek;
	unsigned short wzrost;
	unsigned short waga;

	Patients(std::string imie, std::string nazwisko, string adres, unsigned long long pesel, unsigned int telefon, unsigned int ubezpieczenie, unsigned short wiek, unsigned short wzrost, unsigned short waga);
	Patients();

	void wypisz_dane_pacjenta();

	void set_imie(string imie_pacjenta);
	string get_imie();

	void set_nazwisko(string nazwisko_pacjenta);
	string get_nazwisko();

	void set_adres(string adres_pacjenta);
	string get_adres();

	void set_pesel(unsigned long long pesel_pacjenta);
	unsigned long long get_pesel();

	void set_telefon(unsigned int telefon_pacjenta);
	unsigned int get_telefon();

	void set_ubezpieczenie(unsigned int ubezpieczenie_pacjenta);
	unsigned int get_ubezpieczenie();

	void set_wiek(unsigned short wiek_pacjenta);
	unsigned short get_wiek();

	void set_wzrost(unsigned short wzrost_pacjenta);
	unsigned short get_wzrost();

	void set_waga(unsigned short waga_pacjenta);
	unsigned short get_waga();
}; 
