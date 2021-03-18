#include <conio.h>
#include <iostream.h>
/*16.-Un número perfecto es un entero positivo, que es igual a la suma de todos los
enteros positivos (excluido él mismo) que son divisores del número. El primer
número perfecto es 6, ya que los divisores de 6 son 1, 2, 3 y 1 + 2 + 3 = 6 */
/*17.-Escriba un programa que lea un número entero positivo n y muestre por pantalla si
ese número es o no perfecto.*/

main()
{
int Rperfecto,RX;
char Rresp;
do
{
clrscr();
cout<<"ELABORADO POR: GUILLERMO ROGER MAZA ANDRADE 2SB"<<endl;
cout<<"SOLO Ingrese numero positivo: ";
	do{cin>>Rperfecto;}while(Rperfecto<0);//validacion de positivos
   RX=0;
	for(int Ri =1;Ri<Rperfecto;Ri++)
	{
	 if(Rperfecto%Ri==0)
	 RX=RX+Ri;
	}
 if(RX==Rperfecto)
 cout<<endl<<"SI ES UN NUMERO PERFECTO ";
 else
 cout<<endl<<"NO ES PERFECTO";

cout<<endl<<"INGRESAR OTRO NUMERO (S|N)";
cin>>Rresp;
}while((Rresp=='S')||(Rresp=='s'));
return 0;
}