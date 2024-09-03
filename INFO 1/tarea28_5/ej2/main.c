#include <stdio.h>
#include "funciones.h"

int main(void)
{
	
	float valA;
	float valB;
	float valC;

	char dev;

	printf("Inrese el valor A de la funcion:\n");
	scanf("%f", &valA);

	printf("Ingrese el valor B de la funcion:\n");
	scanf("%f", &valB);

	printf("Ingrese el valor C de la funcion:\n");
	scanf("%f", &valC);

	dev = discriminante(valA, valB, valC);

	if(dev == SOLUCION_2){
		printf("La funcion tiene 2 soluciones\n");
	}else if(dev == SOLUCION_1){
		printf("La funcion tiene 1 solucion\n");
	}else if(dev == SOLUCION_0){
		printf("La funcion no tiene soluciones\n");
	}else{
		printf("Error desconocido\n"); 
	}

	return 0;
}