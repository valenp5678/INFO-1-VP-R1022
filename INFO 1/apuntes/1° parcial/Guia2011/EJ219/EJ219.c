#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=0 ;
	int b=0;
	int c=0;
scanf ("%d", &a);
scanf ("%d",&b);
scanf ("%d", &c);
	if (a==0 || a<0 )
	{
		printf("\el valor no se puede ingresar \n");
			}
			else if (b==0 || b<0)
			{
				printf("el valor no es ingreaable\n");
			}
			else if (c==0 || c<0)
			{
				printf("el valor es incorrecto\n");
			}
	else if ( a==c && a==b || b==a && b==c || c==a & c==b )
	{
	printf("es equilatero\n");
	}
	else if  (a==c && a!=b && c!=b && c==a || a==b && a!=c && b!=c && b==a || b==c && b!=a && c!=a && c==b)
	{
		printf("es isosceles\n");
	}
	 else if (a!=b && b!=c && c!=a)
	{
		printf("es escaleno\n");
	}
	if (c<a+b || a<b+c || b<c+a)
	{
		printf("conforma un triangulo\n");
	}


	return 0;
}