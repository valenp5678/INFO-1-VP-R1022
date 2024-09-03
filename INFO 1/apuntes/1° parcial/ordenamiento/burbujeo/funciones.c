#include "funciones.h"
#include <stdio.h>
void printA(int V[], int count){
	for (int i = 0; i < count; ++i)
	{
		printf("%d", V[i]);
	}
	printf("\n");

	return;
}

void swap(int v[], int index1, int index2){

	int c;

	c = v[index1]; //C vale el contenido de la direccion de p, a la funcion le paso la direccion de una variable
	v[index1] = v[index2]; // hace que lo apuntado por q valga lo apuntado por p 
	v[index2] = c; // hace que c que es lo apuntado por p valga lo apuntado por q
	
	return;
}