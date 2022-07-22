#include<iostream>
using namespace std;
int main ()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int d[3][3];
	int i,j;
	
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			cout<<"ingresa un valor a "<<i<<","<<j<<":  ";
			cin>>a[i][j];
			cout<<"ingresa un valor b "<<i<<","<<j<<":  ";
			cin>>b[i][j];
		}
	}
	
	for (i=0;i<=2;i++)
	{
		cout<<"\n";
		
		for (j=0;j<=2;j++)
		{
		    c[i][j]=a[i][j]*b[i][j];
			cout<<a[i][j]<<" * "<<b[i][j]<<"="<<c[i][j]<<"\n";	
		}
	}
	
	for (i=0;i<=2;i++)
	{
		cout<<"\n";
		
		for (j=0;j<=2;j++)
		{
		    d[i][j]=a[i][j]+b[i][j];
			cout<<a[i][j]<<" + "<<b[i][j]<<"="<<d[i][j]<<"\n";	
		}
	}
}
