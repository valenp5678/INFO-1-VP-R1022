#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(int argc, char** argv)
{

	if(argc < 2){

		unsigned char trama[8] = {12, 200, 1, 7, 3, 23, 5 , 7};
									//tamaño de la trama //trama
		const char tamTrama = sizeof(trama);

		void* direccion = memo_fillx(tamTrama, trama);

		printf("La distancia al origen es de: %f\n", distPuntoOrigen(2, 4));

		char string1[30] = "HOLA";
		char string2[30] = "hola";

		printf("La comparacion es: %d\n", xtr_cmp(string1, string2, 1)); //0 no case-sensitive || 1 case-sensitive


		//printf("La trama mide: %d\n", sizeof(trama));
		//utilizo sizeof ya que cree el vector de 8 bytes y el mensaje es de 8 bytes.
		printf("Si dio exito devuelve direccion, sino NULL: %p\n", direccion);

		printf("El vector original mide: %d y su contenido es:\n", tamTrama);

		for (int i = 0; i < tamTrama; i++)
		{
			printf("%d\n", *(trama + i));
		}

		printf("La direccion pedida a memo_fillx tiene un tamaño de: %ld y su contenido es:\n", sizeof(direccion));

		for (int i = 0; i < tamTrama; i++)
		{
			printf("%d\n", *((unsigned char*)direccion + i));
		}
	
	}else{


    int *repetition = (int *)malloc(sizeof(int) * (argc - 1));
  

    int uniqueCount = 0;

    if (xtr_cmp(argv[1], "-c", 1) == 0) {
        for (int i = 2; i < argc; i++) {
            strlwr(argv[i]);
        }
    }

    char **uniqueArgs = (char **)malloc(sizeof(char *) * (argc - 1));
    

    for (int i = 0; i < argc - 1; i++) {
        repetition[i] = 0;
    }

    for (int i = 1; i < argc; i++) {
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (xtr_cmp(argv[i], uniqueArgs[j], 1) == 0) {
                repetition[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            uniqueArgs[uniqueCount] = argv[i];
            repetition[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    for (int i = 0; i < uniqueCount - 1; i++) {
        printf("Repeticion de '%s': %d\n", uniqueArgs[i], repetition[i]);
    }

    free(repetition);
    free(uniqueArgs);
	return 0;
}
}

