/*
 *  Calculo de integral de un polinomio
 */

#include "vista.h"

int main() {

    double l_inf=4.0, l_sup=9.0;
    int precision=1000;

    vista(&l_inf, &l_sup, &precision);
    double resultado=controlador(l_inf, l_sup, precision);
    salida(resultado);

}
