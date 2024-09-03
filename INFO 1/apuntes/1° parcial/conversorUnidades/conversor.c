#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

//kg - g - lb
//km - m - yd - ft - mil



int main(int argc, char **argv){

	char *num = argv[1];

	int length = strlen(num);
	int aux;
	float valor = atof(argv[1]);
	int estado;

	float resultado;

	float (*operacion)(float);

	for (int i = length; i >= 0; i--)
	{
		/* code */
		//printf("%d\n", i);
		if ((num[i])  >='0' && (num[i])  <= '9')
		{
			aux = i+1;
			i = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		/* code */
		if (num[aux + i] != 0)
		{
			/* code */
			//printf("%c", num[aux + i]);
			estado += num[aux + i];

		}else{
			
			i = 3;
		}
	}

	//printf("%d\n", estado);

	
	if (estado == 'g')
	{
		if (strcmp(argv[2], "g") == 0)
			{
				printf("Gramos -> Gramos\n");
				
			}else if (strcmp(argv[2], "kg") == 0)
			{
				printf("Gramos -> KiloGramos\n");
				operacion = gToKg;
			}else if (strcmp(argv[2], "lb") == 0)
			{
				printf("Gramos -> Libras\n");
				operacion = gToLb;
			}else{
				printf("Error!\n");
				valor = 0;
				operacion = norm;
			}
		
			
	}else if(estado == 'k'+'g'){

		if (strcmp(argv[2], "g") == 0)
			{
				printf("KiloGramos -> Gramos\n");
				operacion = kgTog;
			}else if (strcmp(argv[2], "kg") == 0)
			{
				printf("KiloGramos -> KiloGramos\n");
				operacion = norm;
			}else if (strcmp(argv[2], "lb") == 0)
			{
				printf("KiloGramos -> Libras\n");
				operacion = kgToLb;
			}else{
				printf("Error!\n");
				valor = 0;
				operacion = norm;
			}

	}else if(estado == 'l'+'b'){

		if (strcmp(argv[2], "g") == 0)
			{
				printf("Libras -> Gramos\n");
				operacion = LbTog;
			}else if (strcmp(argv[2], "kg") == 0)
			{
				printf("Libras -> KiloGramos\n");
				operacion = LbToKg;
				
			}else if (strcmp(argv[2], "lb") == 0)
			{
				printf("Libras -> Libras\n");
				operacion = norm;
			}else{
				printf("Error!\n");
				valor = 0;
				operacion = norm;
			}
	}else if(estado == 'k'+'m'){
		if (strcmp(argv[2], "m") == 0)
			{
				printf("Kilometro -> Metro\n");
				operacion = kgTog;
			}else if (strcmp(argv[2], "yd") == 0)
			{
				printf("Kilometro -> Yarda\n");
				operacion = kmToYd;
				
			}else if (strcmp(argv[2], "km") == 0)
			{
				printf("Kilometro -> Kilometro\n");
				operacion = norm;
				
			}else if (strcmp(argv[2], "ft") == 0)
			{
				printf("Kilometro -> Pies\n");
				operacion = kmToFt;

				
			}else if (strcmp(argv[2], "mil") == 0)
			{
				printf("Kilometro -> Millas\n");
				operacion = kmToMil;
				
			}else{
				printf("Error!\n");
				valor = 0;
				operacion = norm;
			}
	}else if(estado == 'm'){
		valor /= 1000.0;

		if (strcmp(argv[2], "m") == 0)
			{
				printf("Metro -> Metro\n");
				operacion = norm;
			}else if (strcmp(argv[2], "yd") == 0)
			{
				printf("Metro -> Yarda\n");
				operacion = kmToYd;
				
			}else if (strcmp(argv[2], "km") == 0)
			{
				printf("Metro -> Kilometro\n");
				operacion = gToKg;
				
			}else if (strcmp(argv[2], "ft") == 0)
			{
				printf("Metro -> Pies\n");
				operacion = kmToFt;

				
			}else if (strcmp(argv[2], "mil") == 0)
			{
				printf("Metro -> Millas\n");
				operacion = kmToMil;
				
			}else{
				printf("Error!\n");
				valor = 0;
				operacion = norm;
			}
	}else if (estado == 'y'+'d')
	{

		if (strcmp(argv[2], "m") == 0)
			{
				printf("Yarda -> Metro\n");
				operacion = ydToM;
			}else if (strcmp(argv[2], "yd") == 0)
			{
				printf("Yarda -> Yarda\n");
				operacion = norm;
				
			}else if (strcmp(argv[2], "km") == 0)
			{
				printf("Yarda -> Kilometro\n");
				operacion = ydToKm;
				
			}else if (strcmp(argv[2], "ft") == 0)
			{
				printf("Yarda -> Pies\n");
				operacion = ydToFt;

				
			}else if (strcmp(argv[2], "mil") == 0)
			{
				printf("Yarda -> Millas\n");
				operacion = ydToMil;
				
			}else{
				printf("Error!\n");
				valor = 0;
				operacion = norm;
			}
		
	}

		
	

	resultado = operacion(valor);

	printf("%f\n", resultado);

	

	printf("\n");



	return 0;	
}


