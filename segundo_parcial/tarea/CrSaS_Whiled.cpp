/*While Programa que segun el mes de nacimiento imprime una frase*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main ()
{
    string f;
    f="si";
    int op;
	do
	{
		cout<<"\nElije un mes\n1)Enero\n2)Febrero\n3)Marzo\n4)Abril\n5)Mayo\n6)Junio\n7)Julio\n8)Agosto\n9)Septiembre\n10)Octubre\n11)Noviembre\n12)Diciembre\n";
		cin>>op;
		switch (op)
		{
			case 1:
				cout<<"La frase para este mes es:\n>>Si siembras una ilusion\nY la riegas con tu amor y constancia\nBrotara en ti una flor\nY su aroma y su calor\nTe arroparan cuando algo valla mal<<";
			break;
			case 2:
				cout<<"La frase de este mes es:\n>>No busques a la persona perfecta\nSino a alguien con quien puedas hacer tonterias\nAlguien que te trate bien\nY que le encante estar contigo<<\n";
			break;
			case 3:
				cout<<"La frase de este mes es:\n>>De nadie sere\nSolo de ti\nHasta que mis huesos se vuelvan cenizas\nY mi corazon deje de latir<<\n";
			break;	
			case 4:
				cout<<"La frase de este mes es:\n>>Si yo,Tu\nSi caes, Yo contigo\nY nos levantaremos juntos\nEn esto unidos\nSi lloro, Rieme\nSi ries, Llorare\nPues somos el equilibrio\nDos mitades que forman un sueño<<\n";
			break;
			case 5:
				cout<<"La frase de este mes es:\n>>Su piel es de tela blanca\nUn remiendo de recortes\nY sobre su corazon se ensartan\nAlfileres de colores\n\nMas tambien sobre ella\nUna horrible maldicion\nPues cuando alguien se le acerca demasiado\nEs un punzon\nCada aguja que se entierra\nMas hondo en su corazon<<\n";
			break;
			case 6:
				cout<<"La frase de este mes es:\n>>Te quiero como se quieren ciertas cosas oscuras\nSecretamente entre la sombra y el alma<<\n";
			break;
			case 7:
				cout<<"La frase de este mes es:\n>>Pero si la eleccion que tengo que tomar se reduce entre tu o yo\nTe escojo a ti\nSiempre te he escogido<<";
			break;
			case 8:
				cout<<"La frase de este mes es:\n>>Estoy deacuerdo con las condiciones Angel\nPorque tu mejor que nadie sabe\nCual debe de ser mi castigo\nSolamente...\nNo hagas mas de lo que pueda soportar<<\n";
			break;
			case 9:
				cout<<"La fraSe de este mes es:\n>>Poema al ETS\nOh gran ETS\nTuS hojas son como besos\nQue se pagan con $10\nMi amor por ti crece\nPorque necesito trece\nNo puedo esperar el dia\nPara que me revisen la guia\nHoy un sentimiento nace\nPor no entrar a clase\nTendre que estudiar\nPara ser regular\nMi corazon se estremece\nPor ti gran ETS<<\n";
			break;
			case 10:
				cout<<"La frase de este mes es:\n>>-¿Cuanto tiempo es Para Siempre?\n-Aveces solo un segundo\n-¿Cuanto tiempo es un segundo?\n-Cuando amas una eternidad<<\n";
			break;
			case 11:
				cout<<"La frase de este mes es:\n>>Ella era difente\nEn todos los sentidos\nIncluso tenia esa rara manera de extrañar\nFingiendo que no le importaba<<\n";
			break;
			case 12:
				cout<<"La frase de este mes es:\n>>Se crio entre libros\nHaciendo amigos invisibles\nEntre paginas y letras<<\n";
			break;
			default:
	    	cout<<"opcion no valida";
       }
       cout<<"\nDeseas elegir otro mes?\n\n";
       cin>>f;
   }
   while (f=="si" or f=="Si" or f=="SI");
   getchar();
   return 0;
}
