/*
3. Calcular el área de un circulo. Diseñar un programa en C que permita obtener el área de una
circunferencia a partir de su radio. El programa deberá solicitar al usuario por consola el radio
del círculo, y mostrar por pantalla el resultado del cálculo.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

main(){

float radio;
printf("Radio del circulo  \n");
scanf("%f", &radio);
float area = PI*radio*radio;
printf("El area es: %f",area);



}
