#include <stdio.h>
#include "funciones.h"

#define INIT			0
#define SWAP    		1
#define SERIES_RESISTOR 2

			
int main(void)
{
	int estado = 0;

	int var1 = 2;
	int var2 = 4;

	float var3;
	

	while(1){

		switch(estado){
			case INIT:
				printf("Escriba el numero de ejercicio:\n");
				scanf("%d", &estado);
				break;

			case SWAP:
				printf("Funcion swap:\n");

				printf("Variable 1: %d\n", var1);
				printf("Variable 2: %d\n", var2);

				swap(&var1, &var2);
				printf("-------------------\n");

				printf("Variable 1: %d\n", var1);
				printf("Variable 2: %d\n", var2);

				estado = 0;
				break;

			case SERIES_RESISTOR:

				float resistencia = 0;

				for (int i = 0; i < 3; i++)
				{
					printf("Escriba el valor de la %d° resistencia:\n", i+1);
					scanf("%f", &var3);
					resistencia += var3;
				}
				printf("La suma es: %f\n", resistencia);

				resistencia /= 3.0;

				printf("El promedio es: %f\n", resistencia);

				break;


			default:
				estado = 0;
		}

	}
	return 0;
}