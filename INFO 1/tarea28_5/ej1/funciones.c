#include "funciones.h"

char triangulo(float lado1, float lado2, float lado3){
	char dev;

	if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		dev = 0;
	}else if(lado1 != lado2 && lado1 == lado3){
		dev = 2;
	}else if(lado1 == lado2 && lado1 != lado3){
		dev = 2;
	}else if(lado2 == lado3 && lado2 != lado1){
		dev = 2;	
	}else if(lado1 == lado2 && lado2 == lado3){
		dev = 1;
	}
	return dev;
}