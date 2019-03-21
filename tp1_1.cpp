#include <stdio.h>
#include <stdlib.h>

int main (void){
	int *p, var;
	var = 2;
	p = &var;
	printf("Contenido puntero: %d\n", *p);
	printf("Direccion de memoria almacenada: %p\n", p);//El punto 2 y 3 son iguales porque el puntero almacena la direccion de memoria de la variable, lo cual es diferente a la direccion de memoria donde se almacena el puntero
	printf("Direccion de memoria de la variable: %p\n", &var);
	printf("Direccion de memoria del puntero: %p\n", &p);
	printf("Tamaño de memoria: %d\n",sizeof(var));
	return 0;

}
