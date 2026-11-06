// Labolatorium-Podstawy-programowania-26.10.26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

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


	// Zadanie 8 


void przeciwprostokatna()
{
	float a, b; 
	cout << "Podaj wartosc pierwszej przyprostokatnej: ";
	cin >> a; 
	cout << "Podaj wartosc drugiej przyprostokanej: ";
	cin >> b; 

	float c = sqrt(a * a + b * b);
	cout << "Przeciwprostokatna wynosi: " << c << endl;
}

int main()
{
	przeciwprostokatna(); 
	return 0;
}



	// Zadanie 9 


int main()
{
	while (true)
	{
		char moja_decyzja;
		cout << " Czy chcesz zakonczyc dzialanie programu (tak badz nie): ";
		cin >> moja_decyzja;
		if (moja_decyzja == 'tak')
		{
			return 0;
		}
	}
	float a, b;
	char dzialanie;
	cout << "Wprowadź wartość dla a:";
	cin >> a;
	cout << " Podaj znak (+, -, /, *):";
	cin >> dzialanie;
	cout << "Wprowadz wartosc dla b:";
	cin >> b;
	if (dzialanie == '+')
	{
		cout << "Wynik: " << a + b << endl;
	}
	else if (dzialanie == '-')
	{
		cout << "Wynik: " << a - b << endl;
	}
	else if (dzialanie == '/')
	{
		if (b == 0)
		{
			cout << " Nie mozna dzielic przez 0" << endl;
		}
		else
		{
			cout << "Wynik: " << a / b << endl;
		}
	}
	else if (dzialanie == '*')
	{
		cout << "Wynik:	" << a * b << endl;
	}
	else
	{
		cout << "Nieprawidlowy znak dzialania" << endl;
	}
}



	// Zadanie 10

float oblicz_sume_zwracajaca(int n)
{
	float suma = 0; 
	float skladnik;

	for (int i = 1; i <= n; i++)
	{
		cout << "Podaj skladnik " << i << " :"; 
		cin >> skladnik; 
		suma += skladnik;
	}
	return suma; 
}


void oblicz_sume_wyswietlajaca(int n)
{
	float suma = 0;
	float skladnik = 0; 
	for (int i = 1; i <= n; i++)
	{
		cout << "Podaj skladniczek " << i << " :"; 
		cin >> skladnik; 
		suma += skladnik; 
	}

	cout << "Wyliczona sumka wynosi: " << suma << endl;
}

int main()
{
	int ile; 
	cout << "Ile skladnikow chcesz zsumowac?";
	cin >> ile; 

	cout << "\n --- Test wersji 1 (Zwracajacej wynik) ---" << endl;
	float wynik = oblicz_sume_zwracajaca(ile);
		cout << "Wynik zwrocony do main: " << wynik << endl; 

	cout << "\n--- Test wersji 2 (Void / Wyswietlajacej)" << endl;
	oblicz_sume_wyswietlajaca(ile); 

	return 0;
}



	//Zadanie 11

float obwod_prostokata(float a, float b)
{
	return(2 * a + 2 * b); 
}

int main()
{
	float bok1, bok2; 
	cout << "Podaj dlugosc pierwszego boku prostokata: ";
	cin >> bok1;
	cout << "Podaj dlugosc drugiego boku prostokata: ";
	cin >> bok2; 

	float obwod = obwod_prostokata(bok1, bok2); 
	cout << "Obwod prostokata wynosi: " << obwod << endl; 
	return 0; 
}


	// Zadanie 12

float objetosc_prostopadloscianu()
{
	float a, b, c; 
	cout << "Podaj wartosc dla pierwszej krawedzi prostopadloscianu: ";
	cin >> a; 
	cout << "Podaj wartosc dla drugiej krawedzi prostopadloscianu: ";
	cin >> b;
	cout << "Podaj wartosc dla wysokosci prostopadloscianu: ";
	cin >> c;

	return(a * b * c); 
}

int main()
{
	float wynik = objetosc_prostopadloscianu();
	cout << "Objetosc prostopadloscianu wynosi: " << wynik << endl; 
	return 0;

}



	// Zadanie 13 

int liczby(int a, int b)
{
	int wynik = 1; 

	while (b != 0)
	{
		wynik = wynik * a; 
		b--; 
	}
	return wynik; 

}

int main()
{
	int a, b; 
	cout << "Podaj wartosc(a): ";
	cin >> a; 
	cout << "Podaj wartosc(b): ";
	cin >> b;

	int potega = liczby(a, b);
	cout << "Wynik a^b wynosi: " << potega << endl; 

	return 0;
}



	// Zadanie 14 

long long silnia(int n)
{
	long long wynik = 1; 

	for (int i = 1; i <= n; i++)
	{
		wynik = wynik * i; 
	}
	return wynik; 
}

int main()
{
	int n; 

	do
	{
		cout << "Podaj liczbe naturalna n: ";
		cin >> n; 
	} while (n < 0);

	long long wynik_silnia = silnia(n); 
	cout << n << "! wynosi " << wynik_silnia << endl; 

	return 0; 
}



	 // Zadanie 15 

long long potega_dwojki_iteracyjnie(int n)
{
	long long wynik = 1; 
	for (int i = 0; i < n; ++i)
	{
		wynik *= 2; 
	}
	return wynik; g
}

int main()
{
	int n; 
	cout << "Podaj liczbe naturalna n: "; 
	cin >> n; 
	cout << "2^" << n << " = " << potega_dwojki_iteracyjnie(n) << endl;
	return 0; 
}

*/

	// Zadanie 16 


