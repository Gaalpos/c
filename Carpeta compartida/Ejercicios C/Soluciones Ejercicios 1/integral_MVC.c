/*
 *  Calculo de integral de un polinomio
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vista.h"


int main() {


    int precision=1000;
    double b, h;

    vista(&l_inf, &l_sup, &precision);
    double resultado=controlador(l_inf, l_sup, precision);
    salida(resultado);

}
