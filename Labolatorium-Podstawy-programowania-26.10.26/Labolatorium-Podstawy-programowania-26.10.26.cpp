#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

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
	float wynik = oblicz_sume_zwracajaca(ile);5
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



	// Zadanie 16



	// Przykłady


int abc = 10;
int main()
{
	int xyz = 99;
	abc = 20;
	cout << "xyz = " << xyz << ", abc = " << abc << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "i = " << i << endl;
	}
}


float a(float stopnie);

int main()
{
	float fahr, celsius;
	for (fahr = 0.0; fahr <= 200; fahr = fahr + 20)
	{
		celsius = a(fahr);
			cout << fahr << " " << celsius << endl;

	}
	return 0;
}

	float a(float stopnie)
	{
		double wynik = (5.0 / 9.0) * (stopnie - 32);
		return wynik;

	}


int dodawanie(int a, int b)
{
	int wynik = a + b;
	return wynik;
}

void wyswietlanie(int a, int b);

int zmiennaGlobalna = 10;
int main()
{
	int a = 45;
	int b = 25;
	int suma = dodawanie(a, b);		// zamiast robic int suma = a + b uzylem tej zmiennej globalnej aby to zrobic 
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	wyswietlanie(11, 22);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosc a oraz b: " << a << " i " << b << endl;
	return 0;

}

void wyswietlanie(int a, int b)
{
	cout << "Wynik procedury / funkcji z void " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
}



int main() { //kod 04_04
	int sec = time(NULL); //a jednak w sekundach!
	srand(sec);
	cout << "Sekundy od 1970.01.01:";
	cout << "seed: " << sec << "\n\n";

	for (int i = 0; i < 10; i++) {
		int strangeNumber = rand(); //od 0 do RAND_MAX, zazwyczaj do 32768
		int dice = 1 + (strangeNumber % 6);
		cout << "Wynik kostki K6: " << dice << ", oryginalna losowa liczba: " << strangeNumber << "\n";
	}
}




void print_table(int argument);
void doNothingImportant();

int vector[10];
int globalCounter = 0;

int main() { //kod 04_06
	doNothingImportant();
	int localVar = 5, n = 10;
	for (globalCounter = 0; globalCounter < n; globalCounter++)
		vector[globalCounter] = globalCounter * 2;

	print_table(localVar);
	cout << "Licznik: " << globalCounter << ", zmienna_lokalna: " << localVar << endl << endl;
	print_table(localVar);
	return 0;
}

void print_table(int argument) {
	cout << "*** print_table start *** licznik: " << globalCounter << ", argument: " << argument << endl;
	cout << "Wektor: ";
	for (int i = 0; i < globalCounter; i++)
		cout << vector[i] << " ";

	cout << endl;
	globalCounter = 2;
	argument = 2;
	cout << "*** print_table end ***  licznik: " << globalCounter << ", argument: " << argument << endl << endl;
}

void doNothingImportant() {
	cout << "    ### program started" << endl;
}



	// Zadanie 0 

int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10;

int main() { //kod 04_05
	int a = 45, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;
	wyswietlanie(a, b);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
}





	// Zadanie 1 

void przywitanie(string imie)
{
	cout << "Czesc, " << imie << endl;
}

int main()
{
	przywitanie("Szymon");
	
	return 0; 
}


	// Zadanie 2 
	
void tabliczka()
{
	for (int a = 1; a <= 10; a++)
	{
		for (int b = 1; b <= 10; b++)
		{
			cout << a * b << "\t"; 
		}
		cout << endl; 
	}
}

int main()
{
	tabliczka();
	return 0; 
}



	// Zadanie 3 

void wieksza_liczba(int a, int b)
{
	if (a > b)
	{
		cout << "Pierwsza liczba: " << a << "jest wieksza od drugiej" << b << endl; 
	}
	else if(a < b)
	{
		cout << "Druga liczba: " << b << "jest wieksza od pierwszej" << a << endl; 
	}
	else
	{
		cout << "Obie liczby sa sobie rowne" << endl; 
	}
}

int najmniejsza(int a, int b)
{
	
	if (a > b)
	{
		return b; 
	}
	else
	{
		return a; 
	}
}

int main()
{
	int x, y; 
	cout << "Podaj wartosc dla a = "; 
	cin >> x; 
	cout << "Podaj wartosc dla b = "; 
	cin >> y; 
	wieksza_liczba(x, y); 
	cout << "Mniejsza wartosc: " << najmniejsza(x, y) << endl;
	return 0; 
}




	// Zadanie 4 

void najmniejsza(int a, int b, int c)
{
	if (a < b && a < c)
	{
		cout << "Najmniejsza jest liczba a = " << a << endl; 
	}
	else if (b < a && b < c)
	{
		cout << "Najmniejsza jest liczba b = " << b << endl; 
	}
	else
	{
		cout << "Najmniejsza jest liczba c = " << c << endl; 
	}
}

int najmniejsza_wartosc(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return a;
	}
	else if (b < a && b < c)
	{
		return b; 
	}
	else
	{
		return c; 
	}
}


int main()
{
	int x, y, z; 
	cout << "Podaj wartosc dla a = ";
	cin >> x; 
	cout << "Podaj wartosc dla b = ";
	cin >> y; 
	cout << "Podaj wartosc dla c = ";
	cin >> z; 
	najmniejsza(x, y, z); 

	cout << "Najmniejsza wartoscia jest " << najmniejsza_wartosc(x, y, z) << endl; 
}



	// Zadanie 5 


double trojkat(double a, double b)
{
	 
	double pole = (a * b) / 2; 
	cout << "Pole trojkata wynosi = " << pole << endl;

	return pole; 
}

int main()
{
	double x = 12; 
	double y = 20; 
	double podwojone_pole = trojkat(x,y) * 2; 

	cout << "Podwojona wartoscia pola trojkata jest " << podwojone_pole << endl; 

	return 0; 
}



	// Zadanie 6

void dzielniki(int n)
{
	cout << "Dzielniki liczby " << n << " to: ";
	for (int i = 1; i <= n; i++)
	{
		if (n % 1 == 0)
		{
			cout << i << " ";
		}
	}
	cout << n << endl; 
}

int main()
{
	int n; 
	cout << "Podaj wartosc liczby n: ";
	cin >> n; 
	
	if (n > 0)
	{
		dzielniki(n);
	}
	else
	{
		cout << "liczba musi byc wieksza od 0" << endl; 
	}
	return 0; 
}




	// Zadanie 7 

double srednia(double a, double b)
{
	double W1;
	double W2;  
	cout << "Podaj wage dla pierwszej wartosci = "; 
	cin >> W1; 
	cout << "Podaj wage dla drugiej wartosci = ";
	cin >> W2; 

	return((a * W1 + b * W2) / (W1 + W2));
}

int main()
{

	double x, y;
	cout << "Podaj wartosc dla pierwszej wartosci = ";
	cin >> x;
	cout << "Podaj wartosc dla drugiej wartosci = ";
	cin >> y; 

	cout << srednia(x, y) << endl; 

	return 0; 

}



	// Zadanie 8


void przyprostokatne(double a, double b)
{
	
	double c = sqrt(a * a + b * b); 
	cout << "Przeciwprostokatna wynosi: " << c << endl;
	
}


int main()
{
	double x = 8; 
	double y = 9; 
	przyprostokatne(x, y);
}


	// Zadanie 10
	// 

int argument()
{
	int n;
	cout << "ile skladnikow chcesz sumowac: ";
	cin >> n; 
	
	int suma = 0; 
	int wartosc; 
	
	while (n != 0)
	{
		cout << " Podaj wartosc skladnika n: "; 
		cin >> wartosc; 
		suma += wartosc;
		n--;
	}

	return suma; 
}

int main()
{
	cout << argument();
	return 0;
}





	// Zadanie 11 

double boki()
{
	double a, b; 
	cout << "Podaj wartosc boku prostokata: ";
	cin >> a;
	cout << "Podaj wartosc boku prostokata: ";
	cin >> b;

	return(2 * a + 2 * b);
}

int main()
{
	cout << "Obwod prostokata wynosi: " << boki() << endl;
	
	return 0;
}



	// Zadanie 13

int argumenty(int a, int b)
{
	
	
	return pow(a, b); 
}

int main()
{
	int a, b; 
	cout << "Podaj pierwsza wartosc: ";
	cin >> a;
	cout << "Podaj druga wartosc: ";
	cin >> b;
	cout << "Wynik: " << argumenty(a, b) << endl;
}

*/





	