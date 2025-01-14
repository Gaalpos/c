/*
   INTEGRALES DEFINIDAS Y CALCULO DE AREAS

   jmmm 26/05/22 Este codigo corresponde a la iteracion v0 de un desarrollo incremental

    Puede comprobar las diferencias con posteriores iteraciones (vN)
    donde cada version del programa incorpora nuevas funcionalidades

   Para obtener la precision necesaria, utilizaremos variable de tipo double en vez de variables tipo float

   La integral solicitada es x^4 - 5*x^3 - 7*x^2 +29*x +30
*/

// href='https://www.quora.com/If-an-integral-is-a-means-for-solving-area-under-a-curve-what-does-it-mean-if-I-obtain-a-negative-value/answer/David-Goldsmith-9'
// https://es.symbolab.com/solver/definite-integral-calculator/%5Cint_%7B4%7D%5E%7B9%7D%20x%5E%7B4%7D-%205%20x%5E%7B3%7D%20-%207%20x%5E%7B2%7D%20%2B29%20x%20%2B%2030%20dx

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INFERIOR 4
#define SUPERIOR 9
#define INTERVALOS 1000

int main(void)
{

    double x, base, altura, integral;
    int i;

    integral = 0;

    x = (double) INFERIOR; // Hacemos un cast para hacer todos los calculos con el tipo double
    base = (double) (SUPERIOR-INFERIOR) / (float) INTERVALOS;

    for(i=0;i<INTERVALOS;i++)
    {

        altura = 1.0*pow(x,4.0); // Coeficiente termino cuarto grado
        altura += -5.0*pow(x,3.0); // Coeficiente termino tercer grado
        altura += -7.0*pow(x,2.0); // Coeficiente termino segundo grado
        altura += 29.0*(x); // Coeficiente termino primer grado
        altura += 30.0; // Termino independiente (grado cero)
        // Aproximamos con la formula del rectangulo (base por altura)
        integral = integral + (base*altura); // Acumulamos el resultado; usamos formula
        x = x + base; // Pasamos a la siguiente coordenada del intervalo
    }

    printf ("\n\tEl resultado de aproximar %d rectangulos de la integral en el intervalo [%d..%d] es: %lf ", INTERVALOS, INFERIOR, SUPERIOR, integral);
    getchar();
    return 0;

}
