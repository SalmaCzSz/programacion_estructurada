//generar una tabla de longitud 10*10 y muestre en la diagonal principal el valor de 1 y para todos los demas el valor de 0//
#include<iostream>
using namespace std;
int main ()
{
	int s [10][10];
	int c,u;
	
	for (c=0;c<=9;c++)
	{
		for(u=0;c<=9;c++)
		{
			s [c][u]=u;
		}
	}
	for (c=0;c<=9;c++)
	{
		cout<<"\n";
		for (u=0;u<=9;u++)
		{
			
			if (s[c]==s[u])
		    {
			   cout<<"1";
		    }
		    else
		    {
		    	cout<<"0";
		    }
		}
		
	}
}

