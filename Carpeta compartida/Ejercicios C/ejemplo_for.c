#include <stdio.h>

int main() {

    unsigned char contador=0;

    for (;;) {
        printf("Valor del contador: %d %c\n", contador, contador);
        contador=contador+1;
        getchar();
    }
}
