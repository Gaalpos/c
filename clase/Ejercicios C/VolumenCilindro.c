/*
    Programa: VolumenCilindro.c - Autor: Afd1603 - Fecha 07/01/2025
    Este programa realiza el cáculo del volumen de un cilindro
    a partir de los datos de entrada del perimetro y altura (en cm)
 */
#include <stdio.h>
#include <math.h>
#define AISLAMIENTO 3.5

// Prototipo de la funcion que calcula el area de un circulo
float circulo(float radio);

// Comienzo del programa principal
int main(){

    float perimetro, largo;
    float volumen;

    printf("Programa para cálculo del volumen de un deposito cilíndrico\n");
    printf("Solicitaremos como entrada el perimetro y el largo en cm\n");
    printf("Se asume una capa de aislamiento de 3.5 cm alrededor del deposito interior\n");
    printf("El programa finalizara si se introduce un valor mo válido\n");


    do {
        printf("Dame perimetro en cm: ");
        scanf("%f", &perimetro);
        printf("Dame largo en cm: ");
        scanf("%f", &largo);

        if (perimetro<M_PI*AISLAMIENTO || largo<AISLAMIENTO*2) {
            printf("Valores no validos!!!");
            return 1;
        }
        else {
            volumen=circulo((perimetro/(2*M_PI))-AISLAMIENTO)*(largo-AISLAMIENTO*2); // Utilizamos la funcion pow(base,exponente)
            printf("Volumen calculado: %f centimetros cubicos\n", volumen);
            printf("Volumen calculado: %.2f litros\n", volumen/1000.0);
            //return 0;
        }
    } while (1);

}

float circulo(float radio) {
   return (M_PI*pow(radio,2));
}
