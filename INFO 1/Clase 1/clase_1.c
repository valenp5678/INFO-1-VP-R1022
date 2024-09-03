#include <stdio.h>

int main()
{
	/* code */
	int dato = 4;
	int resultado;
	int verificacion;
	
	resultado = dato/2;
	verificacion = resultado*2;

	if(verificacion == dato){
		printf("Es par\n");
	}else{
		printf("No es par\n");
	};
	return 0;
}