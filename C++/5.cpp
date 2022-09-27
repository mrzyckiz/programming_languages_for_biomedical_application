#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n = 0;
    cout << "Tabliczka mnozenia, podaj n : " << endl;
    cin >> n;
    if( n>0 )
    {
        cout << "	";
        
    }
    else{
	
	cout << ("blad");
}
     
    cout << "   ";
    for( int a = 1; a <= n; a++ ) { // petla wypisujaca pierwszy wiersz do n
        
        if( a <= 9 )
             cout << "	";
        
        if(( a ) >= 10 &&( a ) <= 99 )
             cout << "	";
        
    
    cout << endl;}
    for( int a = 1; a <= n; a++ ) { //petla wypisujaca pierwsza kolumne do n
        
        if( a <= 9 )
             cout << "	";
        
        if( a >= 10 && a <= 99 )
             cout << "	";
        
        for( int b = 1; b <= n; b++ ) { //petla wypisujaca wyniki mnozenia
            cout << a * b<< " ";
            if(( a * b ) <= 9 )
                 cout << "  ";
            
            if(( a * b ) >= 10 &&( a * b ) <= 99 )
                 cout << " ";
            
        }
       cout << endl;
    }
     
}
    
    
    

