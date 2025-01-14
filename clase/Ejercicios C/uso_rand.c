#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (){

    //srand (time (NULL));
    int lim_inf, lim_sup, rango;

    //srand(time(NULL));
    srand(getpid());

    printf("La funcion rand devueve un numero entero comprendido entre 0 y %d\n", RAND_MAX);
    printf("Ajustaremos es resultado de la funcion para que este comprendido entre dos valores enteros (ambos inclusive)\n");
    printf("Dame el limite inferior: ");
    scanf("%d", &lim_inf);
    printf("Dame el limite superior: ");
    scanf("%d", &lim_sup);
    rango = lim_sup-lim_inf+1;

    for(;;) {
        int resultado=rand();

        int mi_resultado = resultado%rango+lim_inf;
        printf("Ha salido el %d: - lo convierto en: %d\n", resultado, mi_resultado);
        getchar();
    }

    system("pause");
    return 0;
}
