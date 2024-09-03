#include "funciones.h"

int _strlength(char *s){
	int count = 0;
	while(*s){
		count++;
		s++;
	}
	return count;
}

void _strcopy(char *destino, char *source){
	int length = _strlength(destino);
	for (int i = 0; i < (length + 1); ++i)
	{
		/* code */
		*(destino+i) = *(source+i);

	}
	
	return;
}

void _strcat(char *destino, char *source){
	int length = _strlength(destino);

	for (int i = 0; i < length; i++)
	{
		/* code */
		destino[length+i] = source[i];
	}
	return;
}

void _strncopy(char *destino, char *source, int n){

	int length = _strlength(destino);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		*(destino+i) = *(source+i);

	}

	for (int i = n; i < length; ++i)
	{
		/* code */
		*(destino+i) = 0;

	}
	
	 

	return;
}

void _strncat(char *destino , char *source, int n){
	int length = _strlength(destino);

	for (int i = 0; i < length; i++)
	{
		/* code */
		
		destino[i+n] = source[i];
		
	}
	return;

}

int _strchr(char *str, char *chr){ //devuelve el index donde esta el char

	int length = _strlength(str);
	int dato = -1;

	for (int i = 0; i < length; ++i)
	{
		/* code */
		if(str[i] == *chr){
			dato = i;
			i = length + 1;
		}
	}

	return dato;
}

char* _strstr(char *str1, char *str2){
	int length = _strlength(str1);

	

}