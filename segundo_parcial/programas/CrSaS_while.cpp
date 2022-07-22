/*While*/
#include<iostream>																					
using namespace std; 
int main ()
{
	float y=0;
	float x=0;
	
	while(x<=100)
	{
		y=x*x;
		cout<<"El valor de x "<<x<<" El valor de y "<<y<<"\n";
		x=x+0.5;
	}
	cout<<"\n Proceso terminado ";
} 
