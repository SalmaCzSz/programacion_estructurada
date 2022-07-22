#include<iostream>
using namespace std;
int main ()
{
	int vec[11];
	int i,j;
	
	for (i=1;i<=10;i++)
	{
		cout<<"Escribe el numero de la posicion "<<i<<": ";
		cin>>vec[i];
	}
	
	for (j=1;j<=10;j++)
	{
		cout<<"El numero en la posicion "<<j<<" es: "<<vec[j]<<"\n";
	}
}
