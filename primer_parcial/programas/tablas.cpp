/*Programa para las tablas de multiplicar*/
#include<iostream>  
using namespace std;
int main()
{
	int i,j,resultado;
	for (i=1;i<=10;i++)
   	{
	 for (j=1;j<=10;j++)
	 {
	 	resultado=i*j;
	 	cout<<i<<"*"<<j<<"="<<resultado<<"\n";
	 }	
	}
	
}
