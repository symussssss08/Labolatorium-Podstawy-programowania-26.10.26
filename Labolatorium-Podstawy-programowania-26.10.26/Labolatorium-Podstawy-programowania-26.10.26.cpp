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


			// Zadanie 3 

void wyswietlwieksza(int a, int b)
{
	if (a > b)
	{
		cout << "Pierwsza liczba jest wieksza od drugiej " << endl; 
	}
	else if (a < b)
	{
		cout << " Druga liczba jest wieksza od pierwszej." << endl; 
	}
	else
	{
		cout << " Obie liczby sa rowne." << endl; 
	}
}


int zwrocwieksza(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b; 
	}
}

int main()
{
	int a, b;

	cout << " Podaj pierwsza liczbe : ";
	cin >> a;
	cout << " Podaj druga liczbe: ";
	cin >> b;

	wyswietlwieksza(a, b);

	int wieksza = zwrocwieksza(a, b);
	cout << " Wartosc wiekszej liczby = " << wieksza << endl;

	return 0;
}



	// Zadanie 4

void wyswietlnajmniejsza(int a, int b, int c)
{
	if (a <= b && a <= c)
	{
		cout << "Najmniejsza jest pirewsza liczba: " << a << endl;
	}
	else if (b <= a && b <= c)
	{
		cout << "Najmniejsza jest druga liczba: " << b << endl; 
	}
	else
	{
		cout << "Najmniejsza jest trzecia liczba: " << c << endl; 
	}
}

int zwrocnajmniejsza(int a, int b, int c)
{
	int najmniejsza = a; 

	if (b < najmniejsza)
	{
		najmniejsza = b; 
	}
	if (c < najmniejsza)
	{
		najmniejsza = c; 
	}

	return najmniejsza; 
}

int main()
{
	int a, b, c; 
	cout << "Podaj pierwsza liczbe (a): ";
	cin >> a; 
	cout << "Podaj druga liczbe (b): ";
	cin >> b;
	cout << "Podaj trzecia liczbe (c): "; 
	cin >> c; 
	cout << endl; 


	wyswietlnajmniejsza(a, b, c);

	int wynik = zwrocnajmniejsza(a, b, c);
	cout << "Wartosc najmniejszej liczby = " << wynik << endl; 

	return 0;
}

	
	// Zadanie 5	
	

double obliczPoleTrojkata(double podstawa, double wysokosc)
{
	double pole = 0.5 * podstawa * wysokosc; 
	cout << "Pole trojkata wynosi: " << pole << endl; 
	return pole; 
}
 
int main()
{
	double a;
	cout << "Podstawa = ";
	cin >> a; 
	double postawa = a; 
	double b; 
	cout << "Wysokosc = ";
	cin >> b; 
	double wysokosc = b; 
	double pole = obliczPoleTrojkata(postawa, wysokosc);
	cout << "Podwojona wartosc pola wynosi: " << 2 * pole << endl; 
	return 0; 
}


	// Zadanie 6 

void wyswietldzielniki(int n)
{
	if (n <= 0)
	{
		cout << "liczba musi być dodatnia (n > 0)!" << endl; 
		return; 

	}
	cout << "Dzielniki liczby n " << n << " to:"; 
	for (int i = 1; i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			cout << i << " "; 
		}
	}
	cout << n << endl; 
}

int main()
{
	int n; 
	cout << "Podaj liczbe calkowita dodatnia (n > 0): "; 
	cin >> n; 

	wyswietldzielniki(n); 
	
	return 0; 
}
*/

	// Zadanie 7 


float srednia_wazona(float x, float y)
{
	float a, b;  
	cout << "Podaj wage dla pierwszej wartosci: "; 
	cin >> a; 
	cout << "Podaj wage dla drugiej wartosci: ";
	cin >> b; 

	return(x * a + y * b) / (a + b);
}

int main()
{
	float x, y;
	cout << "Podaj pierwsza wartosc: ";
	cin >> x;
	cout << "Podaj druga wartosc: ";
	cin >> y;

	float wynik = srednia_wazona(x, y);
	cout << "Srednia wazona wynosi = " << wynik << endl;

	return 0;
}
