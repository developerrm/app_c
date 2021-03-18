#include <conio.h>
#include <iostream.h>
#include <string>
/*13.-Modificar el ejercicio anterior para que al elegir la opción 5, en vez de salir del
programa directamente, nos muestre el siguiente mensaje de confirmación
                                MENU
               1. SUMAR
               2. RESTAR
 	       3. MULTIPLICAR
               4. DIVIDIR
               5. SALIR
               ELIJA LA OPCION:_5_
               ¿DESEAS SALIR REALMENTE (S/N)?
De modo que si pulsamos el carácter 's' salgamos del prog...,
pero si pulsamos el caracter'n', volvamos al menú*/
main()
{
int Rop;
float Rn_1,Rn_2,Rtotal;
char Rresp;
cout<<"ELABORADO POR: GUILLERMPO ROGER MAZA ANDRADADE 2SB "<<endl;
cout<<"INGRESE PRIMER NUMERO: ";cin>>Rn_1;
cout<<"\nINGRESE SEGUNDO NUMERO: ";cin>>Rn_2;
do{
cout<<endl<<"\t\t\t MENU";
cout<<"\n1.- SUMAR"<<endl;
cout<<"2.- RESTAR"<<endl;
cout<<"3.- MULTIPLICAR"<<endl;
cout<<"4.- DIVIDIR"<<endl;
cout<<"5.- SALIR"<<endl;
cout<<"EIJA OPCION... ";
do{ cin>>Rop;
if((Rop<0)||(Rop>5))
   cout<<"\n VALOR NO PERMITIDO. Repita ";}while((Rop<0)||(Rop>5));
switch(Rop)
{
case 1:
Rtotal=Rn_1+Rn_2;
cout<<"LA SUMA DE "<<Rn_1<<" Y "<<Rn_2<<" es = "<<Rtotal<<endl;
getch();
break;

case 2:
Rtotal=Rn_1-Rn_2;
cout<<"LA RESTA DE "<<Rn_1<<" Y "<<Rn_2<<" es = "<<Rtotal<<endl;
getch();
break;


case 3:
Rtotal=Rn_1*Rn_2;
cout<<"LA MULTIPLICACION DE "<<Rn_1<<" Y "<<Rn_2<<" es = "<<Rtotal<<endl;
getch();
break;

case 4:
if(Rn_2==0)
cout<<"NO SE PUEDE DIVIDIR PARA CERO";
  else
   {Rtotal=Rn_1/Rn_2;
    cout<<"LA DIVISION DE "<<Rn_1<<" Y "<<Rn_2<<" es = "<<Rtotal<<endl;}
getch();
break;

case 5:
cout<<"\n REALMENTE DESEA SALIR(S|N): ";
cin>>Rresp;
Rresp=tolower(Rresp);
break;
} //cierra el switch;
}while((Rresp=='n')&&(Rop!=6));

return 0;
}
