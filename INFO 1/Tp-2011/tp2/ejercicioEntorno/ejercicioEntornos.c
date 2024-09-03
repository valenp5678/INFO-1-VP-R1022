#include <stdio.h>
 
//Guia ejercicios 2011 || Ejercicio 2.13
int main(int argc, char const *argv[])
{
	/* code */
	int val1 = 0;
	int val2 = 0;
	int distancia = 0;
	int division = 0;
	int resto = 0;
	int d = 0;

	int intervalos[8] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};

	scanf("%d", &val1);
	scanf("%d", &val2);

	distancia = val2 - val1;
	division = distancia/4;
	resto = distancia%4;

	if(val1 <= val2 && resto == 0){
		printf("------------%d------------%d------------>\n", val1,val2);
		printf("La distancia es %d\n", distancia);
		

		if(distancia/4 == 4){
			printf("El entorno se puede dividr en 4 subintervalos:\n");
			while (distancia != 0){ 
				d++;
				//printf("%d\n", distancia);
				intervalos[d - 1] = distancia;
				distancia -= 4;
				
				
			}
			for (int i = 0; i < 5; ++i)
			{
				/* code */
				intervalos[i] += val1;
				
				//printf("%d\n", intervalos[i]);
			}

			for (int i = 0; i < 4; ++i)
			{
				printf("(%d;%d)\n", intervalos[i], intervalos[i+1]);
				//printf("%d\n", intervalos[i]);
			}
					

		}

				
	}else if(val2 <= val1 && resto == 0){
		printf("------------%d------------%d------------>\n", val2,val1);
	}else{
		printf("No es divisible\n");
	}
	return 0;
}