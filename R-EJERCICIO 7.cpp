#include <conio.h>
#include <iostream.h>
/*7..-Elabore un algoritmo que lea 100 números y determine la media de los numeros
positivos y negativos ingresados*/
main()
{float Rcont=0,Rnum,Rmedia=0;
cout<<"Creado por Guillermo Roger Maza Andrade 2sb"<<endl;
cout<<"ESTE PROGRAMA DETERMINARA LA MEDIA DE 100 NUMEROS INGRESADOS: ";
while(Rcont<10)//como prueba solo se mostrara la media de 10 numeros
{
	cout<<"\n";
   cin>>Rnum;
Rmedia=Rmedia+Rnum;
Rcont++;

}
Rmedia=Rmedia/Rcont;
cout<<"\n EL VALOR MEDIA ES: "<<Rmedia;
getch();
return 0;
}