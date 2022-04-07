#include <iostream>
#include <stdio.h>
#include <conio.h>

struct alumno{
	char nombre[20];
	int edad;
	int promedio;
} alumno[3];

int main()
{
	
	//Bucle de recopilacion de datos:
	
	int i;
	for(i=1; i<4; i++){
		
	printf("Digite el nombre del alumno:\n");
	scanf("%s",&alumno[i].nombre);
	printf("Digite la edad del alumno:\n");
	scanf("%d",&alumno[i].edad);
	printf("Digite el promedio del alumno:\n");
	scanf("%d",&alumno[i].promedio);
	printf("\n\n");
	}
	
	//Determinacion del mayor promedio:
	
	if(alumno[1].promedio>alumno[2].promedio && alumno[1].promedio>alumno[3].promedio){
			printf("\nDatos del alumno de mayor promedio:\n%s \n%d \n%d \n\n " , alumno[1].nombre, alumno[1].edad, alumno[1].promedio );
	}
	else if(alumno[2].promedio>alumno[1].promedio && alumno[2].promedio>alumno[3].promedio){
			printf("\nDatos del alumno de mayor promedio:\n%s \n%d \n%d \n\n " , alumno[2].nombre, alumno[2].edad, alumno[2].promedio );
	}
	else if(alumno[3].promedio>alumno[1].promedio && alumno[3].promedio>alumno[2].promedio){
			printf("\nDatos del alumno de mayor promedio:\n%s \n%d \n%d \n\n " , alumno[3].nombre, alumno[3].edad, alumno[3].promedio );
	}
	
	getch();
	return 0;
}
