/*
    Programa: superficiecorporal.c - Autor: Xerxoogrelo - Fecha 07/01/2025
    Este programa realiza el cáculo del peso de un cilindro
    a partir de los datos de entrada del peso y altura (en cm)
 */
#include <stdio.h>
#include <math.h>

// Comienzo del programa principal
int main(){

    float peso;
    float altura;
    float volumen;

    printf("Programa para calcular peso en kg\n");
    printf("programa para calcular la altura en cm\n");


    printf("Dame peso en kg: ");
    scanf("%f", &peso);
    printf("Dame altura en cm: ");
    scanf("%f", &altura);

    if (peso<0 && altura<0) {
        printf("Valores no validos!!!");
        return 1;
    }

    else {
        volumen=sqrt(peso*altura/3600);
        printf("indice masa corporal calculado: %fm2", volumen);

        return 0;}

}

