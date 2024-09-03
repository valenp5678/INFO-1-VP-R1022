#include <stdio.h>
#include "funciones.h"

int main(int argc, char const *argv[])
{
	//char string[50] = "hola mundo";

	char string_1[50] = "hola";
	char string_2[50] = "chau";
	char string_3[50] = "la";

	char dato = 'a';
	int aux;

	int ejercicio = -1;
	while(1){

		switch(ejercicio){

			default:
				printf("Elija el numero de ejercicio:\n");
				for (int i = 0; i < 6; ++i){
					printf("Ejercicio %d\n", i);
				}
				scanf("%d", &ejercicio);
				break;

			case 0:
				//printf("%d\n", _strlength(string));
				ejercicio = -1;
				break;
			case 1:
				_strcopy(string_1, string_2);
				printf("%s\n", string_1);		
				ejercicio = -1;
				break;
			case 2:
				_strcat(string_1, string_2);
				printf("%s\n", string_1);
				ejercicio = -1;
				break;

			case 3:
				printf("Original: %s\n", string_1);
				_strncopy(string_1, string_2, 2);
				printf("_strncopy: %s\n", string_1);
				ejercicio = -1;
				break;

			case 4:
				printf("Original: %s\n", string_1);
				_strncat(string_1, string_2, 2);
				printf("_strncat: %s\n", string_1);

				ejercicio = -1;
				break;

			case 5:
				printf("Original: %s\n", string_1);
				printf("Char: %c\n", dato);
				aux = _strchr(string_1, &dato);
				printf("El index donde esta: %c, es: %d\n", dato, aux);
				
				ejercicio = -1;
				break;

			case 6:

				ejercicio = -1;
				break;

			case 7:

				ejercicio = -1;
				break;

			case 8:

				ejercicio = -1;
				break;

			case 9:

				ejercicio = -1;
				break;

			case 10:

				ejercicio = -1;
				break;

		}
	}



		
	return 0;
}