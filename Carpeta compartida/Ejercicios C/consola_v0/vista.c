#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vista(double *dato_1, double *dato_2, int *dato_3) {

    //printf("Valor de los punteros: (dato 1) %p (dato 2) %p (dato 3) %p\n", dato_1, dato_2, dato_3);
    //printf("Contenido de los punteros: (dato 1) %lf (dato 2) %lf (dato 3) %d\n", *dato_1, *dato_2, *dato_3);
    //printf("Tamaño de los punteros: (dato 1) %d (dato 2) %d (dato 3) %d\n", sizeof(dato_1), sizeof(dato_2), sizeof(dato_3));
    //printf("Tamaño del contenido de los punteros: (dato 1) %d (dato 2) %d (dato 3) %d\n", sizeof(*dato_1), sizeof(*dato_2), sizeof(*dato_3));

    char prompt1[] = "Limite inferior: ";
    char prompt2[] = "Limite superior: ";
    char prompt3[] = "Precision: ";

    printf("%s", prompt1);
    scanf("%lf", &(*dato_1));
    printf("%s", prompt2);
    scanf("%lf", &(*dato_2));
    printf("%s", prompt3);
    scanf("%d", &(*dato_3));

    return;

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

double controlador(double l_inf, double l_sup, int precision) {

    double h=(l_sup-l_inf)/(double) precision;
    double x=l_inf;
    double acumulador = 0.0;
    for (int contador=0;contador<precision;contador++) {
        // Metodo de trapecio
        double b = f_x(x);
        double B = f_x(x+h);
        acumulador = acumulador + trapecio(b, B, h);
        x=x+h;
    }
    return acumulador;
}

void salida(double dato_salida) {
    printf("El resultado de la integral (metodo trapecio) es %10.5f", dato_salida);
    return;
}
