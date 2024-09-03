#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "funciones.h"

#define INIT			0
#define SWAP    		1
#define SERIES_RESISTOR 2
#define DIFF            3
#define TEMP            4
#define PAR_IMPAR       5
#define ALGEBRA         6
#define TABLA           7
#define SUM_100         8
#define CALC_N          9
#define SUM_RANG        10
#define FACTORIAL		11
#define PRIMOS          12
			
int main(void)
{
	int estado = 0;

	int var1 = 2;
	int var2 = 4;
	//int var4 = 12;

	float var3;
	

	while(1){

		switch(estado){
			case INIT:
				printf("Escriba el numero de ejercicio:\n");
				scanf("%d", &estado);
				//printf("%d\n", estado);
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
				estado = 0;

				break;

			case DIFF:

				printf("Ingrese el primer numero:\n");
				scanf("%d", &var1);
				printf("Ingrese el segundo numero:\n");
				scanf("%d", &var2);

				var3 = var1 - var2;

				if(var3 < 0){
					printf("Diferencia negativa\n");
				}else if(0 < var3){
					printf("Diferencia positiva\n");
				}else{
					printf("No hay diferencia\n");
				}

				estado = 0;

				break;

			case TEMP:
				int temp[10];
				float promedio;
				int numMin = -1, numMax = 0;
				int cantTemp = 0;

				for (int i = 0; i < 10; i++)
				{
					/* code */
					printf("Ingrese la %d° temperatura\n", i+1);
					scanf("%d", &temp[i]);
				}

				promedio /= 10.0;

				numMin = temp[0];

				printf("La temperatura promedio es: %f\n", promedio);

				for (int i = 0; i < 10; i++)
				{
					/* code */
					if(temp[i] > numMax ){
						numMax = temp[i];
					}

					if(numMin > temp[i]){
						numMin = temp[i];
					}

					if (temp[i] <= 45 && temp[i] >= 20)
					{
						cantTemp++;
					}
				}
				

				for (int i = 0; i < 10; i++)
				{
					/* code */
					printf("%d\n", temp[i]);
				}

				printf("La temperatura maxima es: %d\n", numMax);
				printf("-----------------\n");
				printf("La temperatura minima es: %d\n", numMin);
				printf("-----------------\n");
				printf("La cantidad de veces que la temperatura paso entre los 20°C y 45°C es de: %d\n", cantTemp);
				estado = 0;
				break;

			case PAR_IMPAR:
				printf("Ingrese un valor entero positivo: \n");
				scanf("%d", &var1);
				if(var1%2 == 0){
					printf("Es un numero par\n");
				}else{
					printf("Es un numero impar\n");
				}
				estado = 0;
				break;

			case ALGEBRA:
				float norma;

				printf("Ingrese la coordenada x: \n");
				scanf("%d", &var1);

				printf("Ingrese la coordenada y:\n");
				scanf("%d", &var2);

				if (var1 > 0 && var2 > 0)
				{
					printf("Estas en el primer cuadrante\n");
				}else if(var1 < 0 && var2 > 0){
					printf("Estas en el segundo cuadrante\n");
				}else if(var1 < 0 && var2 < 0){
					printf("Estas en el tercer cuadrante\n");
				}else{
					printf("Estas en el cuarto cuadrante\n");
				}

				norma = sqrt((var1*var1) + (var2*var2));

				printf("La distancia al origen de coordenadas es de: %f\n", norma);
				estado = 0;
				break;

			// REPETITIVAS O ITERACION

			case TABLA:
				printf("Ingrese la tabla cual quiere saber: \n");
				scanf("%d", &var1);

				printf("Tabla del: %d\n", var1);

				for (int i = 0; i <= 10; ++i)
				{
					/* code */	
					printf("%d x %d = %d\n", i, var1, var1*i);

				}
				estado = 0;
				break;

			case SUM_100:
				printf("Calculo de sumatorias del 1 al 100\n");
				int numAnterior = 0;

				for (int i = 1; i <= 100; ++i)
				{
					/* code */
					numAnterior += i;


				}

				printf("La sumatoria es: %d\n", numAnterior);
				estado = 0;
				break;

			case CALC_N:

				printf("Escriba un numero n:\n");
				scanf("%d", &var1);
				int resultado;

				for (int i = 0; i <= 10; ++i)
				{
					/* code */
					resultado = 1 + i * var1;
					printf("1 + %d * %d = %d\n", i, var1, resultado);
				}

				estado = 0;
				break;

			case SUM_RANG:
		
				printf("Escriba el 1° valor del entorno:\n");
				scanf("%d", &var1);

				printf("Escriba el 2° valor del entorno\n");
				scanf("%d", &var2);


				if(var1 > var2){
					var3 = var1;
					var1 = var2;
					var2 = var3;

				}
				int resultadoAnterior;

				printf("-------%d---------%d------->\n", var1, var2);
				resultadoAnterior = var1;

				for (int i = 0; i < var2-var1; ++i)
				{
					/* code */
					
					printf("%d + %d = %d\n", resultadoAnterior, (var1 + i+1), (resultadoAnterior + (var1+i+1)));
					resultadoAnterior += var1+i+1;
					
				}

				printf("La sumatoria es: %d\n", resultadoAnterior);

				estado = 0;
				break;

			case FACTORIAL:
				printf("Escriba el numero del cual quiere saber su factorial: \n");
				scanf("%d", &var1);
				int factorial = 1;

				for (int i = 1; i < var1; ++i)
				{
					/* code */
					factorial = factorial*(i+1);
					
				}
				printf("El %d! = %d\n", var1, factorial);
				estado = 0;
				break; 

			case PRIMOS:
				printf("Que numero quiere saber si es primo?: \n");
				scanf("%d", &var1);
				int z = 0;
				for (int i = 1; i <= var1; ++i)
				{
					/* code */
					if (var1%i == 0)
					{
						/* code */
						z++;
					}
				}
				printf("Hay %d divisores\n", z);
				if(z > 2){
					printf("No es primo\n");
				}else{
					printf("Es primo\n");
				}
				//estado = 0;
				break;

				





			default:
				estado = 0;
		}

	}
	return 0;
}