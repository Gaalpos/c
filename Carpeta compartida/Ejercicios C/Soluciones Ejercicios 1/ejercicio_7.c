/*
 * Este programa realiza el cálculo de la serie (o sumatorio) S(n) donde n pertenece al rango [1..100]
 * y los terminos (resultados de cada iteracion) de la serie vienen dados por la formula T(n) = 1 / n
 *
 *
 * jmmm 26/05/22
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n;
    int inferior, superior;
    float Ti, Si=0;

    printf("Indique limite inferior: ");
    scanf("%d", &inferior);
    printf("Indique limite superior: ");
    scanf("%d", &superior);
    if (inferior > superior) {
        printf("Limites no validos\n");
        return -1;
    }

    for(n=inferior;n<=superior;n=n+1)
        {
            Ti = 1 / (float) n; // Calculo del termino de la serie
            Si = Si+Ti; // Acumulo el resultado de cada calculo en la variable Si (SUMATORIO)
            // Quite el comentario en la linea de codigo siguiente si quiere conocer la TRAZA (valores en cada vuelta)
            // printf("Posicion %d Termino: %f Sumatorio: %f\n", n, Ti, Si);
        }

    printf("El resultado de S(%d..%d) para T(n) = 1 / n es: %f\n", inferior, superior, Si);
    system("pause");

}
