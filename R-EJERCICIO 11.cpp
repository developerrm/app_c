#include <conio.h>
#include <iostream.h>

/*11.-Realice un programa que calcule y visualice el más grade, el más pequeño y la
media de n números (n>0). El valor de n se solicitará al principio del programa y los
números serán introducidos por el usuario.*/

main()
{
int Rcont=0;
char Rresp;
float Rn,RX=0,Rmayor=-9999,Rmenor=999,Rmedia;
cout<<"ELABORADO POR: GUILLERMO ROGER MAZA ANDRADE"<<endl;
do{
cout<<"Ingrese numero: ";
	do{cin>>Rn;
   if(Rn<=0)
   cout<<"\nNo se permite numeros menores de cero";
   }while(Rn<=0);
  RX=RX+Rn;
  if(Rn>Rmayor)
  	 Rmayor=Rn;
  	if(Rn<Rmenor)
	 Rmenor=Rn;
  Rcont++;
  Rmedia=RX/Rcont;
  cout<<"\nINGRESAR OTRO NUMERO? (S|N) \n";
  cin>>Rresp;
}while((Rresp=='S')||(Rresp=='s'));

cout<<"\nEL NUMERO MAS GRANDE ES: "<<Rmayor;
cout<<"\nEL NUMERO MAS PEQUEniO ES: "<<Rmenor;
cout<<"\nLA MEDIA ES: "<<Rmedia;
getch();
return 0;
}