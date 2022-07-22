/*en un estadio se tienen 5 tipos de localidades las cuales se identifican por una clave numerica que es un valor comprendido entre 1&5 los precios de cada localidad y los datos referentes a las ventas de boletos para el proximo juego
se proporcionan como sigue: claves cl1 cl2 (cada una tiene un precio) cantidades can1 can2.(tipo de lugar)
determiar: 
a)que lea los precios (de cada localidad )
b)lea los datos de las ventas de boletos
c)imprima cada venta ,la clave,la cantidad,importe total de los boletos vendidos en ese evento
d)calcule e imprima la cantidd de boletos vendidos de cada tipo
e)calcule e imprima la recaudacion total del estadio*/
#include<iostream>
using namespace std;
int suma (int a,int b,int c,int d,int e);
int main ()
{
	int r1,r2,r3,r4,r5;
	int p1,p2,p3,p4,p5;
	int cl,s;
	int v=0,v1=0,v2=0,v3=0,v4=0,v5=0;
	int t=0,t1=0,t2=0,t3=0,t4=0,t5=0;
	int op;
	do{
	cout<<"* * * * * * * * Bienvenido * * * * * * * *\n\n¿De que localidad deseas comprar boletos?\n\n1)VIP         Costo de $988 \n2)Enfrente    Costo de $888\n3)Area A      Costo de $788\n4)Area B      Costo de $688\n5)Valcones    Costo de $588\n\nLocalidad ";
	cin>>op;
	switch (op)
	{
		case 1:
			cout<<"¿Cuantos boletos desea comprar?\n";
			cin>>r1;
			cl=988;
			v1=v1+r1;
			p1=cl*r1;
			t1=t1+p1;
			cout<<"Boleto VIP\nClave 1\nCosto $"<<cl<<"\n\nTotal $"<<p1;
		break;
		case 2:
			cout<<"¿Cuantos boletos desea comprar?\n";
			cin>>r2;
			cl=888;
			v2=v2+r2;
			p2=cl*r2;
		    t2=t2+p2;	
			cout<<"Boleto Enfrente\nClave 2\nCosto $"<<cl<<"\n\nTotal $"<<p2;
		break;
		case 3:
			cout<<"¿Cuantos boletos desea comprar?\n";
			cin>>r3;
			cl=788;
			v3=v3+r3;
			p3=cl*r3;
			t3=t3+p3;
			cout<<"Boleto Area A\nClave 3\nCosto $"<<cl<<"\n\nTotal $"<<p3;
		break;
		case 4:
			cout<<"¿Cuantos boletos desea comprar?\n";
			cin>>r4;
			cl=688;
			v4=v4+r4;
			p4=cl*r4;
			t4=t4+p4;
			cout<<"Boleto Area B\nClave 4\nCosto $"<<cl<<"\n\nTotal $"<<p4;
		break;
		case 5:
			cout<<"\n¿Cuantos boletos desea comprar?\n";
			cin>>r5;
			cl=588;
			v5=v5+r5;
			p5=cl*r5;
			t5=t5+p5;
		    cout<<"Boleto Valcones\nClave 5\nCosto $"<<cl<<"\n\nTotal $"<<p5;
		break;
		default:
			cout<<"Opcion Invalida\n";
	}
	cout<<"\n\n¿Hay más clientes?\n1)Si\n2)No\n";
	cin>>s;
	system ("cls");
	v=suma (v1,v2,v3,v4,v5);
	t=suma (t1,t2,t3,t4,t5);
}
    while (s==1);
    cout<<"\nTotal de voletos VIP      vendidos "<<v1<<" Costo $988\n";
    cout<<"Total de voletos Enfrente vendidos "<<v2<<" Costo $888\n";
    cout<<"Total de voletos Area A   vendidos "<<v3<<" Costo $788\n";
    cout<<"Total de voletos Area B   vendidos "<<v4<<" Costo $688\n";
    cout<<"Total de voletos Valcones vendidos "<<v5<<" Costo $588\n";
    cout<<"\n\nEl total de boletos vendidos es "<<v<<"\n";
    cout<<"\nSe logro recaudar $"<<t;
    getchar ();
    return 0;
    
}

int suma (int a,int b,int c,int d,int e)
{
	int total;
	total=a+b+c+d+e;
	return total;
}
