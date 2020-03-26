/*Arreglos unidimensionales
Dado un numero n<100
Mostrar los n numeros y si son primos o no*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int main(){
	int x;//numero a ingresar
	int y;//numero a evaluar
	int dv;//divisor
	int r;//residuo
	int i;//indice
	bool num[100];
	bool esdv;//es divisible
	
	printf("Ingrese un numero\n");
	scanf("%d", &x);

	//Proceso 
	for(i=0; i<=x; i++)
	{
		y<= i+1;
		r=1;
		esdv= r==0;
		dv= 2;
		while(dv<= y && dv== false)
		{
			r= y%dv;
			esdv= r==0;
			dv++;
		}
		num[i]= esdv;
	}
	//Impresion de resultado
	printf("\tResultado:\n\n");
		for(i=0; i<x; i++)
		{
			y= i+ 1;
			printf("\tnumero: %d es primo?: %d\n", y, num[i]);
		}
	system("pause");
	return 0;
}                                      
