#include "funciones.h"
#include <stdio.h>


void swap(int*p, int*q){

	int c;

	c = *p; //C vale el contenido de la direccion de p, a la funcion le paso la direccion de una variable
	*p = *q; // hace que lo apuntado por q valga lo apuntado por p 
	*q = c; // hace que c que es lo apuntado por p valga lo apuntado por q
	
	return;
}

void printA(int V[], int count){
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", V[i]);
	}

	return;
}

int cantX(int v[], int count, int x){
	int val = 0;
	for (int i = 0; i < count; ++i)
	{
		if(x == v[i]){
			val++;
		}
	}

	return val;
	
}

int firstX(int v[], int count, int x){

	int val = -1;


	for (int i = 0; i < count; ++i)
	{
		if(x == v[i]){
			val = i;
			i = count;
		}
	}
	return val;

}

float avg(int v[], int count){

	int val = 0;
	for (int i = 0; i < count; ++i)
	{
		/* code */
		val += v[i];
	}
	
	return (float)val/count;
}

void copy(int *v, int *c, int count){

	for (int i = 0; i < count; ++i)
	{
		/* code */
		*(c+i) = *(v+i);

	}
		
	return;

}

void invert(int v[], int count){
	
	int c = 0;

	for (int i = 0; i < count/2; i++)
	{
		/* code */
		swap(&v[i], &v[count - 1 - i]);



	}

	for (int i = 0; i < count; i++)
	{
		/* code */
		printf("%d\n", v[i]);
		

	}
	return;


}