#include <stdio.h>

int main() {

    float radio, pi;

    pi = 3.14;

    printf("Dime el valor del radio: ");
    scanf("%f", &radio);
    //area = pi*radio*radio;
    printf("El area del circulo es: %f", pi*radio*radio);
    printf("La longitud de la circunferencia es: %f", pi*radio*2);
    return 0;
}
