#include <conio.h>
#include <iostream.h>
#include <string>
main()
{
/*15.- Realice un programa que determine si un numero leído del teclado es primo o no*/
int Rprimo,Rcont;
char Rresp;
cout<<"Elaborado por: Guillermo Roger Maza Andrade"<<endl;
do{
cout<<"INGRESE NUMERO: ";
cin>>Rprimo;
Rcont =0;//Esta variable permite verificar que haiga solo 2 divisores, para que sea numero primo
if(Rprimo>=1)
{
	for(int Ri=1;Ri<(Rprimo+1);Ri++)
	{
	if(Rprimo%Ri==0)
		{
		Rcont++;
		}
	}

	if(Rcont!=2)
	cout<<"NO ES NUMERO PRIMO"<<endl;
else
cout<<"SI ES NUMERO PRIMO"<<endl;
}
else
cout<<"NO ES NUMERO PRIMO"<<endl;
cout<<"DESEA Ingresar otro numero (S|N) ";
cin>>Rresp;
Rresp=tolower(Rresp);
}while(Rresp=='s');
return 0;
}