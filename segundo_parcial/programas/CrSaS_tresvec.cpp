#include<iostream>
using namespace std;
int main ()
{
	int vec[11];
	int num2[11];
	int res[11];
	int p,s,t;
	
	cout<<"Ingresa Primeros 10 Numeros\n";
	for (p=1;p<=10;p++)
	{
		cout<<"Numero "<<p<<": ";
		cin>>vec[p];
	}
	
	cout<<"\n\nIngresa Siguientes 10 Numeros\n";
	for(s=1;s<=10;s++)
	{
		cout<<"Numero "<<s<<": ";
		cin>>num2[s];
	}
	
	cout<<"\n\n";
	
	for (t=1;t<=10;t++)
	{
		res[t]=vec[t]*num2[t];
		cout<<"El Resultado De Multiplicar "<<vec[t]<<" * "<<num2[t]<<" es "<<res[t]<<"\n";
	}
}
