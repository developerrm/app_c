#include <conio.h>
#include <iostream.h>
#include <stdio.h>
/*4.-Elabore un algoritmo que obtenga el cuadrado de los N números enteros*/

main(){
int Rcont=0,Rn,Rnum,Rcuad;
cout<<"Creado por Guillermo Roger Maza Andrade 2sb"<<endl;
do{
cout<<" CUANTOS NUMEROS DESEA INGRESAR: ";
cin>>Rn;
if(Rn<0)
cout<<" VALOR NO VALIDO"<<endl;
}while(Rn<0);

while(Rcont<Rn)
{
cout<<"EL CUADRADO DE : ";cin>>Rnum;
Rcuad=Rnum*Rnum;
cout<<" es "<<Rcuad<<endl;
getch();
Rcont++;
}

getch();
return 0;
}
