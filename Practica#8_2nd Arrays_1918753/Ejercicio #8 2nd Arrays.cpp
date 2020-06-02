/*3x3 Matrix and ask to the user the 3x3 values int, ask for a scalar int 
value and multiply the matrix by the scalar*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int matriz[3][3]={{0}}, i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Ingrese el valor del lugar [%d][%d] de la matriz\n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n\t");
	printf("Valores de la matriz\n\n");
	printf("\tMatriz ya Ordenada");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("\t%6d", matriz[i][j]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
