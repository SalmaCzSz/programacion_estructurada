/*el numero mayor*/
#include<iostream>
using namespace std;
int main()
{
	int mayor=0;
	int i; //es el contador
	int b;//la variable

	for (i=1;i<=10;i++)

	{
	cout<<"Ingresa Numero "<<i<<"\n";
	cin>>b;
    if (b>mayor) mayor=b;
}
	cout<<"el mayor es \n"<<mayor;
	return 0;


}


