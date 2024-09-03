#include "funciones.h"

int valorAnalizado(int* v){
    int conSigno;
    unsigned int sinSigno;

    if(((v[0] >> 10) & 3) == 3){
        conSigno = (int)(v[3] & v[2] << v[1]);
    }else{
        sinSigno = (v[3] & v[2] << v[1]);
    }
}

