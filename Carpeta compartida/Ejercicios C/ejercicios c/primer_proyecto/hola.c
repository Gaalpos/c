#include <stdio.h>

int main()
{   //para las variables enteras o float no necesito asignarles un tamaño
    float radio, pi,area;
    pi = 3.14;

    printf("Dime el valor del radio:");
    scanf ("%f", &radio);// ponemos f por float y & esto hay que ponerlo como paso por referencia si no no funciona
    area = pi*radio*radio;
    float circunferencia;
    circunferencia= 2*pi*radio;
    printf("el area del circulo es: %f", pi*radio radio);


    return(0);
}
