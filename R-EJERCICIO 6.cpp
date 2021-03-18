#include <conio.h>
#include <iostream.h>
#include <stdio.h>

/*6- LEER LOS 250.000 VOTOS OTROGADOS A LOS 3 CANDIDTOS  A ALCALDE DE LA CIUDAD DE LEON
E IMPRIMIR EL NUMERO DEL CANDIDATO GANADOR Y SU CANTIDAD DE VOTOS*/
main()
{
int Rvotos=0,Rcand,Rcand1=0,Rcand2=0,Rcand3=0,Rsuma;
cout<<"Creado por Guillermo Roger Maza Andrade 2sb"<<endl;
cout<<" ELECCION ELECTORAL A ALCALDE 'CIUDAD DE LEON' ";
cout<<"\n CANDIDATO 1 ";
cout<<"\n CANDIDATO 2 ";
cout<<"\n CANDIDATO 3 ";
cout<<"\n\n ELIJA CANDIDATO: ";
while(Rvotos<6)//cantidad de votos.
{
 do{
	cout<<"\n ELIJA # candidato: ";
	cin>>Rcand;
	if ((Rcand<1)||(Rcand>3))
   	cout<<" Valor no permitido";
 }while((Rcand<1)||(Rcand>3));

if(Rcand==1)
  {Rcand1=Rcand1+1;}
		else if(Rcand==2)
      {Rcand2=Rcand2+1;}
      	else if (Rcand==3)
         {Rcand3=Rcand3+1;}
    Rvotos=Rvotos+1;
}
Rsuma=Rcand1+Rcand2+Rcand3;
cout<<"\n LA CANTIDAD DE VOTOS ES: "<<Rsuma;
if((Rcand1>Rcand2)&&(Rcand1>Rcand3))
cout<<"\n EL CANDIDATO 1 ES EL GANADOR CON: "<<Rcand1<<"VOTOS";
else if((Rcand2>Rcand1)&&(Rcand2>Rcand3))
cout<<"\n EL CANDIDATO 2 ES EL GANADOR CON: "<<Rcand2<<"VOTOS";
else
cout<<"\n EL CANDIDATO 3 ES EL GANADOR CON: "<<Rcand3<<"VOTOS";

 getch();
 return 0;
}