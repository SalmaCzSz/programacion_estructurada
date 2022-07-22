#include<iostream>
using namespace std;
void cuadrado (int &);

int main ()
{
	int x=0;
	cout<<"Ingrese numero a elevar al cuadrado\n";
	cin>>x;
	cout<<"X antes de elevarse al cuadrado es "<<x<<"\n";
	cuadrado (x);
	cout<<"X despues de elevarse al cuadrado es "<<x<<"\n";
}
void cuadrado (int &y)
{
	y=y*y;
}
