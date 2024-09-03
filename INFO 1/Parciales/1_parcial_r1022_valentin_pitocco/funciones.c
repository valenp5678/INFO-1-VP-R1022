#include "funciones.h"
#include <math.h>
#include <stdio.h> //BORRAR ANTES DE ENTREGAR
#include <stdlib.h>


float distPuntoOrigen(int x, int y){

	x = pow(x, 2); 
	y = pow(y, 2);

    return sqrt(x + y);
}

int xtr_cmp(const char* t, const char* s, int mode){

	int lengthT = my_strlen(t);
	int lengthS = my_strlen(s);
	int valT = 0;
	int valS = 0;
	int length = 0;

/*
	printA(t, my_strlen(t));
	printf("-----\n");
	printA(s, my_strlen(s));
	printf("\n");*/

	if (lengthS < lengthT)
	{	
		length = lengthS;	
	}else{
        length = lengthT;
    }

	switch(mode){
		case 0:
			char* lowerT = (char*)malloc(sizeof(char)*my_strlen(t) + 1);
			char* lowerS = (char*)malloc(sizeof(char)*my_strlen(s) + 1);
			_strcopy(lowerT, t);
			_strcopy(lowerS, s);

			strlwr(lowerT);
			strlwr(lowerS);
/*
			printA(lowerT, my_strlen(t));
			printf("-----\n");
			printA(lowerS, my_strlen(s));
			printf("\n");*/

			for (int i = 0; i < length; ++i)
			{
				valT += *(lowerT + i);
        		valS += *(lowerS + i);
			}
			break;

			

		case 1:
/*
			printA(t, my_strlen(t));
			printf("-----\n");
			printA(s, my_strlen(s));
			printf("\n");*/


			for (int i = 0; i < length; ++i)
    		{
    	
    			valT += *(t + i);
       			valS += *(s + i);
        
    		}
    		break;

	}

	return valT - valS;

}

void _strcopy(char *destino, const char *source){


    while (*source != '\0') { 
        *destino = *source;    
        destino++;           
        source++;            
    }
    
    *destino = '\0';

    return;
	
}

void strlwr(char* string){
    for (int i = 0; i < my_strlen(string); ++i)
    {
            if (*(string + i) <= 'z' && 'a' <= *(string + i)) 
            {
                
            }else{
                *(string + i) -= ('A' - 'a');
            }
            
    }
}

void printA(const char V[], int count){
	for (int i = 0; i < count; ++i)
	{
		printf("%c", V[i]);
	}
	printf("\n");

	return;
}

int my_strlen(const char* string){
	int i = 0;
	int length = 0;
	while(i != -1){
		if(*(string + i) != 0){
			i++;
			length++;
		}else{
			i = -1;
		}
		
		//printf("%d\n", i);
	}

	return length;
}
/*
void* memo_fillx(int sz, unsigned char *data, int nn){

}*/

char* my_strstr(char* big, char* sub){
    char* direccion = NULL;
    int comp = 1;
    int counter = 0;

    for (int i = 0; i < my_strlen(big); i++)
    {
        if (*(big + i) == *sub)
        {
            direccion = big + i;
            for (int z = 0; z < my_strlen(sub); z++)
            {
                //comp = true;
                
                if (*(big + i + z) != *(sub + z))
                {
                    comp = 0;
                    counter = 0;
                    z = 99;
                }else{
                    comp = 1;
                    counter++;
                    //i = my_strlen(big) + 1;

                    //printf(" z: %d Letra: %c\n", z, *(big + i + z));
                }

                if (counter == my_strlen(sub))
                {
                    i = my_strlen(big) + 1;
                }
            }
        }
    }

    if(comp == 0){
        direccion = NULL;
    }

    return direccion;
}

void* memo_fillx(int sz, unsigned char *data){

	unsigned char* direccion = (unsigned char*)malloc(sizeof(unsigned char)*sz);

	//si no se puede pedir al sistema operativo direccion va a ser = NULL 
	//segun man malloc, sino nos devolvera una direccion con esa x cantidad de memoria solicitada
	for (int i = 0; i < sz; i++)
	{
		*(direccion + i) = *(data + i);
	}
	return direccion;
}



int burbujeo(char** datos, int cant) {
    int dev = -1;

   // datos++;

    if (datos == NULL || cant <= 0) {
        return dev;  
    }

    dev = 0;  
    for (int j = 0; j < cant - 2; j++) {
        for (int i = 0; i < cant - 2 - j; i++) {
           	if (xtr_cmp(datos[i], datos[i + 1], 1) > 0) {
               	swap(datos, i, i + 1);
           	}
       	}
   	}
 
    

    return dev;  
}

void swap(char** arr, int i, int j) {
    char* temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


