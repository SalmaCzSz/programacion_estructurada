//programa que solicite el llenado de manera aleatoria de 2 tablas de 4*4 y multiplique estas y presente el resultado en una tercera tabla y presente la suma en una cuarta tabla//
#include<iostream>
using namespace std;
int main ()
{
	int c[4];
	int num[4];
	int tres [4];
	int cuat [4];
	int res[4];
	int p,s,f,g,t;
	
	cout<<"Tabla 1\n";
	cout<<"Ingresa Primeros Numeros\n";
	for (p=1;p<=4;p++)
	{
		cout<<"Numero "<<": ";
		cin>>c[p];
	}
	
	cout<<"\n\nIngresa Siguientes Numeros\n";
	for(s=1;s<=4;s++)
	{
		cout<<"Numero "<<": ";
		cin>>num[s];
	}
	
	cout<<"\n\nIngresa Siguientes Numeros\n";
	for(f=1;f<=4;f++)
	{
		cout<<"Numero "<<": ";
		cin>>tres[f];
	}
	
	cout<<"\n\nIngresa Siguientes Numeros\n";
	for(g=1;g<=4;g++)
	{
		cout<<"Numero "<<": ";
		cin>>cuat[g];
	}
	for (t=1;t<=4;t++)
	{
		res[t]=c[t] && num[t] && tres[t] && cuat[t];
		cout<<" "<<c[t]<<" "<<num[t]<<" "<<tres[t]<<" "<<cuat[t]<<"\n";
	}
	
	int v[4];
	int n[4];
	int tr[4];
	int cu[4];
	int r[4];
	int e,w,x,j,m;
	
	cout<<"\nTabla 2\n";
	cout<<"Ingresa Primeros Numeros\n";
	for (e=1;e<=4;e++)
	{
		cout<<"Numero "<<": ";
		cin>>v[e];
	}
	
	cout<<"\n\nIngresa Siguientes Numeros\n";
	for(j=1;j<=4;j++)
	{
		cout<<"Numero "<<": ";
		cin>>n[j];
	}
	
	cout<<"\n\nIngresa Siguientes Numeros\n";
	for(w=1;w<=4;w++)
	{
		cout<<"Numero "<<": ";
		cin>>tr[w];
	}
	
	cout<<"\n\nIngresa Siguientes Numeros\n";
	for(x=1;x<=4;x++)
	{
		cout<<"Numero "<<": ";
		cin>>cu[x];
	}
	
	for (m=1;m<=4;m++)
	{
		r[m]=v[m] && n[m] && tr[m] && cu[m];
		cout<<" "<<v[m]<<" "<<n[m]<<" "<<tr[m]<<" "<<cu[m]<<"\n";
	}
	
	cout<<"\n\n";
	cout<<"\n\nTabla Multiplicada\n\n";
	int so[4];
	int si[4];
	int su[4];
	int sa[4];
	int l;
	
	for (l=1;l<=4;l++)
	{
		si[l]=c[l]*v[l];
		so[l]=num[l]*n[l];
		su[l]=tres[l]*tr[l];
		sa[l]=cuat[l]*cu[l];
		cout<<" "<<si[l]<<" "<<so[l]<<" "<<su[l]<<" "<<sa[l]<<"\n";
	}
	
	cout<<"\n\n";
	cout<<"\n\nTabla Sumada\n\n";
	int o[4];
	int k[4];
	int u[4];
	int a[4];
	int h;
	
	for (h=1;h<=4;h++)
	{
		k[h]=c[h]+v[h];
		o[h]=num[h]+n[h];
		u[h]=tres[h]+tr[h];
		a[h]=cuat[h]+cu[h];
		cout<<" "<<k[h]<<" "<<o[h]<<" "<<u[h]<<" "<<a[h]<<"\n";
	}	
}



