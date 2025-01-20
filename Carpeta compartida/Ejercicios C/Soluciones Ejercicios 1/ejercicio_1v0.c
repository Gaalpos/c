
/*
 * Este programa realiza el cálculo de la superficie corporal, utilizando la fórmula de Mosteller
 * El valor de entrada para la altura se deberá indicar en centímetros y para el peso en kilogramos
 * El resultado mostrará la superficie corporal en m2
 *
 * Consultar https://interna.es/calculadora-ventana/superficie-corporal2/
 *
 * jmmm 26/05/22 Este codigo corresponde a la primera iteracion (v0) de un desarrollo incremental
 * Puede comprobar las diferencias con posteriores iteraciones (vN)
 * donde cada version del programa incorpora nuevas funcionalidades
 *
 */

#pragma warning(disable : 4996) // Deshabilita el error de funciones no seguras -scanf, printf, etc...

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la función system
#include <math.h>       // Incluye la función sqrt

int main(void) {
    float peso, altura, superficie;

    printf("\nIntroduzca peso en kilogramos: ");
    scanf("%f", &peso);
    printf("\nIntroduzca altura en centimetros: ");
    scanf("%f", &altura);
    superficie = sqrt(peso*altura/3600);
    printf("\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", superficie);

    return 0;
}
