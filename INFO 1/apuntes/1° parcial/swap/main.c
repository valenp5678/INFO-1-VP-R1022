#include <stdio.h>
#include "funciones.h"

int main(void)
{
	int a, b, c;
	a = 5;
	b = 7;

	printf("Valor a: %d\n", a);
	printf("Valor b: %d\n", b);

	printf("-----Swap-----\n");

	swap(&a, &b);

	printf("Valor a: %d\n", a);
	printf("Valor b: %d\n", b);
	return 0;
}