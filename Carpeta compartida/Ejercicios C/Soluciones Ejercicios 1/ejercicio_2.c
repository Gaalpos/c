/*
 * Este programa realiza la conversion de grados centigrados a Farenhite
 * segun la formula C = (F – 32) /1.8 -> F = C*1.8 + 32
 *
 * Consultar https://www.metric-conversions.org/es/temperatura/celsius-a-fahrenheit.htm
 *
 * jmmm 26/05/22
 */

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la función system

#define TEMPMIN -273.15

int main(void)
//int main(int argc, char *argv[])
{
    char respuesta='S';
    float temperatura;

    do {
        system("cls"); // Llamada al sistema para borrar pantalla en cada iteración
        printf("\nIntroduzca la temperatura en grados centigrados; el programa realizara la conversion: ");
        scanf("%f", &temperatura);

        if (temperatura < TEMPMIN)
            printf("\nVALOR DE ENTRADA MENOR QUE EL MINIMO ADMITIDO\n");
        else
            printf("\nLA TEMPERATURA CALCULADA EN GRADOS FARENHEIT ES: %7.2f (F)\n", temperatura*1.8+32.0);

        printf("\n<S> para continuar (cualquier otra finaliza): ");
        /* La siguiente instrucción vacia el "buffer" del teclado */
        fflush(stdin); // ¿Es necesaria esta instrucción? Prueba a comentarla y observa el resultado
        scanf("%c",&respuesta);

    } while(respuesta=='S' || respuesta =='s');

    system("pause");
    return 0;
}
