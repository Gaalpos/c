// Programa: VolumenPrisma.c - Autor: Jmmm - Fecha 07/01/2025

/*
    Este es mi primer programa en lenguaje C
    realixa el cáculo del volumen de un prisma
    a partir de los datos de entrada del ancho, largo y alto
 */

#include <stdio.h> // Llamada a la biblioteca estandar de entrada-salida

/*
    Aqui pondremos los prototipos de nuestras  funciones propias
*/

// Comienzo del programa principal

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
