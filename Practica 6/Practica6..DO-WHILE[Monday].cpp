/*El mismo programa anterior pero con Do-While
2/Marzo/2020*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, x, y=0;
	float p=0;
	printf("Bienvenido a este sistema super avanzado pero ahora con DO-WHILE xd");
	printf("\n\nIngrese un numero mayor o igual que cero, en cambio ingrese un numero negativo para terminar:\n");
	scanf("%d", &i);
	do{
		printf("\n\nIngrese un numero mayor o igual que cero, en cambio ingrese un numero negativo para terminar\n");
		scanf("%d",&i);
		x=x+i;
		y++;
	} while (i>=0);
	p= x/y;
	printf("\n\nEl promedio es: %.2f", p);
	printf("\n\nFinalizado crack");
	return 0;

}
