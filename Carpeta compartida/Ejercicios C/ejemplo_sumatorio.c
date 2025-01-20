#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, total=0, contador=0;

    for(i=1;i<200*2;i=i+2)
    {
        total = total+i;
        contador=contador+1;
        printf("Contador: %d Indice: %d Total: %d\n", contador, i, total);

    }

    printf("El total de los primeros 200 numeros impares es: %d\n", total);
    system("pause");
}
