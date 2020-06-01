//AARON BUENO CABRERA 1918753
/*Define fibonacci function using recursion, reformat 2d Arrays exercise using functions*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

long fibonacci(int);
int main()
{
	int i;
	
	printf("Posicion\tFibonacci\n\n");
	for(i=0;i<=20;i++)
		printf("%d\t\t%d\n", i, fibonacci(i));
		getch();
		
	system("pause");
	return 0;
}

long fibonacci(int n)
{
	if(n==0||n==1)
		return n;
		else return fibonacci(n-2)+fibonacci(n-1);
}
