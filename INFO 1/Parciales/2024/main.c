#include "funciones.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int orden = 0;
	int cantidadValida = 0;
	char** datosValidos = cargar_datos(argv, argc, &cantidadValida);

	validar_orden(argv, argc, &orden);
	ordenar_datos(datosValidos, cantidadValida, orden);

	for (int i = 1; i < cantidadValida + 1; ++i)
	{
		printA(*(datosValidos + i) , strlen(*(datosValidos + i)));	
	}
	//printf("El orden sera: %d\n", cargar_datos(argv, argc, &cantidadValida));
	
	return 0;
}