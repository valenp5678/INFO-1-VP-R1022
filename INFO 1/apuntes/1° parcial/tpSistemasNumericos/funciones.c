#include "funciones.h"

int atoi_bin(char *str){
	int length = _strlength(str);
	int charToInt;

	for (int i = 0; i < length; i++)
	{
		char dato = str[i];
/*
		if(dato != 0 || dato != 1){
			charToInt = -1;
		}*/
		if (dato < '0' || dato > '1')
		{
			/* code */
			charToInt = -1;
			break;
		}
		if (charToInt != -1)
		{
			charToInt *= 2;
			charToInt += dato - '0';
		}
		
	}


	return charToInt;

}

int _atoi(char *s){
	int length = _strlength(s);
	int charToInt;

	for (int i = 0; i < length; i++)
	{
		char dato = s[i];
/*
		if(dato != 0 || dato != 1){
			charToInt = -1;
		}*/
		if (dato < '0' || dato > '9')
		{
			/* code */
			charToInt = -1;
			break;
		}
		if (charToInt != -1)
		{
			charToInt *= 10;
			charToInt += dato - '0';
		}
		
	}


	return charToInt;
	}

int atoi_oct(char *str){
	int length = _strlength(str);
	int charToInt;

	for (int i = 0; i < length; i++)
	{
		char dato = str[i];
/*
		if(dato != 0 || dato != 1){
			charToInt = -1;
		}*/
		if (dato < '0' || dato > '8')
		{
			/* code */
			charToInt = -1;
			break;
		}
		if (charToInt != -1)
		{
			charToInt *= 8;
			charToInt += dato - '0';
		}
		
	}


	return charToInt;

}



int _strlength(char *s){
	int count = 0;
	while(*s){
		count++;
		s++;
	}
	return count;
}