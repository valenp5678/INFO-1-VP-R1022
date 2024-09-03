#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int A[10] ={
		1,
		5,
		8,
		4,
		5,
		4,
		10,
		8,
		10,
		10
	};

	int D[10];

	int aux;
	float auxF;
	int ejercicio = -1;

	
	while(1){

		switch(ejercicio){

			default:
				printf("Elija el numero de ejercicio:\n");
				for (int i = 0; i < 6; ++i){
					printf("Ejercicio %d\n", i);
				}
				scanf("%d", &ejercicio);
				break;

			case 0:
				printA(A, 10);
				ejercicio = -1;
				break;
			case 1:
				aux = cantX(A, 10, 10);
				printf("%d\n", aux);
				ejercicio = -1;
				break;
			case 2:
				aux = firstX(A, 10, 10);
				if(aux != -1){
					printf("%d\n", aux);
				}else{
					printf("No existe ese valor en el vector\n");
				}			
				ejercicio = -1;
				break;

			case 3:
				auxF = avg(A, 10);
				printf("El promedio es:%f\n", auxF);
				ejercicio = -1;
				break;

			case 4:
				copy(A, D, 10);
				printA(D, 10);
				ejercicio = -1;
				break;

			case 5:
				invert(A, 10);
				//printA(A, 10);
				ejercicio = -1;
				break;

		}
	}

	//EJ1

	//printA(A, 10);

	//EJ2

	
	return 0;
}