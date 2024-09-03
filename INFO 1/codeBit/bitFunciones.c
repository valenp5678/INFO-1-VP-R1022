#include <stdio.h>
#include "bitFunciones.h"

char bit(unsigned int dato, char nBit){

	char salida = ERROR;

	if (nBit < MAX_BITS)
	{
		for (char i = 0; i <= nBit; i++)
		{
			salida = dato%2;
			dato = dato/2;
		}
		
	}else{
		salida = ERROR;
	}

	return salida;


}