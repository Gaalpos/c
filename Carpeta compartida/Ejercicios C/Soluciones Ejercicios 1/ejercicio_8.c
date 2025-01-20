/*
 * Este programa realiza el cálculo de la suma de los primeros 200 numeros impares
 * usando la instruccion iterativa for
 * Se puede comprobar el resultado aplicando la formula para el calculo de una serie aritmetica
 * S(n) = (T(1) + T(n) / 2) * n
 *
 * jmmm 26/05/22
 * Nota: Se pueden implementar versiones con distintos algoritmos; por ejemplo if (n%2 == 0) el numero es par
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_TERM 200

int main()
{

    int n;
    int Ti, Si=0;

    for(n=1;n<=NUM_TERM;n++) {
        Ti = 2 * n - 1; // Calculo del termino de la serie (numero impar)
        Si = Si + Ti; // Acumulo el resultado de cada calculo (SUMATORIO)
        //printf("Posicion %d Resultado: %d Sumatorio: %d\n", n, Ti, Si); // Quitar comentario para ver la TRAZA
    }

    printf("Calculo de la serie de los numeros impares S(n) = 2*n - 1\n");
    printf("El resultado para %d terminos es: %d\n", NUM_TERM, Si);
    system("pause"); // Llamada al S.O. comando pause

}
