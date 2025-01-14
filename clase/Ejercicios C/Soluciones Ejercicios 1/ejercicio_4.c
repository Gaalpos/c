
/*
 * Este programa introduce las sentencia de tipo condicional
 * Comprueba que el valor de entrada dado por el usuario se encuentra dentro de unos limites (o rango).
 * Si el valor introducido se encuentra fuera del rango, indicara cual es el valor limite que no se cumple,
 *
 * jmmm 26/05/22
 */

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la función system

// Los valores de los limites se pueden modificar indicandolo en la directiva #define - (constantes macro)
#define LIMITE_INF 100    // LIMITE INFERIOR DEL RANGO
#define LIMITE_SUP 200    // LIMITE SUPERIOR DEL RANGO

int main(void) {
    char respuesta='S';
    int numero;

    do {
        system("cls"); // Llamada al sistema para borrar pantalla en cada iteración
        printf("\nIntroduzca valor (%3d-%3d)   : ",LIMITE_INF, LIMITE_SUP);
        scanf("%d", &numero);

        if (numero <= LIMITE_SUP && numero >= LIMITE_INF)
            printf("\nEL NUMERO INTRODUCIDO SE SITUA DENTRO DEL RANGO ADMITIDO\n");
        else if (numero > LIMITE_SUP)
            printf("\nERROR: EL NUMERO INTRODUCIDO %d ES MAYOR QUE EL LIMITE SUPERIOR %d\n", numero, LIMITE_SUP);
            else
                printf("\nERROR: EL NUMERO INTRODUCIDO %d ES MENOR QUE EL LIMITE INFERIOR %d\n", numero, LIMITE_INF);

        printf("\nENTER para continuar (cualquier otra finaliza): ");
        /* La siguiente instrucción vacia el "buffer" del teclado */
        fflush(stdin); // ¿Es necesaria esta instrucción? Prueba a comentarla y observa el resultado
        scanf("%c",&respuesta);
        //res = getch(); Probar como opción alternativa

    } while(respuesta=='\n');

    return 0;
}
