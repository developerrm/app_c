#include <conio.h>
#include <iostream.h>
#include <string>
main()
{
/*EL TEATRO JOSE DE LA CRUZ MENA OTORGA DESCUENTOS SEGUN LA EDAD DEL CLIENTE
DETERMINAR LA CANTIDAD DE DINERO QUE EL TEATRO DEJA DE PERCIBIR POR CADA UNA DE LAS
CATEGORIAS. TOMAR EN CUENTA QUE LOS NIÑOS MENORES DE 5 AÑOS NO PUDEN ENTRAR AL TEATRO Y QUE
EXISTE UN PRECIO UNICO EN LOS ASIENTOS. LOS DESCUENTOS SE HACEN TOMANDO EN CUENTA EL SIGUIENTE CUADRO:
					EDAD      DESCUENTO
CATEGORIA 1  5-14     		  35%
CATEGORIA 2  15-19   		  25%
CATEGORIA 3  20-45     		  10%
CATEGORIA 4  46-65           25%
CATEGORIA 5  66 en adelante  35%
*/
float Rprecio,Rdesc,RTO,RV_CAJA=0,Rd1=0,Rd2=0,Rd3=0,Rd4=0,Rd5=0,RDESC;
// Rd1-Rd5 almacenan lo que se deja de percibir por categorias.//
int Redad;
char Rresp;
cout<<"Creado por Guillermo Roger Maza Andrade 2sb"<<endl;
cout<<"\n\t\t TEATRO JOSE DE LA CRUZ MENA ";
cout<<"\n Valor del boleto : ";
do{
	cin>>Rprecio;
   	if(Rprecio<=0)
   	cout<<"\n Valor no permitido ";
	}while(Rprecio<=0);//SE DEFINE EL VALOR DEL BOLETO

do{
cout<<"\n INGRESE EDAD DEL CLIENTE : ";
	do{
	cin>>Redad;
   if(Redad<5)
   cout<<"\n No se permite peronas menores de 5 años ";
   }while(Redad<5);

	if((Redad>5)&&(Redad<=14))
   {Rdesc=Rprecio*0.35;
    RTO=Rprecio-Rdesc;
    RV_CAJA=RV_CAJA+RTO;
    Rd1=Rd1+Rdesc;
    cout<<"\nVALOR A PAGAR : "<<RTO;
    cout<<"\nVALOR DESCONTADO : "<<Rdesc;
   }
   	else if((Redad>=15)&&(Redad<=19))
      {Rdesc=Rprecio*0.25;
      RTO=Rprecio-Rdesc;
      RV_CAJA=RV_CAJA+RTO;
    	Rd2=Rd2+Rdesc;
    	cout<<"\nVALOR A PAGAR : "<<RTO;
    	cout<<"\nVALOR DESCONTADO : "<<Rdesc;
    	}
      	else if((Redad>19)&&(Redad<=45))
         {Rdesc=Rprecio*0.10;
         RTO=Rprecio-Rdesc;
    		RV_CAJA=RV_CAJA+RTO;
    		Rd3=Rd3+Rdesc;
    		cout<<"\nVALOR A PAGAR : "<<RTO;
    		cout<<"\nVALOR DESCONTADO : "<<Rdesc;
    		}
         	else if((Redad>45)&&(Redad<=65))
            {Rdesc=Rprecio*0.25;
            RTO=Rprecio-Rdesc;
    			RV_CAJA=RV_CAJA+RTO;
  				Rd4=Rd4+Rdesc;
    			cout<<"\nVALOR A PAGAR : "<<RTO;
    			cout<<"\nVALOR DESCONTADO : "<<Rdesc;
            }
            	else
               {Rdesc=Rprecio*0.35;
 				    RTO=Rprecio-Rdesc;
				    RV_CAJA=RV_CAJA+RTO;
				    Rd5=Rd5+Rdesc;
				    cout<<"\nVALOR A PAGAR : "<<RTO;
				    cout<<"\nVALOR DESCONTADO : "<<Rdesc;
                }

    cout<<"\n DESEA COMPRAR OTRO BOLETO (S|N) ";
    cin>>Rresp;
     Rresp=tolower(Rresp);
}while (Rresp == 's');

RDESC=Rd1+Rd2+Rd3+Rd4+Rd5;
cout<<"\n TOTAL DE VENTAS ES : "<<RV_CAJA<<" $";
cout<<"\n Se ha dejado de percibir en la CATEGORIA 1 : "<<Rd1<<" $";
cout<<"\n Se ha dejado de percibir en la CATEGORIA 2 : "<<Rd2<<" $";
cout<<"\n Se ha dejado de percibir en la CATEGORIA 3 : "<<Rd3<<" $";
cout<<"\n Se ha dejado de percibir en la CATEGORIA 4 : "<<Rd4<<" $";
cout<<"\n Se ha dejado de percibir en la CATEGORIA 5 : "<<Rd5<<" $";
cout<<"\n TOTAL EN DESCUENTOS : "<<RDESC<<" $";

getch();
return 0;
}