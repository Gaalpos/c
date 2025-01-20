/*
 * Este programa realiza el cálculo de la suma de los primeros 200 numeros impares
 * usando la instruccion iterativa while
 * Nota: Aqui se implementa el algoritmo que comprueba si el numero n es par o impar
 * usando la funcion modulo -> if (n%2 != 0) el numero es impar
 * Se puede comprobar el resultado aplicando la formula para el calculo de una serie aritmetica
 * S(n) = (T(1) + T(n) / 2) * n
 *
 * jmmm 26/05/22
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_TERM 200

int main()
{

    int n=1, impares=0;
    int Si=0;

    while(impares<NUM_TERM)
        {
            if (n%2 != 0) {   // Condicion de numero impar
                Si += n; // Acumulo el resultado de cada calculo (SUMATORIO)
                impares++;
            }
            // TRAZA: Quite el comentario de la linea siguiente si quiere conocer la TRAZA
            // printf("Posicion %d Impares: %d Sumatorio: %d\n", n, impares, Si);
            n++;
        }

    printf("Calculo de la suma de los primeros numeros impares\n");
    printf("El resultado de sumar los primeros %d numeros impares es: %d\n", NUM_TERM, Si);
    system("pause"); // Llamada al S.O. comando pause

}
