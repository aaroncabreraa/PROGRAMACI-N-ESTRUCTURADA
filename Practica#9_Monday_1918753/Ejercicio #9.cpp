//Aaron Cabrera 1918753

/*Ask the student information {student id, first name, first last name, 
second name(optional), birth date, school, grade, carrer, gender} to the user
and store it in arrays, finally print the records*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char students[5][40];
	long id[5];
	char name[5];
	char gender[5];
	int day[5], month[5], year[5];
	char school[5];
	char carrer[5];
	char grade[5];
	int j, i;

	
	for(i=0;i<2;i++){
			do
			{
				printf("\nIngrese el id del estudiante:\n");
				scanf("%ld",&id[i]);
				if(id[i]<0)
					printf("Error, NO se aceptan matriculas negativas");
			}while(id[i]<0);
			
			
			printf("Ingrese el nombre del estudiante:\n");
			fflush(stdin);
			gets(students[i]);
		
		
			printf("Ingrese el genero del estudiante:M(masculino) F(femenino)\n");
			scanf("%s",&gender[i]);
					
		
			do
			{
				printf("\nIngrese el dia de nacimiento del estudiante\n");
				scanf("%d", &day[i]);
				if(day[i]<1||day[i]>31)
					printf("Error, Dia no valido");
			}while(day[i]<1||day[i]>31);
		
			do
			{	
				printf("\nIngrese el mes de nacimiento del estudiante\n");
				fflush(stdin);
				scanf("%d", &month[i]);
				if(month[i]<1||month[i]>12)
					printf("Error, Mes no valido");
			}while(month[i]<1||month[i]>12);
			
			do{
			
				printf("\nIngrese el anio de nacimiento del estudiante\n");
				fflush(stdin);
				scanf("%d", &year[i]);
				if(year[i]<2000||year[i]>2020)
					printf("Error.\nSolo se aceptan años del 2000 hasta la actualidad");
			}while(year[i]<2000||year[i]>2020);
		
			printf("\nIngrese las iniciales de la escuela del estudiante\n");
			scanf("%s",&school[i]);
			
			
			printf("\nIngrese las iniciales de la carrera del estudiante\n");
			scanf("%s",&carrer[i]);
		
			printf("\nIngrese el semestre del estudiante\n");
			scanf("%d",&grade[i]);
			
	}

	puts("\t\tListado de estudiantes\n\n");
	puts("ID\tName\tGender\t\t\tBirthdate\tSchool\tCarrer\tGrade");
	for(i=0; i<2;i++){
		printf("%-2ld\t%-40s\t%s\t%d/%d/d\t%s\t%s\t%d", id[j], name[j], gender[j],day[j],month[j],year[j],school[j],carrer[j],grade[j]);
	}
	
	puts("\n\n\n\n");
	
	system("pause");
	return 0;
}
