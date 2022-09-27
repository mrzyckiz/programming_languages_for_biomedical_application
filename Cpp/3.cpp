#include <cstdlib>
#include <iostream>

using namespace std;
void kwadraty(int n)
{
int i;
int c;
    for(i=1; i<=n;i++) 
    {
	c += i * i; //suma kwadratów
	}
		cout<< c;    
}

int main(int argc, char *argv[])

{
   int p= strtol(argv[1],NULL,10);
   
    if (argc == 2 && p>0){
	
   kwadraty(p);
}
else {
	cout<< "blad";
}



}



