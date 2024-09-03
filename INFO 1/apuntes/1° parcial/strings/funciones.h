int _strlength(char *s); //devuelve el largo del string 																									//////listo
void _strcopy(char *destino, char *source); //copia un string a otro																						//////listo
void _strcat(char *destino , char *source); //concatena 2 strings																							//////listo
void _strncopy(char *destino , char *source, int n); //copia desde el inicio hasta el index n del primer string hasta el index n del segundo				//////listo
void _strncat(char *destino , char *source, int n); //busca un char en el strings  																			//////listo
int _strchr(char *str, char *chr); //devuelve el index donde esta el char																					//////listo
char* _strstr(char *str1, char *str2); //devuelve la direccion del segundo string 																			
void _toUpper(char *source); //convierte a mayuscula
void _toLower(char *source); //convierte a minuscula
void _strClean(char *source); //borra el string
int _atoi(char *source); //convierte de string a int