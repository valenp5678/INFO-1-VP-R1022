#include "funciones.h"
#include <stdio.h>

void print_bin_recurs(unsigned int val){
    if(val){
        print_bin_recurs(val/2);
    }
    printf("%d", val%2);

}

void print_bin_mask(unsigned int val){

    for(int i = 31; i >= 0; i--){
        printf("%d", (val >> i) & 1);
    }
    printf("\n");

}


void print_bin_cdbit(unsigned int val) {
    struct campo {
        unsigned int bit31 : 1;
        unsigned int bit30 : 1;
        unsigned int bit29 : 1;
        unsigned int bit28 : 1;
        unsigned int bit27 : 1;
        unsigned int bit26 : 1;
        unsigned int bit25 : 1;
        unsigned int bit24 : 1;
        unsigned int bit23 : 1;
        unsigned int bit22 : 1;
        unsigned int bit21 : 1;
        unsigned int bit20 : 1;
        unsigned int bit19 : 1;
        unsigned int bit18 : 1;
        unsigned int bit17 : 1;
        unsigned int bit16 : 1;
        unsigned int bit15 : 1;
        unsigned int bit14 : 1;
        unsigned int bit13 : 1;
        unsigned int bit12 : 1;
        unsigned int bit11 : 1;
        unsigned int bit10 : 1;
        unsigned int bit9  : 1;
        unsigned int bit8  : 1;
        unsigned int bit7  : 1;
        unsigned int bit6  : 1;
        unsigned int bit5  : 1;
        unsigned int bit4  : 1;
        unsigned int bit3  : 1;
        unsigned int bit2  : 1;
        unsigned int bit1  : 1;
        unsigned int bit0  : 1;
    }bits;

    union {
        int val;
        struct campo bits;
    } u;

    u.val = val;

     printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",
    u.bits.bit0, u.bits.bit1, u.bits.bit2, u.bits.bit3,
    u.bits.bit4, u.bits.bit5, u.bits.bit6, u.bits.bit7,
    u.bits.bit8, u.bits.bit9, u.bits.bit10, u.bits.bit11,
    u.bits.bit12, u.bits.bit13, u.bits.bit14, u.bits.bit15,
    u.bits.bit16, u.bits.bit17, u.bits.bit18, u.bits.bit19,
    u.bits.bit20, u.bits.bit21, u.bits.bit22, u.bits.bit23,
    u.bits.bit24, u.bits.bit25, u.bits.bit26, u.bits.bit27,
    u.bits.bit28, u.bits.bit29, u.bits.bit30, u.bits.bit31
);


}

