#include <conio.h>
#include <iostream.h>
/*19.-Realice un programa que lea un n�mero entero por teclado y devuelva por pantalla
las que forman ese n�mero. Por ejemplo, si se introduce el n�mero 2345, el
programa deber� mostrar por pantalla 5 � 4 � 3 � 2.
(Pista: utilice el ejercicio anterior como base para realizar este ejercicio).*/
main()
{
int RN,Rn;
cout<<"ELABORADO POR: GUILLERMO ROGER MAZA ANDRADE"<<endl;
cout<<"Ingrese numero: ";
cin>>RN;
while (RN>=10)//para enteros positivos
{
Rn=RN%10;
cout<<Rn<<" - ";
RN=RN/10;
}
while (RN<=-10)//para enteros negativos
{
Rn=RN%-10;
cout<<Rn<<" , ";
RN=RN/10;
}
cout<<RN;
getch();
return 0;
}
