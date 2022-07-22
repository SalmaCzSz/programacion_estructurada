#include<iostream>
using namespace std;
int main ()
{
	int i,j,k,r=0;//variable y contador
	
    cout<<"Ingrese Extencion de su tabla\n";
    cin>>r;
    
    int a[r][r];
    k=r-1;
    
	for (i=0;i<=k;i++)
	{
		cout<<"\n";
		for (j=0;j<=k;j++)
		{
			a[i][j]=i+j;
			cout<< a[i][j]<<"  ";
		}
	}
	
}
