#include <stdbool.h>

void byteToByteLong(long* var);

bool emptyString(char* string);

void string_reverse(char* string);

void swap(char* v, int index1, int index2);

int my_strlen(char* string);

void my_strcat(char* t, char* s);

void printA(char V[], int count);

int my_strcmp(char* t, char* s);

int _strlength(char *s);

void _strcopy(char *destino, char *source);

void strlwr(char* string);

void strupr(char* string);

void replace(char* s, char nuevo, char viejo);

void left_trim(char* string);

void right_trim(char* string);

char* my_strstr(char* big, char* sub);

bool es_palindromo(char* string);

void int_dec(float* val, int* integer, long* decimal);

double prom_double(double* cadena, int tam);

//punteros a funcion

float secsToMins(int secs);

float secsToHours(int secs);

float secsToSecs(int secs);

//fin puntero a funcion

bool validateDate(int* day, int* month, int* year);

float distPuntoPunto(int* x1, int* y1, int* x2, int* y2);

bool validate_string(char* string, bool (*validation)(char*));

bool IPvalidate(char* string);
bool emailValidate(char* string);
bool cardValidate(char* string);

int _strchr(char *str, char chr);


