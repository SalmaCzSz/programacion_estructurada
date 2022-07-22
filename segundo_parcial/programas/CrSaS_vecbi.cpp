#include<iostream>
using namespace std;
int main ()

{
	int tabla [5][5];
	int i,j;
	for (i=0;i<=4;i++)
	{
		for (j=0;j<=4;j++) //se llena primero
		{
			tabla [i][j]=j;
		}
	}
	for(i=0;i<=4;i++)
	{
		cout<<"\n";
		for (j=0;j<=4;j++)
		{
			cout<<tabla[i][j];
		}
	}	
}
