#include <stdio.h>
#include <string.h>

/*
1. NUMEROS PRIMOS. Diseñar un algoritmo en C que solicite a un usuario por consola un
número N, verifique si ese número es primo, y muestre un mensaje por pantalla indicando si el
número es primo o no.
*/

char checkPrime(int num){
    char isPrime = "True";
     for (int i =1; i<num;i++){
        if (num != i || num != 1){
            return "False";
        }else{
        return "True";
        }
     }
return isPrime;
}

char *checkCheck(void){
return "Hello World!";
}

 main (){

  int num;
  //printf("Ingrese un numero para ver si es primo \n" );

 // scanf("%d",&num);

char retorno[128] ;
strcpy(retorno, checkCheck());
  printf("%s", checkCheck());
  printf("%s", retorno);



 }
