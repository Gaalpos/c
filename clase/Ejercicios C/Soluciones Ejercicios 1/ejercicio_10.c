
/*
 * Este programa realiza el cálculo de la serie S(n) donde n pertenece al rango [z..v]
 * Los valores de z y v se solicitaran al usuario
 * Los terminos de la serie vienen dados por la formula T(n) = 1 + n
 *
 *
 * jmmm 26/05/22
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int z, v, contador;
    float Ti, acumulador=0;

    printf("Limite inferior: ");
    scanf("%d", &z);
    printf("Limite superior: ");
    scanf("%d", &v);

    if(v<z) {
        printf("Limites no validos\n");
        system("pause");
        return(-1);
    }

    for(contador=z;contador<=v;contador++) {
        Ti = 1.0 / (float) (2.0*contador+1.0);     // Reemplace esta linea por la formula que corresponda
        int conmutador = contador%2;
        if (!conmutador)
            acumulador = acumulador + Ti; // Acumulo el resultado de cada calculo (SUMATORIO)
        else
            acumulador = acumulador - Ti;
        // TRAZA: Quite el comentario de la linea siguiente si quiere conocer la TRAZA
        printf("Contador %d Termino: %f Acumulador: %f Conmutador: %d\n", contador, Ti, acumulador*4.0, conmutador);
    }


    printf("El resultado de S(%d..%d) para T(n) = 1 + n es: %f\n", z, v, 4.0*acumulador);
    system("pause");

    return(0);

}
