#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
int n;
string tablica[100][100];
fstream file(argv[1], std::ios::in );
if( file.is_open() ) 
{
   for( int i = 0; i <30 ; i++ )
	{	
        getline( file, tablica[i][0],'\t');
        getline( file, tablica[i][1]);
        tablica [i][2]="0";
    }
   
//cout << "Wypisywanie tablicy do sortowania: " << endl;   
///for( int i = 0; i < 5; i++ ) 
//cout << tablica[i][0] <<"	" << tablica [i][1] <<endl;
cout<<endl;
cout<<"Posortowane wyrazy: " <<endl;

bool ok=true;
int rozmiar=30 ; //sizeof(tablica)/sizeof(char);
int c=1;
int d=1;

while(ok){
ok=false;
d=1;
c=1;

 for( int i = 0; i < rozmiar ; i++ )
 {
// tablica[i][1] = tablica[i][1] - {0};

if(tablica[i][2]=="0" && atoi(tablica[i][1].c_str())>d)
{
	ok=true;
	c=i;
	d=atoi(tablica[i][1].c_str());
}
}

if(ok){
 cout<< tablica[c][0]<< " "<<tablica [c][1]<<endl;
 tablica[c][2]="1";
}

}
    file.close();
}


else
     std::cout << "file error" << std::endl;
 }
