#include<iostream>
using namespace std;
int main()
{
	int i=5;
	
	do // realiza el ciclo una vez por lo menos
	{
		cout<<"Ingresa un numero: ";
		cin>>i;
		cout<<"soy No. "<<i<<"\n";
	
	}while(i!=5); 
}
