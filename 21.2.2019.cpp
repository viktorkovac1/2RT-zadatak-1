// 21.2.2019.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct trokut 
{
	float a;
	float b;
	float c; 
};
double funk(float a,float b,float c)
{

};

int main()
{
	trokut n;
	int opcija;
	int izbor;
	fstream file;

	cout << "Unesi 1 za upis stranica! : ";
    cin >> opcija;

	switch (opcija)
	{
	case 1:
	{

		file.open("C:\\Users\\ucenik\\Desktop\\proba.txt", ios::app);
		do
		{
			cout << "unesi stranicu a: "; cin >> n.a;
			file << n.a << " ";
			cout << "unesi stranicu b: "; cin >> n.b;
			file << n.b << " ";
			cout << "unesi stranicu c: "; cin >> n.c;
			file << n.c << " ";



			cout << "Zelite li unijeti jos koje stranice?(d/n) ";
			cin >> izbor;

		} while (izbor == 'd');
		file.close();
		break;
	}
	return 0;
	}
}



/*
struct datum {
	int dan, mjesec, godina;
};

struct oproizvodu {
	string proizvodac, proizvod;
	float cijena, kolicina;
	datum rokvaljanosti;
};


int main()
{
	oproizvodu proizvodi[20];
	oproizvodu n;
	char izbor;
	fstream file;
	int opcija;


	do {
		cout << "1. UNOS NOVIH NAMIRNICA" << endl;
		cout << "2. NAMIRNICE KOJIMA ISTICE ROK TRAJANJA U NEKOM MJESECU" << endl;
		cout << "3. VRIJEDNOST NAMIRNICA KOJIMA JE ISTEKAO ROK TRAJANJA" << endl;
		cout << "4. UKUPNA TEZINA NAMIRNICA KOJIMA ROK TRAJANJA ISTICE U SLJ. X DANA" << endl;
		cout << "9. KRAJ" << endl;

		cout << endl << "Unesite svoj odabir :";
		cin >> opcija;

		switch (opcija)
		{
			case 1:
			{	
				file.open("C:\\Users\\d31admin.TSC\\Desktop\\tekst.txt", ios::app);
				do
				{
					cout << "unesi proizvodaca: "; cin >> n.proizvodac;
					file << n.proizvodac << " ";
					cout << "unesi proizvod: "; cin >> n.proizvod;
					file << n.proizvod << " ";
					cout << "unesi cijenu: "; cin >> n.cijena;
					file << n.cijena << " ";
					cout << "unesi kolicinu: "; cin >> n.kolicina;
					file << n.kolicina << " ";
					cout << "unesi rok trajanja(dan): ";
					cin >> n.rokvaljanosti.dan;
					cout << "unesi rok trajanja(mjesec): ";
					cin >> n.rokvaljanosti.mjesec;
					cout << "unesi rok trajanja(godina): ";
					cin >> n.rokvaljanosti.godina;
					file << n.rokvaljanosti.dan << " " <<
						n.rokvaljanosti.mjesec
						<< " " << n.rokvaljanosti.godina << endl;

					cout << "Zelite li unijeti jos koji proizvod?(d/n) ";
					cin >> izbor;

				} while (izbor == 'd');
				file.close();
				break;
			}
		case 2: 
			{
				file.open("C:\\Users\\d31admin.TSC\\Desktop\\tekst.txt", ios::in );
				cout << "Za koji mjesec zelite ispis namirnica sa istekom?" << endl;

				int mjesec;
				cin >> mjesec;
			
				int i = 0;
				while (!file.eof())
				{
					file >> proizvodi[i].proizvodac;
					file >> proizvodi[i].proizvod;
					file >> proizvodi[i].cijena;
					file >> proizvodi[i].kolicina;
					file >> proizvodi[i].rokvaljanosti.dan;
					file >> proizvodi[i].rokvaljanosti.mjesec;
					file >> proizvodi[i].rokvaljanosti.godina;
					i++;
				}
				for (oproizvodu x : proizvodi)
				{
					if(x.rokvaljanosti.mjesec==mjesec)
						cout<< x.proizvodac<<" "<<x.proizvod<<endl;
				}
				file.close();
			break;
			}
		}
	} while (opcija != 9);
	file.close();

	return 0;
}*/