/*uso de acumulador*/
#include<iostream>
using namespace std;
int main()

{
	int acum=0;
	int x,i;
	for (i=1;i<=10;i++)
	{
		cout<<"Introduce valor "<<i<<"\n";
		cin>>x;
		acum=acum+x;
	}
	cout<<"el resultado es "<<acum;
}
