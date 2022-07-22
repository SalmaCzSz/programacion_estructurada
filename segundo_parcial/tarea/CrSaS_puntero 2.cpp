/*Puntero Programa que solicita los puntajes obtenidos en un juego
hace la suma de estos y entrega la puntuacion mas alta*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
	int t=0;
	int p[10];
	string r;
	r="si";
	int i;
	int mayor=0;

    cout<<"Bienvenido al juego\n";
  
	for (i=1;i<=10;i++)
    { 
	    cout<<"Ingresa puntuacion "<<i<<"\n";
	    cin>>p[i]; 
        t=t+p[i];
        if (p[i]>mayor) mayor=p[i];
   }
	cout<<"El total de puntos logrados es "<<t<<"\n";
	cout<<"Tu puntuacion mas alta fue de "<<mayor<<" puntos\n";
   
}


