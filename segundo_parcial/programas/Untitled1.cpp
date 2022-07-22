/*Programa que solicita un nuero e imprime su tabla de sumar*/
#include<iostream>
using namespace std;
int main ()
{
	int a[4][4];
	int i,j;//variable y contador
	

	for (i=0;i<=3;i++)
	{
		cout<<"\n";
		for (j=0;j<=3;j++)
		{
			a[i][j]=i+j;
			cout<< a[i][j];
		}
	}
	
}
