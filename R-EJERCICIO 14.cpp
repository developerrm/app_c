#include <conio.h>
#include <iostream.h>
/*14.- Realice un programa que calcule el factorial de un numero dado por teclado.
realice este ejercicio utilizando primero un bucle FOR y posteriormente repita el
ejercicio utilizando un bucle WHILE*/
main()
{
int Rn,Rfact=1,Rfactw,Ri;
cout<<"ELABORADO POR: GUILLERMPO ROGER MAZA ANDRADADE 2SB "<<endl;
cout<<"ESTE PROGRAMA CALCULA EL FACTORIAL DE LOS ENTEROS POSITIVOS"<<endl;
cout<<"INGRESE NUMERO: ";
	do
	{cin>>Rn;
   if(Rn<0)
   cout<<"\n DATO ERRONEO. REPITA ";
   }while(Rn<0);//VALIDACION NUMERICA

for(Ri=1;Ri<=Rn;Ri++)
{
	Rfact=Rfact*Ri;
}

Ri=1;
Rfactw=Ri;
while(Ri<=Rn)
{
Rfactw=Rfactw*Ri;
Ri++;
}
cout<<"\n FACTORIAL BUCLE FOR: "<<Rfact;
cout<<"\n FACTORIAL BUCLE WHILE: "<<Rfactw;
getch();
return 0;
}