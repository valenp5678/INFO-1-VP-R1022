#include <stdio.h>

int main(int argc, char const *argv[])
{
	float val1;
	float val2;
	char op;
	int resultado;
	printf("ingrese la opercacion como: '+' '-' '*' '/'\n");
	scanf("%c", &op);

	printf("ingrese un numero:\n");
	scanf ("%f", &val1);
	printf("ingrese otro numero:\n");
	scanf ("%f", &val2); 
	
	 switch (op)
	 {
	 case '+' :
	 resultado = val1+val2;
	 printf ("%d\n", resultado);
	 break;

	 case '-':
	 resultado = val1- val2 ;
	 printf ("%d\n", resultado);
	 break;

	 case '*':
	 	resultado = val1*val2;
	 	printf("%d\n", resultado);
	 	break;

	 case '/':
	 	float(resultado) = val1/val2;
	 	printf("%f\n", resultado);
	 	break;

	 default:
	 	printf("La operacion no es una cuenta valida.\n");
	 	break;
	}


	return 0; 
}