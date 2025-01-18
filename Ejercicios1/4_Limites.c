/*
Limites de números. Realizar un programa en C que permita determinar si un numero
introducido por consola está comprendido entre 100 y 200. El programa deberá además
indicar al usuario si el numero es menor a 100 o mayor a 200. Nota: Emplear la sentencia IF

*/
#include <stdio.h>


main(){
float num;
printf("Esriba un numeroL: \n");
scanf("%f",&num);

if (num >= 100 && num <=200){
    printf("Esta entre 100 y 200");
}else{
    printf("No esta dentro de los limites");
    if(num <100){
        printf(", es menor a 100 \n");
    }else{
    printf(", es mayor de 200 \n");
    }
}
return 1;
}
