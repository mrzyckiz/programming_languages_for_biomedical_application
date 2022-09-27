#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
int main(int argc, char * argv[]) 
{
long double x = atol(argv[1]);
long double y = atol(argv[2]);
int n = atoi(argv[3]);
if(n<=0) cout<< "blad -podaj poprawna liczba";
else{
long double fib[n];
int suma;
if (argc == 4 && x>0 && y>0 && n>0)
{
fib[0] = x;
fib[1] = y;	
 cout << "Ciag fibonacciego  liczb : "<<x << " , "<< y<<endl;
 
    
    for(int i=2;i<=n;i++)
	    {
	fib[i]=fib[i-1]+fib[i-2];
}
for(int i=0;i<n;i++)
{
 cout << "Wyraz nr "<<i+1<< ": " << fib[i]<< endl;
}
   for (int i = 0; i < n; i++) {
                cout << fib[i] << " ";
                if (isFibonacci(fib[i]) == 1)
                    cout << "nalezy do ciagu Fibonacciego" << endl;
                else
                    cout << "nie nalezy do ciagu Fibonacciego" << endl;
            }
      }
	else{
cout <<endl << "Blad" <<endl;
}


}
}




