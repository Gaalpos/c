/*
   INTEGRALES DEFINIDAS Y CALCULO DE AREAS

   Para obtener la precision necesaria, utilizaremos variable de tipo double en vez de variables tipo float
*/

// href='https://www.quora.com/If-an-integral-is-a-means-for-solving-area-under-a-curve-what-does-it-mean-if-I-obtain-a-negative-value/answer/David-Goldsmith-9'
// https://es.symbolab.com/solver/definite-integral-calculator/%5Cint_%7B4%7D%5E%7B9%7D%20x%5E%7B4%7D-%205%20x%5E%7B3%7D%20-%207%20x%5E%7B2%7D%20%2B29%20x%20%2B%2030%20dx

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

double mi_funcion(double x)

{
    double y;
    // f(x) = x*x*x*x - 5*x*x*x - 7*x*x + 29*x - 30 : resultado 3264.5833

    y = 1.0*pow(x,4.0); // Coeficiente termino cuarto grado
    y += -5.0*pow(x,3.0); // Coeficiente termino tercer grado
    y += -7.0*pow(x,2.0); // Coeficiente termino segundo grado
    y += 29.0*(x); // Coeficiente termino primer grado
    y += 30.0; // Termino independiente

    return(y);
}


//float funcion(float x) {return(cos(x));}
//float funcion(float x) {return(sin(x));}

int main(void)
//int main(int argc, char *argv[])
{

    double x, base, altura, integral;
    int inf, sup, inter, i;

    for(;;)
    {

        printf("\n introduzca el valor del limite inferior: ");
        scanf("%d",&inf);
        printf("\n introduzca el valor del limite superior: ");
        scanf("%d",&sup);
        printf("\n introduzca intervalos (0 para terminar programa): ");
        scanf("%d",&inter);

        base=0;

        if (inter > 0) base = (float) (sup-inf) / (float) inter;

        if (base <= 0 || sup-inf <= 0)
        {
            printf("Error en datos de entrada; el programa finalizara\n");
            system("pause");
            break;
        }

        integral = 0;
        //double area = 0;

        x = (double) inf;
        for(i=0;i<inter;i++)
        {

            altura = mi_funcion(x);
            /*
            altura = 1.0*pow(x,4.0); // Coeficiente termino cuarto grado
            altura += -5.0*pow(x,3.0); // Coeficiente termino tercer grado
            altura += -7.0*pow(x,2.0); // Coeficiente termino segundo grado
            altura += 29.0*(x); // Coeficiente termino primer grado
            altura += 30.0; // Termino independiente
            */
            integral = integral + (base*altura);
            //area = area + fabs(base*altura);
            x = x + base;
        }

        printf ("\n\n\t el resultado de la integral en el intervalo [%d..%d] es: %lf ", inf, sup, integral);
        //printf ("\n\n\t el area bajo la funcion en el intervalo [%d..%d] es: %lf \n\n\n", inf, sup, area);

    }

    return 0;

}
