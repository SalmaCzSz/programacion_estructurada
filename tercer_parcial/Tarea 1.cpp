/*crear una funcion "raizcubica" que calcule la raiz cubica de un numero real ,y devuelva otro real (tip:puedes elevar a 1/3 para hallarla)*/
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
float raiz (float res); //sqrt (b*b)^1/2
int main ()
{
	float res;
	int b;
	string a="Si";
	
	while (a=="Si" | a=="si")
	{
		cout<<"Ingresa un numero y determinaremos su raiz cubica: ";
	    cin>>b;
        res= pow (b,(0.333333333));
	    cout<<"\n\n"<<"Raiz Cubica de "<<b<<": "<<res;
	    cout<<"\n\nDeseas continuar ";
	    cin>>a;
	    system("cls");
	}
	getchar ();
	cout<<"\nHasta Pronto\n";
}

float raiz (float res)
{
	int b;
	res= pow (b,0.333333333);
	return res;
}
