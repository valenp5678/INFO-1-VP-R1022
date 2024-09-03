#include <stdio.h>
#include "rectaFuncion.h"

 int main(int argc, char const *argv[])
 {
 	
 	int a;
 	int x;
 	int b;
 	int y;

 	printf("Ingrese el valor a:\n");
 	scanf("%d", &a);

 	printf("Ingrese el valor x:\n");
 	scanf("%d", &x);

 	printf("Ingrese el valor b:\n");
 	scanf("%d", &b);

 	y = recta(a, x, b);
 	printf("El valor de Y es: %d\n", y);
 	
 	return 0;
 }