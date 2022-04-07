#include <stdio.h>
#include <conio.h>
#include <iostream>

struct direccion{
	char direccion[60];
	char ciudad [20];
	char provincia [20];
};

int n, pmayor=0, pmenor=0;
float max=0, min=100000000000;

struct empleado{
	
	char nombre[20];
	double salario;
	struct direccion ubicacion;
} empleados[10000];

/*para "anidar" estructuras (meter una estructura dentro de otra), se identifica
 la varibable struct con su nombre dentro del conjunto y luego el nombre de la 
 estructura original (ejemplo en la linea 17)*/

int main()
{
	printf("Determine el numero de empleados: \n");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		printf("\n");
		printf("Digite nombre del empleado %d: \n" , i);
		scanf("%s" , empleados[i].nombre);
		printf("Digite salario del empleado %d: \n" , i);
		scanf("%lf" , &empleados[i].salario);
		printf("Digite provincia del empleado %d: \n" , i);
		scanf("%s" , &empleados[i].ubicacion.provincia);
		printf("Digite ciudad del empleado %d: \n" , i);
		scanf("%s" , &empleados[i].ubicacion.ciudad);
		printf("Digite direccion de residencia del empleado %d: \n" , i);
		scanf("%s" , &empleados[i].ubicacion.direccion);
		printf("\n");
		
		//Seleccionador de elementos de mayor y menor valor y position saver
		if(empleados[i].salario>max){
			max=empleados[i].salario;
			pmayor=i;
		}
		if(empleados[i].salario<min){
			min=empleados[i].salario;
			pmenor=i;
		}
	}
	 //Impresion de datos
	printf("--------------------------------------------\n");
	printf("Datos del empleado con mayor salario:\n");
	printf("Nombre: %s\n" , empleados[pmayor].nombre);
	printf("Salario: %2.lf\n" , empleados[pmayor].salario);
	printf("Provincia: %s\n" , empleados[pmayor].ubicacion.provincia);
	printf("Ciudad: %s\n" , empleados[pmayor].ubicacion.ciudad);
	printf("Direccion: %s\n" , empleados[pmayor].ubicacion.direccion);
	printf("Salario: %2.lf \n" , max);
	printf("--------------------------------------------");
	
	printf("\n");	
	printf("\n");
	printf("\n");
		
	printf("--------------------------------------------\n");
	printf("Datos del empleado con menor salario:\n");
	printf("Nombre: %s \n" , empleados[pmenor].nombre);
	printf("Salario: %2.lf\n" , empleados[pmenor].salario);
	printf("Provincia: %s\n" , empleados[pmenor].ubicacion.provincia);
	printf("Ciudad: %s\n" , empleados[pmenor].ubicacion.ciudad);
	printf("Direccion: %s\n" , empleados[pmenor].ubicacion.direccion);
	printf("%2.lf \n" , min);
	printf("--------------------------------------------");
	
	getch();
	return 0;
}
