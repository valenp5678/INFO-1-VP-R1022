#include <stdio.h>

//RECTAS  -------------v1-------------------v2----------------->
//ingresamos dos valores (v1 y v2) y luego 5 valores mas dentro de un for || luego decir
//cuales de los 5 valores estaban dentro del entorno entre v1 y v2.

int main(int argc, char const *argv[])
{
	/* code */
	int v1;
	int v2;
	int contador = 0;
	int x1, x2, x3, x4, x5;

	printf("Ingrese el valor 1 del entorno:\n");
	scanf("%d",&v1);
	printf("Ingrese el valor 2 del entorno:\n");
	scanf("%d",&v2);

	
	printf("------------%d------------%d------------>\n", v1,v2);

	printf("Escriba 5 valores para verificar si estan dentro del entorno:\n");

	scaf("%d",&x1);
	scanf("%d",&x2);
	scanf("%d",&x3);
	scanf("%d",&x4);
	scanf("%d",&x5);
	printf("Valores:\n");

		for (int i = v1; i <= v2; ++i)
		{
			/* code */
			if(i == x1){
				printf("%d\n", x1);
			}

			if(i == x2){
				printf("%d\n", x2);
			}

			if(i == x3){
				printf("%d\n", x3);
			}

			if(i == x4){
				printf("%d\n", x4);
			}

			if(i == x5){
				printf("%d\n", x5);
			}
		}

	return 0;
}