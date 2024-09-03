#include <stdio.h>

int main()
{
	int A = 2;
	int R = 0;

	R = A%4; // % operador modulo, nos devuelve el resto de una division

	if(R != 1){ // != operador desigual
	 printf("R es distinto de 1: %i\n", R); // %i , R imprime una variable a traves de printf
	}
	
	R = 1;
	printf("R = %i\n", R);

	if(R == 1){
		printf("R es verdadero: %i\n", R); 
	}

	R = !R; // !R niega el valor, true pasa a false, false pasa a true
	printf("negamos R, R =  %i\n", R);

	if(R == 0){
		printf("R es falso: %i\n", R); 
	}

	R = 0;
	printf("R = %i\n", R);

	if(R == 0){
		printf("R es falso: %i\n", R); 
	}

	R = !R; // !R niega el valor, true pasa a false, false pasa a true
	printf("negamos R, R =  %i\n", R);

	if(R == 1){
		printf("R es verdadero: %i\n", R); 
	}
	

	return 0;
}