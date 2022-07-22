#include<iostream>
#include<windows.h>
#include<string.h>
#include<fstream>

using namespace std;
ofstream entrada;

int main ()
{
	string nombre,apellido;
	int boleta, sueldo;
	char opc;
	entrada.open("Lista.txt",ios::out|ios::app);
	if (entrada.fail())
	{
		cout<<"Error al abrir el archivo";
	}
	else 
	{
		do
		{
			cout<<"\3\3\3\3\3 Datos del alumno \3\3\3\3\3";
			cout<<"\nBoleta: ";
			cin>>boleta;
			cout<<"\nNombre: ";
			cin>>nombre;
			cout<<"\nApellido: ";
			cin>>apellido;
			cout<<"\nSueldo: ";
			cin>>sueldo;
			entrada<<boleta<<" "<<nombre<<" "<<apellido<<" "<<sueldo<<"\n";
			cout<<"Desea continuar continuar con otro registro S/N \n";
			cin>>opc;
			opc=toupper (opc);
		}
		while (opc=='S');
		system("cls");
	}
	entrada.close ();
	system("PAUSE");
	return 0;
}
