#include "funciones.h"

void swap(int*p, int*q){

	int c;

	c = *p; //C vale el contenido de la direccion de p, a la funcion le paso la direccion de una variable
	*p = *q; // hace que lo apuntado por q valga lo apuntado por p 
	*q = c; // hace que c que es lo apuntado por p valga lo apuntado por q
	
	return;
}