#include <conio.h>
#include <iostream.h>
main()
{
/*8.-Diseñe un pseudocodigo que reciba como dato un entero X y calcule e imprima
el resultado de la sgte serie: 1^2-2^2+3^2-4^2+-N^2 */
int Rx,Rserie=0,Ri=1;
cout<<"ELABORADO POR GUILLERMO ROGER MAZA ANDRADE 2SB"<<endl;
cout<<"INGRESE NUMERO ENTERO: ";cin>>Rx;
while(Ri<=Rx)
{
if(Ri%2==1)
Rserie=Rserie+(Ri*Ri);
else
Rserie=Rserie-(Ri*Ri);
Ri++;
}
cout<<"EL resultado de la serie: 1^2-2^2+3^2-4^2+-N^2 es.... "<<Rserie;
getch();
return 0;
}