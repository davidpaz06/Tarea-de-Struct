#include <iostream>
#include <stdio.h>
#include <conio.h>

struct corredor{
	char nombre[20];
	int edad;
	char sexo[15];
	char club[20];
	char categoria [20];
	
} corredor;

int main()
{

printf("Digite el nombre del corredor:\n");
scanf("%s" , corredor.nombre);
printf("Digite la edad del corredor:\n");
scanf("%d" , &corredor.edad);
printf("Digite el sexo del corredor:\n");
scanf("%s" , corredor.sexo);

printf("\n---Datos:\n");
printf("\nNombre: %s" , corredor.nombre);
printf("\nEdad: %d" , corredor.edad);
printf("\nSexo: %s" , corredor.sexo);
if(corredor.edad<19){
	printf("\nCategoria: Juvenil");
}
else if(corredor.edad<41){
	printf("\nCategoria: Senior");	
}
else if(corredor.edad>40){
	printf("\nCategoria: Veterano");	
}

getch();
return 0;
}



