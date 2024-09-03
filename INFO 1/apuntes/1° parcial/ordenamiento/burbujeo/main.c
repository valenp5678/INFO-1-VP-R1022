#include <stdio.h>
#include <stdlib.h>

void printA(int* arr, int length);
void swap(int* arr, int i, int j);

int main(int argc, char **argv) {
    // Verifica que se haya pasado al menos un número
    if (argc < 2) {
        printf("Uso: %s <num1> <num2> <num3> ...\n", argv[0]);
        return 1;
    }

    // Número de argumentos menos 1 (ya que el primer argumento es el nombre del programa)
    int N = argc - 1;

    // Asigna memoria para el array de enteros
    int* valor = (int*) malloc(N * sizeof(int));

    if (valor == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Convierte cada argumento a un entero y almacena en el array
    for (int i = 0; i < N; i++) {
        valor[i] = atoi(argv[i + 1]);
    }

    // Imprime el array antes de ordenar
    printf("Antes de ordenar: ");
    printA(valor, N);

    // Ordena el array usando el algoritmo de burbujeo
    for (int j = 0; j < N - 1; j++) {
        for (int i = 0; i < N - 1 - j; i++) {
            if (valor[i] > valor[i + 1]) {
                swap(valor, i, i + 1);  // Intercambia los elementos
            }
        }
    }

    // Imprime el array después de ordenar
    printf("Después de ordenar: ");
    printA(valor, N);

    // Libera la memoria asignada
    free(valor);

    return 0;
}
