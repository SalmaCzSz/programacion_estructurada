/*Programa para determinar el empleado con mayor y menor sueldo*/
#include<iostream>
using namespace std;
int main(void)

{
   	int mayor;
   	int menor;
	int i; //es el contador
	int b;//la variable sueldo
	char n[20];//es la variable nombre
	int c;//es la variable categoria

	for (i=1;i<=10;i++)

	{
	cout<<"Hola Empleado No"<<i<<"\nIngresa:\nNombre: "<<"\n";
	cin>>n;
	cout<<"Categoria \n";
	cin>>c;
	cout<<"Sueldo" <<endl;
	cin>>b;
	mayor=b;
    if (b>mayor);
    if (b<menor) menor=b;
}
	cout<<"el sueldo mayor es de $"<<mayor<<endl;
	cout<<"el sueldo menor es de $"<<menor<<endl;
	system ("pause");
	return 0;
}


