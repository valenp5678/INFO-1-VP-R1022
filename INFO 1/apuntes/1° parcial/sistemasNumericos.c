#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para convertir de decimal a binario
void decimal_a_binario(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    char bin[32];
    int i = 0;

    while (num > 0) {
        bin[i++] = (num % 2) ? '1' : '0';
        num /= 2;
    }

    // Imprimir el binario en orden inverso
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", bin[j]);
    }
}

// Función para convertir de decimal a hexadecimal
void decimal_a_hexadecimal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    char hex[32];
    int i = 0;

    while (num > 0) {
        int remainder = num % 16;
        hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        num /= 16;
    }

    // Imprimir el hexadecimal en orden inverso
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}

// Función para convertir de binario a decimal
void binario_a_decimal(const char* bin) {
    int decimal = 0;
    while (*bin) {
        decimal = (decimal << 1) | (*bin++ - '0');
    }
    printf("%d", decimal);
}

// Función para convertir de hexadecimal a decimal
void hexadecimal_a_decimal(const char* hex) {
    int decimal = 0;
    while (*hex) {
        decimal *= 16;
        if (*hex >= '0' && *hex <= '9') {
            decimal += *hex - '0';
        } else if (*hex >= 'A' && *hex <= 'F') {
            decimal += *hex - 'A' + 10;
        }
        hex++;
    }
    printf("%d", decimal);
}

// Función para realizar la conversión solicitada
void realizar_conversion(int origen, int destino, const char* valor) {
    // Mapeo de punteros a funciones
    void (*convertir_decimal[2])(int) = {decimal_a_binario, decimal_a_hexadecimal};
    void (*convertir_str[2])(const char*) = {binario_a_decimal, hexadecimal_a_decimal};

    if (origen == 0) { // Decimal
        if (destino == 1) {
            convertir_decimal[0](atoi(valor)); // Decimal a Binario
        } else if (destino == 2) {
            convertir_decimal[1](atoi(valor)); // Decimal a Hexadecimal
        }
    } else if (origen == 1) { // Binario
        if (destino == 0) {
            convertir_str[0](valor); // Binario a Decimal
        }
    } else if (origen == 2) { // Hexadecimal
        if (destino == 0) {
            convertir_str[1](valor); // Hexadecimal a Decimal
        }
    }
    printf("\n");
}

int main() {
    // Ejemplos de conversión
    printf("Decimal 10 a Binario: ");
    realizar_conversion(0, 1, "10");

    printf("Decimal 255 a Hexadecimal: ");
    realizar_conversion(0, 2, "255");

    printf("Binario 1010 a Decimal: ");
    realizar_conversion(1, 0, "1010");

    printf("Hexadecimal FF a Decimal: ");
    realizar_conversion(2, 0, "FF");

    return 0;
}
