#include <stdio.h>
#include <stdlib.h>
float cuadrado(float n);
void cuadrado2(float *p);
void mostrar(int var);
void mostrar2(int *p);
void invertir(int *a, int *b);
void ordenar(int *menor,int *mayor);

int main (void){
	int var1=25;
	int var2=75;
	int var3=32;
	int var4=5;
	ordenar(&var1,&var2);
	ordenar(&var1,&var3);
	ordenar(&var1,&var4);
	ordenar(&var2,&var3);
	ordenar(&var2,&var4);
	ordenar(&var3,&var4);
	printf(" %d\n %d\n %d\n %d\n",var1, var2, var3, var4);
	return 0;
}

float cuadrado(float n){
	return(n*n);
}
void cuadrado2(float *p){
	float aux = *p * *p;
	*p = aux;
}
void mostrar(int var){
	printf("Contenido:%d \n", var);
	printf("Direccion:%p \n", &var);
}
//Outra opcion
void mostrar2(int *p){
	printf("Contenido:%d \n", *p);
	printf("Direccion:%p \n", p);
}
void invertir(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
void ordenar(int *menor,int *mayor){
	if (*mayor<*menor){
		invertir(mayor, menor);
	}
}
