#include<iostream>
#include<fstream>
#include<string>
using namespace std;

	int boleta;
	string nombre;

int main ()
{
	ifstream salida;
	salida.open("Lista.txt",ios::in);
	
	salida>>boleta;
	salida>>nombre;
	
	cout<<boleta<<" "<<nombre;
	
	salida.close();
	return 0; 
}

