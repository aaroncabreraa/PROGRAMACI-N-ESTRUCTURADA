/*Ciclos For y Arreglos 
1.- Pedir un numero b para usuarlo de Base
2.- Pedir el numero n de multilpos
3.- Imprimir los n multiplos de b en pantalla*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int b=0,n,m,l;
	printf("Introduzca un numero\n");
	scanf("%d",&b);
	printf("Introduzca el numero que desea para generar sus multiplos\n");
	scanf("%d",&n);
	printf("Los multiplos de %d",b);
	for (l=1;l<=n;l++)
	{
	m=b*l;
	printf("\n%d",m);
	}
	system("pause");
	return 0;
}
