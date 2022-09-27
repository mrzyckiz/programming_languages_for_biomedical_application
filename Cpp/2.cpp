// ConsoleApplication2.cpp: Definiuje punkt wejœcia dla aplikacji konsolowej.
//


#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;



int main(int argc, char *argv[])
{
	if(argc!=4) cout<<"blad parametru";
	else{
	
double a= strtof(argv[1], NULL);
double b= strtof(argv[2], NULL);;
double c= strtof(argv[3], NULL);;
double p;
double pole;
	if ( a + b > c && a + c > b && b + c > a) {
		cout << "Mozna utworzyc trojkat o bokach "<< a <<", "<< b<< ", "<<c<<". "<< "Polowa obwodu wynosi: ";
		p = (a + b + c) / 2; 
		cout << p;
		pole = sqrt(p*(p - a)*(p - b)*(p - c));
		cout <<" , a jego pole wynosi: ";
		cout << pole;
	}
	
	else 
	cout << "Nie mozna utworzyc trojkata" << endl;
	cout << endl;
}
}


