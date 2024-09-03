#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// arge = cant parametros que le ingrese por la linea de comandos
// **argv = vector puntero a puntero donde se almacena los strings ingresados por la linea de comandos
// **argev = variables del sistema, en l ultimo se pone null, asi sabemos cuantas variables de conifuracion tiene nuestro sistema

int main(int a, char **b, char **c){
	int i;
	
	for (i = 0; i < a; ++i)
	{
		printf("%s\n", b[i]);
	}
	i = 0;

	while(c[i]){
		printf("%s\n", c[i]);
		i++;
	}
	
	return 1;
}