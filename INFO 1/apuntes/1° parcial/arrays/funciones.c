#include "funciones.h"

float promedio(int V[], int count){
	float res = 0;
	int p;
	for (int i = 0; i < count; i++)
	{
		p+=V[i];
	}
	res = res/count;
	return res;
}

int arrayFound(int V[], int count, int dato){
	int res;
	int encuentro = -1;

	for (int i = 0; i < count; ++i)
	{
		/* code */
		if(dato == V[i]){
			encuentro = i;
			i = count;
		}
	}

	return encuentro;
}