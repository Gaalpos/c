/*
 * Este programa realiza el calculo del area de un circulo y la longitud de una circunferencia
 * haciendo uso de la constante M_PI de la biblioteca metematica
 *
 * jmmm 26/05/22
 */

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la función system
#include <math.h>       // Incluye la constante M_PI y la funcion pow

#define RADIOMIN 0

int main(void) {
    char res='S';
    float radio;

    do {

        system("cls"); // Llamada al sistema para borrar pantalla en cada iteración
        printf("\nIntroduzca el valor del radio; el programa realizara el calculo de longitud y area: ");
        scanf("%f", &radio);

        if (radio < RADIOMIN)
            printf("\nVALOR DE ENTRADA MENOR QUE EL MINIMO ADMITIDO\n");
        else {
            printf("\nLA LONGITUD DE LA CIRFUNFERENCIA DE RADIO %7.2f ES: %7.2f (unidades longitud)\n", radio, 2.0*M_PI*radio);
            printf("\nEL AREA DEL CIRCULO DE RADIO %7.2f ES: %7.2f (unidades superficie)\n", radio, M_PI*pow(radio,2.0));
        }

        printf("\nENTER para continuar (cualquier otra finaliza): ");
        /* La siguiente instrucción vacia el "buffer" del teclado */
        fflush(stdin); // ¿Es necesaria esta instrucción? Prueba a comentarla y observa el resultado
        scanf("%c",&res);

    } while(res=='\n'); // Se podria comparar con el valor numerico del salto de linea, o sea 13

    system("pause");
    return 0;
}
