// Pratica #3
// 17 de Febrero 2020

#include<stdio.h>


int main()
{
	char c;
	printf("Ingresa tu caracter:");
	c=getchar();
	int a = (int) c;
	if(48 <= a && a <= 57){
	printf("Numero ingresado: ");
	}else{ 
		if(65 <= a && a<= 90){
		printf("Caracter alfabetico mayor");}
		else{
			if(97<= a && a<= 122)
				printf("Caracter alfabetico menor");
			else{
			printf("Simbolo ingresado");
		}
	}
}
putchar(c);
printf("\n");
return(0);

}
