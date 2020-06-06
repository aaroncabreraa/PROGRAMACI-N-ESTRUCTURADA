//Aaron Bueno Cabrera 1918753

/*Ask the student information {student id, first name, first last name, 
second name(optional), birth date, school, grade, carrer, gender} to the user
and store it in arrays, finally print the records
Using structs*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>


struct date
{
	unsigned int day, month, year;
};

struct alumno
{
	long id;
	char name[40];
	char gender[2];
	struct date birthdate;
	char school[6];
	char carrer[6];
	int semester;
	
}students[5];

int main()
{
	int i;
	for(i=0;i<5;i++)
	{
	
		do
		{
						
			printf("\nIngrese la matricula del estudiante %d;\n",(i+1));
			fflush(stdin);
			scanf("%ld", &students[i].id);
			if(students[i].id<0);
				printf("No se aceptan matriculas negativas, Intenta de nuevo, crack!\n");
		}while(students[i].id<0);
						
						
		printf("Ingrese el nombre del estudiante %d:\n",(i+1));
		fflush(stdin);
		gets(students[i].name);
		
		
		printf("Ingrese el genero del estudiante %d\n",(i+1));
		printf("F (femenino)o M(masculino)");
		gets(students[i].gender);
		
		do
		{
			printf("Teclee el dia de nacimiento del estudiante %d:\n",(i+1));
			scanf("%d", &students[i].birthdate.day);
			if(students[i].birthdate.day<1||students[i].birthdate.day>31)
				printf("Ha ingresado un dato erroneo, intente de nuevo\n");
								
		}while(students[i].birthdate.day<1||students[i].birthdate.day>31);
			
		do
		{
			printf("Teclee el mes de nacimiento del estudiante %d:\n",(i+1));
			scanf("%d", &students[i].birthdate.month);
			if(students[i].birthdate.month<1||students[i].birthdate.month>12)
				printf("Ha ingresado un dato erroneo, intente de nuevo\n");
								
		}while(students[i].birthdate.month<1||students[i].birthdate.month>12);
						
		do
		{
			printf("Teclee el anio de nacimiento del estudiante %d:\n",(i+1));
			scanf("%d", &students[i].birthdate.year);
			if(students[i].birthdate.year<2000||students[i].birthdate.year>2020)
				printf("Ha ingresado un dato erroneo,solos se acepta del a%co 2000 a la actualidad\n intente de nuevo\n");
								
		}while(students[i].birthdate.year<1);
						
		printf("Ingrese las iniciales de la escuela de donde es el estudiante %d:\n",(i+1));
		fflush(stdin);
		gets(students[i].school);
		
		
		printf("Ingrese las iniciales de la carrera del estudiante %d:\n",(i+1));
		scanf("%s",&students[i].carrer);
		
		
		do
		{
			printf("Ingrese el semestre que cursa el estudiante %d:\n",(i+1));
			scanf("%d", &students[i].semester);
			if(students[i].semester<1||students[i].semester>10)
				printf("Semestre invalido");
		}while(students[i].semester<1||students[i].semester>10);
			
	}
	
	system("cls");
	
	printf("\n\n\tListado	de	estudiantes\n\n");
							
	printf("Id\t\tName\t\t\t\t\tGender\t\tBirthdate\tSchool\tCarrer\tSemester\n");
								
	for	(i=0;i<5;i++){
			printf("%-8ld\t",students[i].id);
			printf("%-20s\t\t",students[i].name);
			printf("\t%-2s\t",students[i].gender);
			printf("\t%2d/%2d/%6d",students[i].birthdate.day,students[i].birthdate.month,students[i].birthdate.year);
			printf("\t%6s",students[i].school);
			printf("\t%5s",students[i].carrer);
			printf("\t%3d\n",students[i].semester);
		}

	system("pause");
	return	0;
}
