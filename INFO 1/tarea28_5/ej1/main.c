#include <stdio.h>
#include "funciones.h"

 int main(void)
 {
 	float lado1, lado2, lado3;

 	char devolucion;

 	printf("Introduzca el lado 1:\n");
 	scanf("%f", &lado1);

 	printf("Introduzca el lado 2:\n");
 	scanf("%f", &lado2);

 	printf("Introduzca el lado 3:\n");
 	scanf("%f", &lado3);
 	devolucion = triangulo(lado1, lado2, lado3);

 	if(devolucion == 0){
 		printf("El triangulo es escaleno\n"); 
 	}else if(devolucion == 1){
 		printf("El triangulo es equilatero\n");
 	}else if(devolucion == 2){
 		printf("El triangulo es isosceles\n");
 	}else if(devolucion == -1){
 		printf("El triangulo no existe\n");
 	}
 	
 	return 0;
 }