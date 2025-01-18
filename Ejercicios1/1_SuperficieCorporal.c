#include <stdio.h>
#include <math.h>

main(){
float peso,altura;

printf("Ingrese su peso (kg) \n");
scanf("%f",&peso);
printf("Ingrese su altura (cm)\n");
scanf("%f",&altura);

float superficie_corporal =sqrt((peso * altura)/3600);
printf("%f",superficie_corporal);

return 1;
}
