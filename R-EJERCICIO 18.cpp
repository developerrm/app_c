#include <conio.h>
#include <iostream.h>
/*18.-Realice un programa que lea un número entero por teclado y devuelva por pantalla
el numero de digitos que componen ese número. Por ejemplo, si introducimos el número
12334, el programa deberá devolver 5.
(Pista:Utilice el operador %, averigue para que sirve y piense cómo utilizarlo) */
main()
{
float Rnum,Rcont=0,Rresult;
cout<<"ELABORADO POR: GUILLERMO ROGER MAZA ANDRADE"<<endl;
cout<<"INGRESE NUMERO: ";cin>>Rnum;
if(Rnum<10)
cout<<"\n NUMERO DE DIGITOS: UNO";
else
{ Rresult=Rnum/10;
	Rcont++;}
while(Rresult>=10)
{Rresult=Rresult/10;
Rcont++;}
Rcont++;
cout<<"\n EL NUMERO DE DIGITOS ES: "<<Rcont;
getch();
return 0;
}
