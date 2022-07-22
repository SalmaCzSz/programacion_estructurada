/*vectores*/
#include<iostream>
using namespace std;
int main()
{
	int i;
	int num [5];
	int sum=0;
	
	for (i=1;i<=4;i++)
	{
		cout<<"Ingresa un numero\n";
		cin>>num [i];
		sum=sum+num [i];
	}
	cout<<"La suma es "<<sum;
}
