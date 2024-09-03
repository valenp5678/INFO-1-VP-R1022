#include <stdio.h>
#include "funciones.h"

int main(void)
{
	/* code */
	int V[10];
	int count;

	printf("Ingrese la cantidad de argumentos que tiene su vector:\n");
	scanf("%d", &count);	

	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &V[i]);
	}

	for (int i = 0; i < count; ++i)
	{
		/* code */
		printf("%d\n", V[i]);
	}

	printf("El dato se encontro en: V[%d]\n", arrayFound);
	return 0;
}