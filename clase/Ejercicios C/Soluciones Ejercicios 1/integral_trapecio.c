/*
 *  Calculo de integral de un polinomio
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f_x(double);
double trapecio(double, double, double);
void vista(double *, double *, int *);
void calculo(double, double, int, double *);
void salida(double);

int main() {

    double l_inf, l_sup;
    int precision;
    double acumulador=0.0;
    double b, h;

    vista(&l_inf, &l_sup, &precision);
    //printf("Valores despues de la llamada a vista: %lf, %lf, %d\n", l_inf, l_sup, precision);
    calculo(l_inf, l_sup, precision, &acumulador);
    salida(acumulador);

}

double trapecio(double base_menor, double base_mayor, double altura) {
    double resultado;
    resultado=(base_menor+base_mayor)*altura/(double) 2.0;
    return resultado;
}

double f_x(double x) {
    double resultado;

    resultado=pow(x,4)-5*pow(x,3)-7*pow(x,2)+29*x+30;
    return resultado;
}

void vista(double *dato_1, double *dato_2, int *dato_3) {

    printf("Limite inferior: ");
    scanf("%lf", &*dato_1);
    printf("Limite superior: ");
    scanf("%lf", &*dato_2);
    printf("Precision: ");
    scanf("%d", &*dato_3);

}

void calculo(double l_inf, double l_sup, int precision, double *acumulador) {

    double h=(l_sup-l_inf)/(double) precision;
    double x=l_inf;
    for (int contador=0;contador<precision;contador++) {
        // Metodo de trapecio
        double b = f_x(x);
        double B = f_x(x+h);
        *acumulador = *acumulador + trapecio(b, B, h);
        x=x+h;
    }
}

void salida(double dato_salida) {
    printf("El resultado de la integral (metodo trapecio) es %10.5f", dato_salida);
}
