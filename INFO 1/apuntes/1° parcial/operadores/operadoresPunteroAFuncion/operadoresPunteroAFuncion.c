#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(int argc, char **argv){
	float resultado;
	char status = -1;

	float (*oper)(float,float);

	status = *argv[2];

	switch(status){
		case '+':
			oper = suma;
			break;

		case '-':
			oper = resta;
			break;

		case '*':
			oper = multiplicacion;
			break;
		case '/':
			oper = division;
			break;
		default:
			status = 0;
			break;


	}

	resultado = oper(atof(argv[1]), atof(argv[3]));

	if(status != -1){
		
		
		printf("%f\n", resultado);
	}else{
		printf("Error, operador inexistente\n");
	}

	

	return 0;	
}


