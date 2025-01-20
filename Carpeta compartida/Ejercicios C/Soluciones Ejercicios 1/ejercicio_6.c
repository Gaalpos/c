/*
 * Este programa muestra en consola el texto correspondiente al mes
 * correspondiente con numero entero entre 1 y 12 introducido por teclado
 * si el valor de entrada no esta en el rango de 1 a 12 se mostrara un mensaje con el error
 * Aqui se introduce la sentencia switch - comparar codigo con el ejercicio 5
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

        switch(mes)
        {
            case 1: printf("Enero\n");
                    break;
            case 2: printf("Febrero\n");
                    break;
            case 3: printf("Marzo\n");
                    break;
            case 4: printf("Abril\n");
                    break;
            case 5: printf("Mayo\n");
                    break;
            case 6: printf("Junio\n");
                    break;
            case 7: printf("Julio\n");
                    break;
            case 8: printf("Agosto\n");
                    break;
            case 9: printf("Septiembre\n");
                    break;
            case 10:printf("Octubre\n");
                    break;
            case 11:printf("Noviembre\n");
                    break;
            case 12:printf("Diciembre\n");
                    break;
            default:printf("Ese mes no existe\n");
                    break;
                    // system("pause");
                    // return(-1);
        }
        printf("Desea continuar?(S/N): ");
        fflush(stdin);
        scanf("%c", &respuesta);
        if (respuesta!='s' && respuesta!='S') break;
    } while(1);
    //} while(respuesta=='s' || respuesta=='S');
    char saludo[]="Gracias por usar el programa\n";
    printf("%s", saludo);
    system("pause");

    return mes;   // Podemos aprovechar para enviar un codigo de retorno con el numero del mes

}
