#include <conio.h>
#include <iostream.h>
/*10.-Realice un programa que lea n�meros enteros positivos hasta que se introduzca
un 0. El programa deber� mostrar por pantalla la cantidad de n�meros le�dos, la media,
as� como el valor m�ximo introducido.*/
main()
{
int Rnumero,Rcont=0;
double Rmedia=0,Rposi=0,Rmaximo=0;
cout<<"ELABORADO POR: GUILLERMPO ROGER MAZA ANDRADADE 2SB "<<endl;
cout<<"SOLO INGRESE NUMEROS POSITIVOS: "<<endl;
do{
	do{
	cin>>Rnumero;
   }while(Rnumero<0);//validacion de enteros positivos
   Rposi=Rposi+Rnumero;
   if(Rnumero!=0)
   { Rcont++;//contador de numeros leidos diferentes de cero
     Rmedia=Rposi/Rcont;
     if(Rnumero>Rmaximo)
     Rmaximo=Rnumero;
   }

}while(Rnumero!=0);
if(Rnumero==0)
{
cout<<endl<<"SE HA LEIDO "<<Rcont<<" NUMEROS POSITIVOS"<<endl;
cout<<"LA MEDIA DE NUMEROS ES: "<<Rmedia;
cout<<"\nEL VALOR MAXIMO INTRODUCIDO ES: "<<Rmaximo;
getch();
}
return 0;
}