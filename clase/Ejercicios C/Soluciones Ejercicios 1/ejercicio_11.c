/*
   DETERMINAR NUMEROS PRIMOS Y FACTORIZAR
*/

/*
 * Este programa introducido por el usuario corresponde al algoritmo para determinar si un numero es primo
 * Un numero primo solo sera divisible (resto de la division igual a cero) entre si mismo
 * Aqui asumimos que el numero 1 es primo y por tanto se comprueban enteros mayores o iguales a 2
 * Como en el ejercicio se solicita respuesta con el caracter Y se han puesto los textos informativos en ingles
 *
 * jmmm 26/05/22
 */

 // http://mimosa.pntic.mec.es/jgomez53/matema/conocer/10000_primos.htm

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // Biblioteca que me permite conocer los valores limite de varios tipos de datos

int main()

{

    int i, numero;
    char res='Y';

    do {

        printf("\nIntroduce an integer value between [2..%d]: ", INT_MAX);
        scanf("%d",&numero);

        if (numero < 2 ) {
            printf("Bad input; try again\n");
            system("pause");
            continue; //
        }

        for(i=2;i<numero;i++)
            if (numero%i == 0) {
                printf ("%d is divisible by %d then IS NOT A PRIME NUMBER\n\n", numero, i);
                break;
            }
        if (i == numero) printf ("%d IS A PRIME NUMBER\n\n", numero);

        printf("\n<Y/y> to introduce a new value (another key to finish): ");
        /* La siguiente instrucción vacia el "buffer" del teclado */
        fflush(stdin); // ¿Es necesaria esta instrucción? Prueba a comentarla y observa el resultado
        scanf("%c",&res);
    } while(res=='Y' || res =='y');
    system("pause");
    return 0;
}
