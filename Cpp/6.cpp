#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
int ilosc,licznik=0;
string tekst;

   //Wypisz tekst + nowa linia
    cout<<"Podaj tekst: "<<endl;
    //Wczytaj liniê tekstu z wejœcia to tekst
    getline(cin, tekst);
    //Typ danych z klasy string który jest w stanie przechowaæ dowolnie d³ug¹ liczbê, tekst.size() mo¿e byæ > Int.MAX
    string::size_type rozmiar=tekst.size();
    //Rzutowanie naszego typu string::size_type na int
    ilosc=static_cast<int>(rozmiar);
    
    for(int i=0;i<ilosc;i++){
            if(tekst[i]=='a' || tekst[i]=='¹' || tekst[i]=='y' || tekst[i]=='i' || tekst[i]=='e' || tekst[i]=='ê' || tekst[i]=='u' ||
                tekst[i]=='A' || tekst[i]=='¥' || tekst[i]=='Y' || tekst[i]=='I' || tekst[i]=='E' || tekst[i]=='Ê' || tekst[i]=='U' || tekst[i]=='o' || tekst[i]=='O' )licznik++;
    }
    cout<<"Ilosc samoglosek w tekscie: "<<licznik<<endl;
    
    fstream plik;
    plik.open("wyrazy.txt", ios::out | ios::app);
    plik<< tekst<<"\t"<<licznik<<endl;
    plik.close();
}
