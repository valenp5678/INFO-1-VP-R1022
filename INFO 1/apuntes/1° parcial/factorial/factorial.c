#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numero = 0;
	int contador = 1;
	int resultado = 1;

	printf("Introduzca el numero al cual quiere saber sus factoriales:\n");

	scanf("%d", &numero); //leer un valor

	while(numero + 1 > contador){

		resultado *= contador;
		contador++;
	}
	

	printf("%i\n", resultado);




	return 0;
}