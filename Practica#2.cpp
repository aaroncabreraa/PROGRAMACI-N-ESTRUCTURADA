/*Practica 
10/02/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int num1, num2, suma, resta, mult, div;
	printf("\n\n\nIntroduzca el primer numero positivo o negativo: \n");
	scanf("%d", &num1);
	printf("\n\n\nIntroduzca el segundo numero positivo o negativo: \n");
	scanf("%d", &num2);
	char cad[10], carM, carm;
	
	suma= num1+num2; 
	resta= num1-num2;
	mult= num1*num2;
	div= num1/num2;
	printf("\n\nLa suma de %d + %d es: %d", num1, num2, suma);
	printf("\n\nLa resta de %d - %d es: %d", num1, num2, resta);
	printf("\n\nLa multiplicacion de %d * %d es: %d", num1, num2, mult);
	printf("\n\nLa division de %d / %d es: %d", num1, num2, div);
	
	if(num1>num2)
		printf("\n\n%d es mayor que el num2\n", num1);
	else
		if(num1==num2)
			printf("\n\n%d es igual que el segundo numero\n", num1);
		else
			printf("\n\n%d es menor que el segundo numero\n", num1);
		
	getche();
	system("pause");
	
	return 0;	
	
	
	
}
