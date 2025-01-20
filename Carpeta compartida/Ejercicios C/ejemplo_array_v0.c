#include <stdio.h>
#include <string.h>

void interfase(char texto[]);
int main() {
    char mi_mensaje[] ="En un lugar de la mancha";

    printf("Posicion de memoria del array mi_mensaje: %p\n", mi_mensaje);


    for(int i=0;mi_mensaje[i]!='\0';i++) printf("Posicion: %d Valor: %c\n", i, mi_mensaje[i]);

    printf("Texto inicial: %s\n", mi_mensaje);
    interfase(mi_mensaje);
    printf("Texto final: %s\n", mi_mensaje);
}

void interfase(char texto[]) {
    strcpy(texto, "Adios mundo");
    return;
}
