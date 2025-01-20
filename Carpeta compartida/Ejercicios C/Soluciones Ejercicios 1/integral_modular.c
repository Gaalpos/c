/*
 *  Calculo de integral de un polinomio
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double rectangulo(double, double);
double f_x(double);

int main() {

    double l_inf, l_sup;
    double acumulador = 0;
    double b, h;
    int precision;

    printf("Limite inferior: ");
    scanf("%lf", &l_inf);
    printf("Limite superior: ");
    scanf("%lf", &l_sup);
    printf("Precision: ");
    scanf("%d", &precision);

    b=(l_sup-l_inf)/(double) precision;

    double x=l_inf;
    for (int contador=0;contador<precision;contador++) {
        h = f_x(x);
        acumulador = acumulador + rectangulo(b, h);
        x=x+b;
    }
    printf("El resultado de la integral es %10.5f", acumulador);

}

double rectangulo(double base, double altura) {
    return base*altura;
}

double f_x(double x) {
    double resultado;

    resultado=pow(x,4)-5*pow(x,3)-7*pow(x,2)+29*x+30;
    return resultado;
}
