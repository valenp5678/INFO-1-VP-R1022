#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
	float resultado;
	char status = -1;

	status = *argv[2];

	switch(status){
		case '+':
			resultado = atof(argv[1]) + atof(argv[3]);
			break;

		case '-':
			resultado = atof(argv[1]) - atof(argv[3]);
			break;

		case '*':
			resultado = atof(argv[1]) * atof(argv[3]);
			break;
		case '/':
			resultado = atof(argv[1]) / atof(argv[3]);
			break;
		default:
			status = 0;
			break;


	}

	if(status != -1){
		
		
		printf("%f\n", resultado);
	}else{
		printf("Error, operador inexistente\n");
	}

	

	return 0;	
}


