#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    void (*print_bin)(unsigned int);

    print_bin = print_bin_recurs;
    printf("Recursiva: \n");
    print_bin(25);
    printf("\n");

    print_bin = print_bin_mask;
    printf("Mascara: \n");
    print_bin(25);

    print_bin = print_bin_cdbit;
    printf("Campo de bits: \n");
    print_bin(25);

    return 0;
}
