/*Programa que con los numeros que ingrese el usuario, calcular el promedio
2/Marzo/2020*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, x, y=0;
	float p=0;
	printf("Bienvenido a este sistema super avanzado xd\n\n");
	printf("\n\nIngrese un numero mayor o igual que cero, en cambio ingrese un numero negativo para terminar:\n");
	scanf("%d", &i);
		while(i>=0){
		x=x+i;
		y++;
		printf("\n\nIngrese un numero mayor o igual que cero, en cambio ingrese un numero negativo para terminar\n");
		scanf("%d",&i);	
	}
	p= x/y;
	printf("\n\nEl promedio es: %.2f", p);
	printf("\n\nFinalizado crack");
	return 0;
}

