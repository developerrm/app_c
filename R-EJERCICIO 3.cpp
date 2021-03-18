#include <conio.h>
#include <iostream.h>
/*3.-Cierta universidad tiene N estudiantes. Elabore un algoritmo que encuentre
el promedio de edad de los estudiantes mayores de 21 años y el promedio de
edad del resto de estudiantes. por cada estudiante se tiene un registro que
contiene su código y edad*/
main()
{
const int Restudiantes=10;//cantidad de estudiantes de la Universidad.
int Ri,Rcodigo[Restudiantes],Redad[Restudiantes];
float RMayor21=0,RMenor21=0,Rcont_M=0,Rcont_m=0;
float Rprom_edad1,Rprom_edad2;
cout<<"ELABORADO POR: GUILLERMO ROGER MAZA ANDRADE";

for(Ri=0;Ri<Restudiantes;Ri++)
{Rcodigo[Ri]=(1000+Ri);}//generar codigo para cada estudiante

for(Ri=0;Ri<Restudiantes;Ri++)//llenar codigo y edad de los estudiantes
{cout<<"\nIngrese edad del estudiante "<<Rcodigo[Ri]<<" : ";
	do{cin>>Redad[Ri];if(Redad[Ri]<=0)cout<<"\nNO VALIDO.REPITA.. ";}while(Redad[Ri]<=0);//Validacion de edad
	if(Redad[Ri]>=21)
		{RMayor21=RMayor21+Redad[Ri];
		Rcont_M++;
		Rprom_edad1=RMayor21/Rcont_M;
      }
   else
   {RMenor21=RMenor21+Redad[Ri];
   Rcont_m++;
   Rprom_edad2=RMenor21/Rcont_m;
   }
}
cout<<"\nPROMEDIO DE EDAD DE ESTUDIANTES MAYORES DE 21 ES: "<<Rprom_edad1;
cout<<"\nPROMEDIO DE EDAD DE ESTUDIANTES MENORES DE 21 ES: "<<Rprom_edad2;
getch();
return 0;
}
