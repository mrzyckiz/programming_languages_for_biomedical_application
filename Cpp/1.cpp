#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
	if (argc != 3  )
cout<< "blad argumentu";
else{


	double liczba1=strtod(argv[1],NULL);
    double liczba2=strtod(argv[2],NULL);
    
    cout<< "Liczba 1 wynosi = "<< liczba1 << " Liczba 2 wynosi = "<< liczba2 <<endl;
    
   
    if (liczba2 != 0 && liczba1 != 0){
    	 double wynik = liczba1 / liczba2;
    cout << fixed << setprecision(4) <<"Wynik wynosi = "<< wynik;
	}
    
   else {
   	cout << "Podaj poprawne dane";
   }


}}
