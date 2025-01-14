/*
 * Este programa muestra en consola el texto correspondiente al mes
 * correspondiente con numero entero entre 1 y 12 introducido por teclado
 * si el valor de entrada no esta en el rango de 1 a 12 se mostrara un mensaje con el error
 *
 * jmmm 26/05/22
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mes;
    char respuesta;

    do {
        printf("Introduce un numero y te dire a que mes corresponde:  ");
        scanf("%d",&mes);

        if (mes == 1)
            printf("Enero\n");
        else if (mes == 2)
            printf("Febrero\n");
        else if (mes == 3)
            printf("Marzo\n");
        else if (mes == 4)
            printf("Abril\n");
        else if (mes == 5)
            printf("Mayo\n");
        else if (mes == 6)
            printf("Junio\n");
        else if (mes == 7)
            printf("Julio\n");
        else if (mes == 8)
            printf("Agosto\n");
        else if (mes == 9)
            printf("Septiembre\n");
        else if (mes == 10)
            printf("Octubre\n");
        else if (mes == 11)
            printf("Noviembre\n");
        else if (mes == 12)
            printf("Diciembre\n");
        else {
            printf("Ese mes no existe\n");
            system("pause");
            //return -1;
        }
        printf("ENTER para continuar, culaquier otra tecla para salir\n");
        fflush(stdin);
        scanf("%c", &respuesta);
    } while (respuesta=='\n');

    system("pause");
    return mes;   // Podemos aprovechar para enviar un codigo de retorno con el numero del mes

}
