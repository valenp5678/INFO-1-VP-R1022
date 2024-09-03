#include "funciones.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int validar_orden(char** argv, int argc, int* orden){

	char found = -1;

	for (int i = 1; i < argc; ++i)
	{
				
		if(strcmp(*(argv + i), "-o") == 0){
			*orden = atoi(*(argv + i + 1));
			i = argc + 1;
			found = 0;
		}
	}

	return found;
}

char** cargar_datos(char** argv, int argc, int* cant){
	char** validPlates = NULL;
	int countValidPlates = 0;
	//*argv++;

	for (int i = 0; i < argc - 1; i++)
	{		
		
		if(validar_patente(*(argv + i)) == 0){
			countValidPlates++;
		} 
	}

	validPlates = (char**)malloc((sizeof(char*)*countValidPlates)*8);

	int z = 0;

	for (int i = 0; i < argc - 1; i++)
	{		
		
		if(validar_patente(*(argv + i)) == 0){
			//countValidPlates++;
			z++;
			*(validPlates + z) = *(argv + i);

		} 
	}

	//printf("Hay: %d patentes validas\n", countValidPlates);
	

	//printf("\n");

	*cant = countValidPlates;

	return validPlates;
}

int ordenar_datos(char** datos, int cant, int orden) {
    int dev = -1;
    datos++;

    // Verifica si el puntero de datos es nulo o la cantidad es no válida
    if (datos == NULL || cant <= 0) {
        return dev;  // Error
    }

    dev = 0;  // Éxito

    if (orden <= -1) {

    	for (int j = 0; j < cant - 1; j++) {
        	for (int i = 0; i < cant - 1 - j; i++) {
            	if (strcmp(datos[i + 1], datos[i]) > 0) {
                	swap(datos, i, i + 1);
            	}
        	}
    	}
        
    }else{
    	// Ordena las cadenas en orden ascendente
    	for (int j = 0; j < cant - 1; j++) {
        	for (int i = 0; i < cant - 1 - j; i++) {
            	if (strcmp(datos[i], datos[i + 1]) > 0) {
                	swap(datos, i, i + 1);
            	}
        	}
    	}
    }

    

    // Si orden es -1, invierte el array
    

    return dev;  // Éxito
}

// Función para invertir el array de cadenas
void reverse(char** arr, int length) {
	for (int i = 0; i < length / 2; i++) {
        swap(arr, i, length - 1 - i);
    }
}


int validar_patente(char* pat){

	bool valid[4] = {false, false, false, false};
	int dev = -1;
	if(strlen(pat) == 7){
		for (int i = 0; i < 2; ++i)
		{
			if(*(pat + i)  <= 'Z' && 'A'  <= *(pat + i)){
				valid [0] = true;
				
			}else{
				valid[0] = false;
				i = 3;
			}
		
		}

		for (int d = 0; d <= 2; d++)
		{
			if(*(pat + d + 2)  <= '9' && '0'  <= *(pat + d + 2)){
				//printf("Numero de patente: %c\n", *(pat + d + 2));

				valid[1] = true;

			}else{

				valid[1] = false;
				d = 4;
			}
		}

		for (int i = 0; i < 2; i++)
		{
			if(*(pat + i + 5)  <= 'Z' && 'A'  <= *(pat + i + 5)){
				valid[2] = true;
				
			}else{
				valid[2] = false;
				i = 3;
			}
		
		}

		if(valid[0] == true && valid[1] == true && valid[2] == true){
			dev = 0;
		}else{
			dev = -1;
		}
		
	}else{
		dev = -1;
	}

	return dev;

}



void printA(char V[], int count){
	for (int i = 0; i < count; ++i)
	{
		printf("%c", V[i]);
	}
	printf("\n");

	return; 
}




void swap(char** arr, int i, int j) {
    char* temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

