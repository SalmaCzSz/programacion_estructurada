#include<iostream>																					
using namespace std; 
int main ()
{
	float y=0;
	float x=0;
do{

	y=x*x;
	cout<<"El valor de x "<<x<<" El valor de y "<<y<<"\n";
	x=x+0.5;
	
	cout<<"\n Proceso terminado ";
} while(x<=10);
cout<<"Proceso terminado";

} 
