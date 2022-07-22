/*cronometro hh:mm:ss*/
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()

{
	int h,m,s; //definimos variable para hora minutos y segundos
	
	for (h=00;h<=23;h++) //ciclo para las horas
	{
		for (m=00;m<=59;m++) //ciclo para los minutos
		{
			for (s=00;s<=59;s++) //ciclo para los segundos
			{
				system("cls"); //este operador limpia la pantalla
				cout<<h<<":"<<m<<":"<<s<<"\n";
				Sleep(1000);
			}
		}
	}
	

}
