#include <conio.h>
#include <iostream.h>
#include <string>
//creado por Guillermo Roger Maza Andrade 2sb
/*1.-En una tienda de descuento las personas que vana apagar el importe de su compra llega ala
caja y saca una bolita de color , que les dirá que desuento tendrán sobre el total de su compra.
Determinar la cantidad que pagara por cada cliente desde que la tienda abre hasta que cierra.
Se sabe que si el color de la blita es roja el cliente obtendra un 40% de descuento,
si es amarilla un 25% y si es blanca no obtendra descuento*/
main()
{
float Rprecio,Rv_compra,Rdesc,Rcaja=0;
float R=0.4,A=0.25,B=0;//descuento por color
int Rbol;
char RRESP;
do{clrscr();
cout<<"Creado por Guillermo Roger Maza Andrade 2sb"<<endl;
cout<<"\t\t 'MERCADITO DEL DESCUENTO' \n\n"<<endl;
cout<<"Ingrese valor de la compra : ";cin>>Rprecio;//ingreso de precio al llegar a caja
cout<<endl<<"LE OTORGAREMOS DESCUENTO SEGUN COLOR: "<<endl;
cout<<"1.-ROJA."<<endl<<"2.-AMARILLA"<<endl<<"3.-BLANCA"<<endl;//COLORES DISPONIBLES
cout<<"DIGITE OPCION (1-3): ";
 do{
      cin>>Rbol;//escojer opcion de bolita para el descuento
      switch(Rbol)
	{
case 1:
	clrscr();
   Rdesc=Rprecio*R;
	Rv_compra=Rprecio-Rdesc;
	Rcaja=Rcaja+Rv_compra;
	cout<<endl<<" EL COLOR ESCOJIDO FUE ROJO, RECIBIRA UN DESCUENTO DE: "<<Rdesc<<" $ "<<endl;
	cout<<"VALOR A PAGAR: "<<Rv_compra;
	getch();
	break;

case 2:
	clrscr();
	Rdesc=Rprecio*A;
	Rv_compra=Rprecio-Rdesc;
	Rcaja=Rcaja+Rv_compra;
	cout<<endl<<" EL COLOR ESCOJIDO FUE AMARILLO, RECIBIRA UN DESCUENTO DE: "<<Rdesc<<" $ "<<endl;
	cout<<"VALOR A PAGAR: "<<Rv_compra;
	getch();
	break;

case 3:
	clrscr();
	Rdesc=Rprecio*B;
	Rv_compra=Rprecio-Rdesc;
	Rcaja=Rcaja+Rv_compra;
cout<<endl<<" EL COLOR ESCOJIDO FUE BLANCO,NO RECIBIRA DESCUENTO."<<endl;
	cout<<"VALOR A PAGAR: "<<Rv_compra;
	getch();
	break;

default:cout<<endl<<"OPCION NO DISPOSIBLE.. presione ENTER y REPITA.. ";getch();
	}//aqui cierra el switch
 }while((Rbol<=0)||(Rbol>3));//validacion de color de la bolita
cout<<endl<<"\n VOLVER A CALCULAR:... (S|N)";
cin>>RRESP;
RRESP=tolower(RRESP);
}while(RRESP=='s');
cout<<endl<<"VALOR EN CAJA : "<<Rcaja;
getch();
return 0;
}

