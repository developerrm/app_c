#include <conio.h>
#include <iostream.h>

/*12.-Realizar un programa que pida dos números enteros por teclado y muestre por
pantalla el siguiente menú:
                            MENU
               1. SUMAR
               2. RESTAR
 	       3. MULTIPLICAR
               4. DIVIDIR
               5. SALIR
               ELIJA LA OPCION:__
El usuario deberá elegir una opción y el programa deberá mostrar el resultado por
pantalla y después volver al menú. El programa deberá ejecutarse hasta que se elija
la opción 5. Salir
*/
main()
{
int Rop;
float Rn_1,Rn_2,Rtotal;
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
do{
cin>>Rop;
if((Rop<0)||(Rop>5))
cout<<"\n VALOR NO PERMITIDO. Repita";}while((Rop<0)||(Rop>5));
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
}//cierra el switch
}while(Rop!=5);

return 0;
}
