#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N1=0;
	int N2=0;
	printf ( "ingrese un numero\n");
	scanf ( "%d", &N2);
	printf ( "ingrese un numero\n");
	scanf("%d", &N1);
	if ( N1 - N2 < 0){
		printf("es negativa\n");
	}
	else {printf("es positiva\n");
	

	}
	return 0;
}