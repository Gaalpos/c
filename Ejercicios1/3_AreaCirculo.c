/*
3. Calcular el �rea de un circulo. Dise�ar un programa en C que permita obtener el �rea de una
circunferencia a partir de su radio. El programa deber� solicitar al usuario por consola el radio
del c�rculo, y mostrar por pantalla el resultado del c�lculo.
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
