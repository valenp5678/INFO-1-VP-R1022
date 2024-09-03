#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CANT_ALUMNOS 30

int main(int argc, char **argv)
{
	/* code */

	char* nombre[CANT_ALUMNOS];
	char* apellido[CANT_ALUMNOS];
	char* nota[CANT_ALUMNOS];

	char* aux;

	

	for (int i = 0; i < CANT_ALUMNOS; i++)
	{
		
		aux = malloc(21);
		printf("Ingrese el nombre: \n");
		scanf("%s", aux);
		nombre[i] = malloc(strlen(aux)+1);
		strcpy(nombre[i], aux);

		printf("Ingrese el apellido: \n");
		scanf("%s", aux);
		apellido[i] = malloc(strlen(aux)+1);
		strcpy(apellido[i], aux);

		free(aux);
		aux = malloc(1);

		printf("Ingrese la nota: \n");
		scanf("%s", aux);
		nota[i] = malloc(strlen(aux)+1);
		strcpy(nota[i], aux);
		free(aux);


	}

	for (int j = 0; j < CANT_ALUMNOS-1; j++)
		{
		for (int i = 0; i < CANT_ALUMNOS-1; i++)
			{
			if (strcmp(apellido[i], apellido[i+1]) > 0)
			{
				char* c;
				c = apellido[i]; //C vale el contenido de la direccion de p, a la funcion le paso la direccion de una variable
				apellido[i] = apellido[i+1]; // hace que lo apuntado por q valga lo apuntado por p 
				apellido[i+1] = c; // hace que c que es lo apuntado por p valga lo apuntado por 

				c = nombre[i];
				nombre[i] = nombre[i+1];
				nombre[i+1] = c;

				c = nota[i];
				nota[i] = nota[i+1];
				nota[i+1] = c;

			}
		}
	}	

	for (int i = 0; i < CANT_ALUMNOS; ++i)
	{
		/* code */
		printf("Nombre: %s ", nombre[i]);
		printf("Apellido: %s ", apellido[i]);
		printf("Nota: %f.2", nota[i]);
		printf("\n");
	}

	//free(aux);
	return 0;
}


