#include <stdio.h>

int main(void)
{
	float A; 
	int B = 7;

	A = ((float)B)/2; //casteo convierte variable te un tipo a la casteable, en este caso convierte la B de int a float solo en esta linea, luego vuelve a ser int.

	//A = B/2;

	printf("%f\n", A);
	return 0;
}