/*PROGRAMA QUE DETERMINA SI 10 NUMEROS SON PAR O IMPAR*/
#include<iostream>
using namespace std;
int main()
{
	int i;
	int b;
	for (i=1;i<=10;i++)
	{
		cout<<"\ningresa un valor";
		cin>>b;
		if (b%2==0)
		{
			cout<<"\nEs un numero par";
		}
		else
		{
			cout<<"\nEs un numero impar";
		}
	}	
}
