// Labolatorium-Podstawy-programowania-26.10.26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

/*

	//Zadanie 1 

void powitanie(string imie);

int main()

{

	powitanie("Szymon");
		return 0;


}
void powitanie(string imie)
{
	cout << "Czesc, " << imie << "." << endl;
}



	// Zadanie 2 

void tablicza_mnozenia()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{
	tablicza_mnozenia();
	return 0;
}
*/

	// Zadanie 3 

void a()
{
	int a;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a; 

}
void b()
{
	int b;
	cout << "Podaj druga liczbe: ";
	cin >> b;
}

int main()
{
	a();
	b();
	
	if (a > b)
	{
		cout << " Pierwsza liczba jest wieksza od drugie." << endl;
	}
	else if
	{
		cout " Druga liczba jest wieksza od pierwszej." << endl;
	}
	if (a > b)
	{
		cout << "Wartosc wiekszej liczby = " << a << endl;
	}
	else 
	{
		cout "Wartość wiekszej liczby = " << b << endl;
	}

	return 0;
}