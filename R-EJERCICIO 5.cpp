#include <conio.h>
#include <iostream.h>
#include <string>
/*5.-Determinar la cantidad semanal de dinero que recibirá cada uno de los N obreros
de una empresa.Se sabe que cuando las horas que trabajo un obrero exceden de 40,
el resto se convierte en horas estras que se pagan al doble de una hora normal,
cuando no exceden de 8;cuando las horas extras exceden de 8 se pagan las primeras
8 al doble de lo que se paga por una hora normal y el resto al triple*/

main()
{
double Rextra,Rsalario,Rh,Rht;
char RResp;
cout<<"Creado por Guillermo Roger Maza Andrade 2sb"<<endl;
cout<<"\t\t\t INDUSTRIAS STARK ";
do{
	cout<<endl<<"INGRESE EL VALOR DE DINERO POR hORA TRABAJADA: $";cin>>Rh;
	if(Rh<0)cout<<endl<<"VALOR NO VALIDO.REPITA";
}while(Rh<0);//validar dinero
do{
	do{
	cout<<"INGRESE hORAS TRABAJADAS EN LA SEMANA: ";cin>>Rht;
	if(Rht<0)cout<<endl<<"VALOR NO VALIDO.REPITA"<<endl;
	}while(Rht<0);


   if(Rht>40)
   {Rextra=Rht-40;
         if (Rextra<=8)
  		   Rextra=(Rextra*Rh)*2;
             else
             Rextra=(Rextra*Rh)*3;
Rsalario=(40.00*Rh)+Rextra;
   }
else
Rsalario=Rht*Rh;

cout<<endl<<"EL OBRERO RECIBIRA EN LA SEMANA: "<<Rsalario;
cout<<endl<<"DESEA SEGUIR CALCULANDO.(S|N)";cin>>RResp;
RResp=tolower(RResp);
}while(RResp =='s');
return 0;
}
