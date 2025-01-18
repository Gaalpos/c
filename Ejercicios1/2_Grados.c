/*
2. Convertir de grados centígrados a Fahrenheit. Realizar un programa en C que permita a un
usuario introducir por teclado la temperatura en grados centígrados y que le devuelva por
pantalla la temperatura en grados Fahrenheit correspondiente. (utilizar fórmula C = F – 32/1.8)
*/

#include <stdio.h>
get_num(){
    int  num;
    printf("Pulse 1 para convertir Celsisus a Farenheit \n");
    printf("Pulse 2 para convertir farenheit a Celsius \n");
    printf("Pulse 3 para salir \n");
    scanf("%i", &num);
    return num;
}

to_farenheit(){
    float grados;
    printf("Escriba grados en Celsius \n");
    scanf("%f",&grados);
    float farenheit = (grados*1.8)+32;
    printf("%f",farenheit);
}

to_celsisus(){
    float grados;
    printf("Escriba grados en Farenheit \n");
    scanf("%f",&grados);
    float celsius = (grados-32)*5/9;
    printf("%f",celsius);
}

main(){
    int num ;
    do {
        num = get_num();
        if (num != 1 && num != 2 && num !=3 ){
            printf("Numero incorrecto! \n");
        }
    }while (num != 1 && num != 2 );


    if (num == 1){
    to_farenheit();
    }else{
    to_celsisus();
    }
    return 1;
}
