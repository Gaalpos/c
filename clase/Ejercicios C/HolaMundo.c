#include <stdio.h>
int main(){

    int ancho, largo, alto, volumen;

    printf("Dame ancho: ");
    scanf("%d", &ancho);
    printf("Dame largo: ");
    scanf("%d", &largo);
    printf("Dame alto: ");
    scanf("%d", &alto);

    if (ancho<0 || largo<0 || alto<0) {
    printf("Valores no validos!!!");
    return 1;
    }
    else {
    volumen=ancho*largo*alto;
    printf("Volumen calculado: %d", volumen);
    return 0;
    }

}
