/* Calculadora simple by Aaron Cabrera 1918753
24/02/2020*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char x;
	float a1, b2, r;
	printf("Ingrese la operacion que desea realizar: (+ * / -)\n\n");
	scanf("%c", &x);
	if (x=='+' || x=='-' || x=='/'|| x=='*') 
		{
			printf("primer numero: \n\n");
			scanf("%f",&a1);
			printf("segundo  numero: \n\n");
			scanf("%f",&b2);
			
			switch(x){
				case '+':
					r= a1+b2; 
					break;
				case '-':
					r= a1-b2;
					break;
				case '/':
					r= a1/b2;
					break;
				case '*':
					r= a1*b2;
					break; 
			}
			printf("%.2f %c %.2f = %.2f\n\n",a1,x,b2,r);
		}
		else
			printf("\n\nOperador Invalido");
		system("pause");
		return 0;

}
