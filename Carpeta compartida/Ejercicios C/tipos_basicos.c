#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // Aqui se pueden consultar los valores minimos y maximos de cada tipo d edatos

int main() {

    char mi_char;               // De -128 a 127
    unsigned char mi_uchar;     // De 0 a 255
    short mi_short;             // De -32768 a 32767
    unsigned short mi_ushort;   // De 0 a 65535
    int mi_int;                 // De -2147483648 a 2147483647
    unsigned int mi_uint;       // De 0 a 4294967295
    long long mi_long;          // De -9223372036854775808 a 9223372036854775807
    unsigned long long mi_ulong;// De 0 a 2*9223372036854775807-1

    float mi_float;
    double mi_double;

    printf("------Tipos numericos enteros-------\n");
    printf("El tipo char ocupa %d bytes en memoria\n", sizeof(mi_char));
    printf("El tipo short ocupa %d bytes en memoria\n", sizeof(mi_short));
    printf("El tipo int ocupa %d bytes en memoria\n", sizeof(mi_int));
    printf("El tipo long long ocupa %d bytes en memoria\n", sizeof(mi_long));
    printf("\n------Tipos numericos reales-------\n");
    printf("El tipo float ocupa %d bytes en memoria\n", sizeof(mi_float));
    printf("El tipo double ocupa %d bytes en memoria\n", sizeof(mi_double));

}
