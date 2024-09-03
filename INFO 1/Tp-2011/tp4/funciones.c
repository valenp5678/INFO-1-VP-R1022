#include "funciones.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



void byteToByteLong(long* var){
	unsigned char* bytes = (unsigned char*)&var;

	for (int i = sizeof(var)-1; i >= 0; i++)
	{
		/* code */
	}
	printf("%02X\n", bytes[sizeof(bytes)-2]);
}

bool emptyString(char* string){
	bool empty = false;
	printf("%d", string[0]);
	if(string[0] == '\0'){
		empty = true;
	}

	return empty;

}

void string_reverse(char* string){
	int length = strlen(string);
	for (int i = 0; i < length; ++i)
	{
		printf("%c", *(string + i));
	}
	printf("\n");
	
	for (int i = 0; i < length/2; i++)
	{
		swap(string, 0 + i, length-1-i);
	}
	
	

	//swap(&string, 0, 1);
	//printf("%c\n", string[length-1]);
	for (int i = 0; i < length; ++i)
	{
		printf("%c", *(string + i));
	}
	printf("\n");

}

void swap(char* v, int index1, int index2) {
    if (index1 < 0 || index2 < 0 || index1 == index2) {
        // No hacer nada si los índices son negativos o iguales
        return;
    }

    char temp;
    temp = v[index1];
    v[index1] = v[index2];
    v[index2] = temp;
}

int my_strlen(char* string){
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

void my_strcat(char* t, char* s){
 	//secuencia s a continuacion de la secuencia t
 	int length = my_strlen(t);

	for (int i = 0; i <  my_strlen(s); i++)
	{
		*(t + i  + length) = *(s + i);
	}

	*(t + my_strlen(t) + 1) = 0;
	//t -= my_strlen(t) 
	
	return;

}

int my_strcmp(char* t, char* s){
	int diff = 0;
	int lengthT = my_strlen(t);
	int lengthS = my_strlen(s);
	int valT = 0;
	int valS = 0;
	int length = 0;
	//char* faltante;

	printA(t, my_strlen(t));
	printf("-----\n");
	printA(s, my_strlen(s));
	printf("\n");

	if (lengthS < lengthT)
	{	
		length = lengthT;
		diff = lengthT - lengthS;
        valS += ' '*(diff - 1);
	
	}else{
        length = lengthS;
        diff = lengthS - lengthT;
        valT += ' '* (diff - 1);
    }




	printf("La diferencia es: %d\n", diff);

	for (int i = 0; i < length; ++i)
    {
        valT += *(t + i);
        valS += *(s + i);
    }
	


	return valT - valS;

}

void printA(char V[], int count){
	for (int i = 0; i < count; ++i)
	{
		printf("%c", V[i]);
	}
	printf("\n");

	return;
}

int _strlength(char *s){
	int count = 0;
	while(*s){
		count++;
		s++;
	}
	return count;
}

void _strcopy(char *destino, char *source){


    while (*source != '\0') { 
        *destino = *source;    
        destino++;           
        source++;            
    }
    
    *destino = '\0';

    return;
	
}

void strupr(char* string){   

    for (int i = 0; i < my_strlen(string); ++i)
    {
            if (*(string + i) <= 'Z' && 'A' <= *(string + i) && *(string + i)) 
            {
            }else{
                *(string + i) += ('A' - 'a');
            }
            
    }
    
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

void replace(char* s, char nuevo, char viejo){

    for (int i = 0; i < my_strlen(s); i++)
    {
        if (*(s + i) == viejo)
        {
            *(s + i) = nuevo;
        } 
    }
}

void left_trim(char* string){
    int firstIndex = 0;
    int lastIndex = 0;

    for (int i = 0; i < my_strlen(string); i++)
    {
        if(*(string + i) != ' '){
            firstIndex = i;
            i = my_strlen(string) + 1;
        }
    }
    printf("%d\n", firstIndex);

    for (int i = 0; i < my_strlen(string) - firstIndex; i++)
    {
        *(string + i) = *(string + i + firstIndex);
        lastIndex = i;
    }
    for (int i = lastIndex + 1; i < my_strlen(string); i++){
        
        *(string + i) = 0;    
    }
    
}

void right_trim(char* string){

    int firstIndex = 0;
    int lastIndex = 0;

    for (int i = 0; i < my_strlen(string); i++)
    {
        if(*(string + i) == ' '){
            firstIndex = i;
            i = my_strlen(string) + 1;
        }
    }
    printf("%d\n", firstIndex);

    lastIndex = my_strlen(string);

    for (int i = firstIndex; i < lastIndex; i++)
    {
        *(string + i) = 0;
    }

    
}

char* my_strstr(char* big, char* sub){
    char* direccion = NULL;
    bool comp = true;
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
                    comp = false;
                    counter = 0;
                    z = 99;
                }else{
                    comp = true;
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

    if(comp == false){
        direccion = NULL;
    }

    return direccion;
}

bool es_palindromo(char* string){

    char* reverse = malloc(sizeof(char)*my_strlen(string));
    _strcopy(reverse, string);
    string_reverse(reverse);
    bool comp = false;

    for (int i = 0; i < my_strlen(string); i++)
    {
        if(*(string + i) == *(reverse + i)){
            comp = true;
            printf("Este: %c es igual a este: %c\n", *(string + i), *(reverse + i));
        }else{
            comp = false;
            i = my_strlen(string) + 1;
            printf("Salir\n");
        }
    }

    return comp;
}

void int_dec(float* val, int* integer, long* decimal){

    *integer = (int)*val;
    float dec;
    int k = 10;
    for (int i = 1; i < sizeof(float); i++)
    {
        k *= 10;
    }
    dec = ((float)*val - (float)*integer);
    long decdec = dec*1000000.0;

    //*decimal = dec;
    //printf("%f\n", *decimal);
    //printf("%ld\n", decdec);
    *decimal = decdec;

    return;
}

double prom_double(double* cadena, int tam){
    double prom = 0;

    for (int i = 0; i < tam; ++i)
    {
        prom += *(cadena + i);
    }

    prom /= tam;

    return prom;
}

float secsToMins(int secs){

    return (float)secs / 60.0;
}

float secsToHours(int secs){
    return (float)secs / 3600.0;
}

float secsToSecs(int secs){
    return (float)secs;
}

bool validateDate(int* day, int* month, int* year){
    bool validation[3] = {false, false, false};

    const char month31[7] = {1, 3, 5, 7, 8, 10, 12};

    bool comp = false;

    if(*year >= 1900 && *year <= 2100){
        validation[0] = true;
    }else{
        validation[0] = false;
    }

    if(*month == 2){
        if(*year%4 == 0){
            if (*year%100 != 0 || *year%400 == 0)
            {
                validation[2] = true;
            }
        }else{
            validation[2] = false;
        }
    }

    if(*month >= 1 || *month <= 12){
        validation[1] = true;
    }else{
        validation[1] = false;
    }

   if(*month != 2){
    if(*day >= 1 || *day <= 31){
        if(*day == 31){
            for (int i = 0; i < 7; i++)
            {
                if(*month == month31[i]){
                    comp = true;
                    validation[2] = true;
                    i = 8;
                }else{
                    validation[2] = false;
                }
            }
        }else if(*day == 30){
            for (int i = 0; i < 7; i++)
            {
                if(*month != month31[i]){
                    comp = true;
                    validation[2] = true;
                    i = 8;
                }else{
                    validation[2] = false;
                }
            }
        }else{
            validation[2] = true;
        }
    }else{
        validation[2] = false;
    }
   }

    

    if(validation[0] == true && validation[1] == true && validation[2] == true){
        comp = true;
    }else{
        comp = false;
    }

    printf("Dato1: %d\n", validation[0]);
    printf("Dato2: %d\n", validation[1]);
    printf("Dato3: %d\n", validation[2]);


    return comp;


}

float distPuntoPunto(int* x1, int* y1, int* x2, int* y2){
    return sqrt((*x2 - *x1) + (*y2 - *y1));
}

bool IPvalidate(char* string) {
    char countDots = 0;
    bool comp = true;
    char valString[4]; // Buffer para almacenar cada segmento de la IP
    int val;
    int i = 0;

    // Contar el número de puntos en la cadena
    for (int k = 0; k < strlen(string); k++) {
        if (string[k] == '.') {
            countDots++;
        }
    }

    // Verificar cada segmento de la IP
    for (int d = 0; d < 4; ++d) {
        // Buscar el próximo punto o el final de la cadena
        while (string[i] != '.' && string[i] != '\0') {
            i++;
        }

        // Si el segmento tiene más de 3 dígitos, es inválido
        if (i > 3) {
            comp = false;
            break;
        }

        // Copiar el segmento actual a valString
        strncpy(valString, string, i);
        valString[i] = '\0'; // Terminar la cadena

        // Convertir el segmento a un valor entero
        val = atoi(valString);

        // Verificar si el valor está en el rango 0-255
        if (val < 0 || val > 255 || (val == 0 && valString[0] != '0')) {
            comp = false;
            break;
        }

        // Avanzar al siguiente segmento
        if (string[i] == '.') {
            string += i + 1; // Mover el puntero al siguiente segmento
            i = 0; // Reiniciar el índice para el próximo segmento
        } else {
            break; // Terminar el bucle si no hay más puntos
        }
    }

    // Verificar que haya exactamente 4 partes
    if (countDots != 3 || !comp) {
        comp = false;
    }

    return comp;
}

bool emailValidate(char* string){

    bool comp[4] = {true, true, true, false};



    if (_strchr(string, '@') == -1 || _strchr(string, '@') == 0)
    {
        comp[0] = false;
    }else{
        comp[0] = true;
    }

    string += _strchr(string, '@') ;

    if (_strchr(string, '.') == -1 || _strchr(string, '.') == 0 ){
        comp[1] = false;
    }else{
        //printf("El punto esta en: %d\n", _strchr(string, '.'));
        comp[1] = true;
    }
    string += _strchr(string, '.');

    if(my_strstr(string, ".com") == NULL){
        comp[2] = false;
    }else{
        comp[2] = true;
    }

    if (comp[0] == true && comp[1] == true && comp[2] == true)
    {
        comp[3] = true;
    }else{
        comp[3] = false;
    }

    //printA(string, my_strlen(string));

    return comp[3];
}

bool cardValidate(char* string){

    char countDots = 0;
    bool comp = true;
    char valString[4]; // Buffer para almacenar cada segmento de la IP
    int val;
    int i = 0;

    // Contar el número de puntos en la cadena
    for (int k = 0; k < strlen(string); k++) {
        if (string[k] == ' ') {
            countDots++;
        }
    }

    // Verificar cada segmento de la IP
    for (int d = 0; d < 4; ++d) {
        // Buscar el próximo punto o el final de la cadena
        while (string[i] != ' ' && string[i] != '\0') {
            i++;
        }

        // Si el segmento tiene más de 3 dígitos, es inválido
        if (i > 4) {
            comp = false;
            break;
        }

        // Copiar el segmento actual a valString
        strncpy(valString, string, i);
        valString[i] = '\0'; // Terminar la cadena

        // Convertir el segmento a un valor entero
        val = atoi(valString);

        // Verificar si el valor está en el rango 0-255
        if (val < 0 || val > 9999 || (val == 0 && valString[0] != '0')) {
            comp = false;
            break;
        }

        // Avanzar al siguiente segmento
        if (string[i] == ' ') {
            string += i + 1; // Mover el puntero al siguiente segmento
            i = 0; // Reiniciar el índice para el próximo segmento
        } else {
            break; // Terminar el bucle si no hay más puntos
        }
    }

    // Verificar que haya exactamente 4 partes
    if (countDots != 3 || !comp) {
        comp = false;
    }

    return comp;

}

                

bool validate_string(char* string, bool (*validation)(char*)){
    //bool(*validacion)(char*);
    //validacion = validation;

    return validation(string);
}



int _strchr(char *str, char chr){ //devuelve el index donde esta el char

    int length = my_strlen(str);
    int dato = -1;

    for (int i = 0; i < length; ++i)
    {
        /* code */
        if(str[i] == chr){
            dato = i;
            i = length + 1;
        }
    }

    return dato;
}










