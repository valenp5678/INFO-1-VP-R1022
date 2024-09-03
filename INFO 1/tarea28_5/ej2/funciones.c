#include "funciones.h"


char discriminante(float a, float b, float c){
	char devolucion;
	float valor;

	valor = (b*b) - 4 * a * c;

	if(valor > 0){
		devolucion = SOLUCION_2; 
	}else if(valor == 0){
		devolucion = SOLUCION_1;
	}else if(0 > valor){
		devolucion = SOLUCION_0; 
	}else{
		devolucion = ERROR;
	}

	return devolucion;
}