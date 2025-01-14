/*
   INTEGRALES DEFINIDAS Y CALCULO DE AREAS

   jmmm 26/05/22 Este codigo corresponde a la iteracion v1 de un desarrollo incremental

   Los calculos se pueden iterar mientras el usuario introduzca valores de entrada adecuados
    Se solicitan y validan los valores de limites e intervalo
    Los calculos de la funcion se realizan en un modulo aparte del programa principal
    y se aproxima la integral por el metodo del trapecio

*/

// href='https://www.quora.com/If-an-integral-is-a-means-for-solving-area-under-a-curve-what-does-it-mean-if-I-obtain-a-negative-value/answer/David-Goldsmith-9'
// https://es.symbolab.com/solver/definite-integral-calculator/%5Cint_%7B4%7D%5E%7B9%7D%20x%5E%7B4%7D-%205%20x%5E%7B3%7D%20-%207%20x%5E%7B2%7D%20%2B29%20x%20%2B%2030%20dx

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "include\AFD_consola.h"

double mi_funcion(double x)

{
    double y;
    // f(x) = x*x*x*x - 5*x*x*x - 7*x*x + 29*x - 30 : resultado 3264.5833

    /*
    y = 1.0*pow(x,4.0); // Coeficiente termino cuarto grado
    y += -5.0*pow(x,3.0); // Coeficiente termino tercer grado
    y += -7.0*pow(x,2.0); // Coeficiente termino segundo grado
    y += 29.0*(x); // Coeficiente termino primer grado
    y += 30.0; // Termino independiente

    return(y);
    */

    y = pow(x, 4.0) - 5.0*pow(x, 3.0) - 7.0*pow(x, 2.0) + 29.0*x + 30.0;

    return (y);
}

int main(void)
{

    double x, base_mayor, base_menor, altura;
    int inf, sup, inter, i;

    for(;;)
    {

        ConsolaColors(GREEN, BLACK);
        printf("\n introduzca el valor del limite inferior: ");
        scanf("%d",&inf);
        printf("\n introduzca el valor del limite superior: ");
        scanf("%d",&sup);
        printf("\n introduzca intervalos (0 para terminar programa): ");
        scanf("%d",&inter);

        altura=0;

        if (inter > 0) altura = (float) (sup-inf) / (float) inter;

        if (altura <= 0 || sup-inf <= 0)
        {
            printf("Error en datos de entrada; el programa finalizara\n");
            system("pause");
            break;
        }

        double integral = 0;
        double area = 0;
        double integral_ant = 0, area_ant = 0;
        double aprox_integral = 0;

        x = (double) inf;
        for(i=0;i<inter;i++)
        {
            // Para esta version calcularemos el area del trapecio -> (base_menor+base_mayor)*altura72
            base_menor = mi_funcion(x);
            x = x + altura;
            base_mayor = mi_funcion(x);

            integral = integral + (base_menor+base_mayor)*(altura/2.0);
            area = area + fabs((base_menor+base_mayor)*(altura/2.0));
            aprox_integral = fabs(integral)-fabs(integral_ant);
            //printf("%lf %lf\n", integral_ant, integral); // TRAZA PARA CONOCER LA APROXIMACION EN CADA VUELTA
            integral_ant = integral;
        }

        printf ("\n\tEl resultado de aproximar %d trapecios de la integral en el intervalo [%d..%d] es: %lf ", inter, inf, sup, integral);
        printf ("\n\tEl resultado de aproximar %d trapecios del area bajo la funcion en el intervalo [%d..%d] es: %lf ", inter, inf, sup, area);

        printf ("\n\tEn la ultima vuelta la aproximacion para el calculo de la integral es de: ");
        ConsolaColors(RED, LIGHTGRAY);
        printf ("%f ", aprox_integral); // %g formato de notacion cientifica

        ConsolaColors(GREEN, BLACK);
        getchar();

    }

    return 0;

}
