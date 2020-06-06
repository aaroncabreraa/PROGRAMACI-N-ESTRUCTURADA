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

int captura(struct alumno*students);
void students_muestra(struct alumno*students);


int main()
{
	captura(students);
	
	system("pause");
	
	system("cls");
	
	printf("\n\n\tListado	de	estudiantes\n\n");
							
	printf("Id\t\tName\t\t\t\t\tGender\t\tBirthdate\tSchool\tCarrer\tSemester\n");
								
	students_muestra(students);

	system("pause");
	return	0;
}

int captura(struct alumno*students)
{
	int i;
	int lcc=0,lmd=0,lac=0,lfi=0,lma=0,listi=0;
	int hombres=0,mujeres=0;
	int p=0,s=0,t=0,c=0,q=0,se=0,sep=0,o=0,n=0,d=0;
	int op,op1,op2;
	
	for(i=0;i<10;i++)
	{
	
		do
		{
						
			printf("\nIngrese la matricula del estudiante %d;\n",(i+1));
			fflush(stdin);
			scanf("%ld", &(students+i)->id);
			if((students+i)->id<0);
				printf("No se aceptan matriculas negativas, Intenta de nuevo, crack!\n");
		}while((students+i)->id<0);
						
						
		printf("Ingrese el nombre del estudiante %d:\n",(i+1));
		fflush(stdin);
		gets((students+i)->name);
		
		
		printf("Ingrese el genero del estudiante %d\n",(i+1));
		printf("F (femenino)o M(masculino)\nEn mayusculas por favor");
		gets((students+i)->gender);
		printf("Ingrese nuevamente el genero del estudiante %d\n",(i+1));
		printf("1)Masculino\n2)Femenino");
		scanf("%d",&op1);
		switch(op1)
		{
			case 1:	hombres++;
						break;
			case 2:	mujeres++;
						break;
		}
		
		do
		{
			printf("Teclee el dia de nacimiento del estudiante %d:\n",(i+1));
			scanf("%d", &(students+i)->birthdate.day);
			if((students+i)->birthdate.day<1||(students+i)->birthdate.day>31)
				printf("Ha ingresado un dato erroneo, intente de nuevo\n");
								
		}while((students+i)->birthdate.day<1||(students+i)->birthdate.day>31);
			
		do
		{
			printf("Teclee el mes de nacimiento del estudiante %d:\n",(i+1));
			scanf("%d", &(students+i)->birthdate.month);
			if((students+i)->birthdate.month<1||(students+i)->birthdate.month>12)
				printf("Ha ingresado un dato erroneo, intente de nuevo\n");
								
		}while((students+i)->birthdate.month<1||(students+i)->birthdate.month>12);
						
		do
		{
			printf("Teclee el anio de nacimiento del estudiante %d:\n",(i+1));
			scanf("%d", &(students+i)->birthdate.year);
			if((students+i)->birthdate.year<2000||(students+i)->birthdate.year>2020)
				printf("Ha ingresado un dato erroneo,solos se acepta del a%co 2000 a la actualidad\n intente de nuevo\n");
								
		}while((students+i)->birthdate.year<1);
						
		printf("Ingrese las iniciales de la escuela de donde es el estudiante %d:\n",(i+1));
		fflush(stdin);
		gets((students+i)->school);
		
		
		printf("Ingrese en minusculas, las iniciales de la carrera del estudiante %d:\n",(i+1));
		scanf("%s",&(students+i)->carrer);
		printf("Escoge el numero de la carrera del estudiante %d:\n",(i+1));
		printf("1)LCC\n2)LMAD\n3)LM\n4)LF\n5)LA\n6)LSTI\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: 
						lcc++;
						break;
						
			case 2:
						lmd++;
						break;
						
			case 3: 
						lma++;
						break;
						
			case 4: 
						lfi++;
						break;
						
			case 5: 
						lac++;
						break;
						
			case 6:
						listi++;
						break;
		}
		
		
		do
		{
			printf("Ingrese el semestre que cursa el estudiante %d:\n",(i+1));
			scanf("%d", &(students+i)->semester);
			if((students+i)->semester<1||(students+i)->semester>10)
				printf("Semestre invalido");
		}while((students+i)->semester<1||(students+i)->semester>10);
		
			printf("Ingrese nuevamente el semestre que cursa el estudiante %d:\n",(i+1));
			scanf("%d",&op2);
			switch(op2)
			{
				case 1: p++;
						break;
				case 2: s++;
						break;
				case 3: t++;
						break;
				case 4: c++;
						break;
				case 5: q++;
						break;
				case 6: se++;
						break;
				case 7: sep++;
						break;
				case 8: o++;
						break;
				case 9: n++;
						break;
				case 10: d++;
						break;
			}
			
	}
	
	puts("ESTADISTICAS");
	printf("\nCantidad de alumnos registrados: %d\n", i);
	
	printf("\nCantidad de alumnos:%d\n",hombres);
	printf("\nCantidad de alumnas:%d\n",mujeres);
	
	printf("\nAlumnos en LCC: %d\n",lcc);
	printf("Alumnos en LMAD: %d\n",lmd);
	printf("Alumnos en LA: %d\n", lac);
	printf("Alumnos en LM: %d\n",lma);
	printf("Alumnos en LF: %d\n",lfi);
	printf("Alumnos en LSTI: %d\n",listi);
	
	printf("\nAlumnos en primer semestre: %d\n",p);
	printf("Alumnos en segundo semestre: %d\n",s);
	printf("Alumnos en tercer semestre: %d\n", t);
	printf("Alumnos en cuarto semestre: %d\n",c);
	printf("Alumnos en quinto semestre: %d\n",q);
	printf("Alumnos en sexto semestre: %d\n",se);
	printf("Alumnos en septimo semestre: %d\n",sep);
	printf("Alumnos en octavo semestre: %d\n",o);
	printf("Alumnos en noveno semestre: %d\n", n);
	printf("Alumnos en decimo semestre: %d\n",d);

}
void students_muestra(struct alumno*students)
{
	int i=0;
		for	(i=0;i<10;i++){
			printf("%-8ld\t",(students+i)->id);
			printf("%-20s\t\t",(students+i)->name);
			printf("\t%-2s\t",(students+i)->gender);
			printf("\t%2d/%2d/%6d",(students+i)->birthdate.day,(students+i)->birthdate.month,(students+i)->birthdate.year);
			printf("\t%6s",(students+i)->school);
			printf("\t%5s",(students+i)->carrer);
			printf("\t%3d\n",(students+i)->semester);
		}
}
