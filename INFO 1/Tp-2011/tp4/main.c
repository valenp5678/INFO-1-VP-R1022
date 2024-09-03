#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

#define INIT            0
#define BYTE            1
#define EMPTY           2
#define REVERSE         3
#define LENGTH          4
#define CAT             5
#define CMP             6
#define LOWER           7
#define UPPER           8
#define REPLACE         9
#define LEFT_TRIM       10
#define RIGHT_TRIM      11
#define STR_STR         12
#define PALINDROMO      13
#define INT_DEC         14
#define PROM_DOUBLE     15
#define SECS            16
#define VALIDATE_DATE   17
#define PUNTO_PUNTO     18
#define VALIDATE_STRING 19


int main(int argc, char const *argv[])
{
    int estado = INIT;
    long byte = 0x1234567890ABCDEF;

    while (1) {
        switch (estado) {
            case INIT:
                printf("Escriba el numero de ejercicio:\n");

                int input;
                int result = scanf("%d", &input);

                if (result != 1) {
                    printf("Entrada inválida. Por favor ingrese un número.\n");
                    while (getchar() != '\n'); // Limpiar el búfer
                    estado = INIT;
                    break;
                }

                estado = input; 
                break;

            case BYTE:
                byteToByteLong(&byte);
                estado = INIT; 
                break;

            case EMPTY:
                int numValores;

                printf("Ingrese la cantidad de valores (caracteres) que desea guardar: ");
                if (scanf("%d", &numValores) != 1 || numValores <= 0) {
                    printf("Entrada inválida. Debe ingresar un número entero positivo.\n");
                return 1;
                }

                while (getchar() != '\n');

                char* vector = (char*)malloc(numValores * sizeof(char)+1);
                if (vector == NULL) {
                    printf("Error al asignar memoria.\n");
                return 1;
                }

                printf("Ingrese los %d caracteres:\n", numValores);
                for (int i = 0; i < numValores; i++) {
                    printf("Caracter %d: ", i + 1);
                    vector[i] = getchar();
                    //vector[i] = 0;

                    while (getchar() != '\n');
                }
                vector[numValores * sizeof(char)+1] = 0;

                

                if(emptyString(vector) == true){
                    printf("Esta vacio\n");
                }else{
                    printf("El contenido es:\n");
                    printf("Caracteres almacenados:\n");
                    for (int i = 0; i < numValores+1; i++) {
                        printf("Caracter %d: %c\n", i + 1, vector[i]);
                    }
                }

                free(vector);
                estado = INIT;
                break;

            case REVERSE:
                char a[6] = "holas";
                string_reverse(a);
                estado = INIT;
                break;

            case LENGTH:
                char b[30] = "chaucito";
                printf("El tamaño es: %d\n",  my_strlen(b));
                estado = INIT;

                break;

            case CAT:
                char t[30] = "Hola ";
                char s[30] = "como estas";
                my_strcat(t, s);
                printA(t, my_strlen(t));
                estado = INIT;

                break;

            case CMP: //6
                char t1[30] = "aaaaaaaa";
                char t2[30] = "aaaaaa";
                printf("La comparacion da como resultado: %d\n", my_strcmp(t1, t2) - strcmp(t1, t2));
                estado = INIT;
                break;
                //printf("%d\n", strcmp("aab", "aaa"));

            case LOWER: //7
                char c[30] = "hola";
                strlwr(c);
                printA(c, my_strlen(c));
                estado = INIT;
                break;

            case UPPER: //8
                char d[30] = "ab812xh";
                strupr(d);
                printA(d, my_strlen(d));
                estado = INIT;
                break;

            case REPLACE: //9
                char e[30] = "papa";

                replace(e, 'c', 'p');

                printA(e, my_strlen(e));
                estado = INIT;
                break;

            case LEFT_TRIM: //10
                char f[30] = "      ElCac";
                left_trim(f);
                printA(f, my_strlen(f));
                estado = INIT;
                break;

            case RIGHT_TRIM: //11
                char j[30] = "sexo     ";
                right_trim(j);
                printA(j, my_strlen(j));
                printf("El tamaño es: %d\n", my_strlen(j));
                estado = INIT;
                break;

            case STR_STR: //12
                char z[30] = "hobabebeas";
                char k[30] = "bebe";
                printf("El string original es: \n");
                printA(z, my_strlen(z));
                printf("El string buscado es: \n");
                printA(k, my_strlen(k));

                char* dir = my_strstr(z,k);
                //char* dir = strstr(z, k);
                printf("El string encontrado es: \n");
                printA(dir, my_strlen(dir));
                estado = INIT;
                break;

            case PALINDROMO: //13
                char fe[30] = "Lol";
                printf("Es palindromo?: %d\n", es_palindromo(fe));
                estado = INIT;
                break;

            case INT_DEC: //14
                float valor = 2.132376;
                int entero = 0;
                long decimal = 0;
                int_dec(&valor, &entero, &decimal);
                printf("El valor original es: %f, la parte entera es: %d, y la parte decimal es: %ld\n", valor, entero, decimal);
                estado = INIT;
                break;

            case PROM_DOUBLE: //15
                double secuencia[5] = {
                    1.123456789012345, // Ejemplo de número con alta precisión
                    2.987654321098765,
                    3.123456789012345,
                    4.987654321098765,
                    5.123456789012345
                };
                double prom = prom_double(secuencia, 5);

                printf("El promedio es: %f\n", prom);
                estado = INIT;
                break;

            case SECS: //16

                float (*conversion)(int);
                int secs;
                printf("Indique la cantidad de segundos que quiere convertir: \n");
                scanf("%d", &secs);

                conversion = secsToMins;
                printf("Minutos: %f\n", conversion(secs));

                conversion = secsToHours;
                printf("Horas: %f\n", conversion(secs));

                conversion = secsToSecs;
                printf("Segundos: %f\n", conversion(secs));
                estado = INIT;
                break;

            case VALIDATE_DATE: //17

                int day = 12;
                int month = 12;
                int year = 1910;

                printf("Ingrese el dia: \n");
                scanf("%d", &day);

                printf("Ingrese el mes: \n");
                scanf("%d", &month);

                printf("Ingrese el año: \n");
                scanf("%d", &year);

                printf("La fecha es valida?: %d\n", validateDate(&day, &month, &year));

                estado = INIT;
                break;

            case PUNTO_PUNTO: //18
                int x1, x2, y1, y2;

                printf("Ingrese coordenada x1: \n");
                scanf("%d", &x1);

                printf("Ingrese coordenada x2: \n");
                scanf("%d", &x2);

                printf("Ingrese coordenada y1: \n");
                scanf("%d", &y1);

                printf("Ingrese coordenada y2: \n");
                scanf("%d", &y2);


                float distancia = distPuntoPunto(&x1, &y1, &x2, &y2);

                printf("La distancia es: %f\n", distancia);

                estado  = INIT;
                break;

            case VALIDATE_STRING: //19


                char* lol = "192.168.12.111";
                printf("EL string es una IP?: %d\n", IPvalidate(lol));
                printA(lol, my_strlen(lol));

                char* mail = "valen.pitocco@gmail.com";
                printf("El email es valido?: %d\n", emailValidate(mail));
                printA(mail, my_strlen(mail));

                char* credit = "9123 1214 2932 2122";
                printf("La tarjeta es valida? %d\n", cardValidate(credit));
                printA(credit, my_strlen(credit));

                printf("--------------------------\n");

                printf("EL string es una IP?: %d\n", validate_string(lol, IPvalidate));
                printf("El email es valido?: %d\n", validate_string(mail, emailValidate));
                printf("La tarjeta es valida? %d\n", validate_string(credit, cardValidate));

                estado = INIT;
                break;






            default:
                estado = INIT;
                break;
        }
    }

    return 0;
}
