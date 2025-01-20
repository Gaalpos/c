/*
 * Este programa realiza el c�lculo de la superficie corporal, utilizando la f�rmula de Mosteller
 * El valor de entrada para la altura se deber� indicar en cent�metros y para el peso en kilogramos
 * El resultado mostrar� la superficie corporal en m2
 *
 * Consultar https://interna.es/calculadora-ventana/superficie-corporal2/
 *
 * jmmm 26/05/22 Este codigo corresponde a la iteracion v1 de un desarrollo incremental
 * Se incorpora el uso de constantes con la directiva #define y la validacion de datos de entrada
 * Puede comprobar las diferencias con posteriores iteraciones (vN)
 * donde cada version del programa incorpora nuevas funcionalidades
 */

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la funci�n system
#include <math.h>       // Incluye la funci�n sqrt

#define PESOMAX 300     // LIMITE PARA EL PESO EN KILOGRAMOS
#define ALTOMAX 250     // LIMITE PARA LA ALTURA EN CENTIMETROS
#define C1 3600         // CONSTANTE QUE SE UTILIZA EN LA FORMULA

int main(void) {

    float peso, altura;

    system("cls"); // Llamada al sistema para borrar pantalla en cada iteraci�n
    printf("\nIntroduzca peso en kilogramos (0-%3d)   : ",PESOMAX);
    scanf("%f", &peso);
    printf("\nIntroduzca altura en centimetros (0-%3d): ",ALTOMAX);
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0 || peso>= PESOMAX || altura >= ALTOMAX) {  // VALIDACION DE DATOS DE ENTRADA
        printf("\nALGUNO DE LOS VALORES DE ENTRADA SE SITUA FUERA DEL RANGO ADMITIDO\n");
    }
    else {
        printf("\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
    }
    return 0;
}
