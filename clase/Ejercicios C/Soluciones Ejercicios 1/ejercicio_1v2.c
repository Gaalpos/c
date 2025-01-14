
/*
 * Este programa realiza el c�lculo de la superficie corporal, utilizando la f�rmula de Mosteller
 * El valor de entrada para la altura se deber� indicar en cent�metros y para el peso en kilogramos
 * El resultado mostrar� la superficie corporal en m2
 *
 * Consultar https://interna.es/calculadora-ventana/superficie-corporal2/
 *
 * jmmm 26/05/22 Este codigo corresponde a la iteracion (v2) de un desarrollo incremental
 * Se incorporan instrucciones iterativas para ejecutar calculos y validaciones dentro de lazos
 * Puede comprobar las diferencias con posteriores iteraciones (vN)
 * donde cada version del programa incorpora nuevas funcionalidades
 */

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la funci�n system
#include <math.h>       // Incluye la funci�n sqrt

#define PESOMAX 300     // LIMITE PARA EL PESO EN KILOGRAMOS
#define ALTOMAX 250     // LIMITE PARA LA ALTURA EN CENTIMETROS
#define C1 3600         // CONSTANTE QUE SE UTILIZA EN LA FORMULA

int main(void)
{
    char respuesta='S';
    float peso, altura;

    do {

        system("cls"); // Llamada al sistema para borrar pantalla en cada iteraci�n
        printf("\nIntroduzca peso en kilogramos (0-%3d)   : ",PESOMAX);
        scanf("%f", &peso);
        printf("\nIntroduzca altura en centimetros (0-%3d): ",ALTOMAX);
        scanf("%f", &altura);

        while (peso <= 0 || altura <= 0 || peso>= PESOMAX || altura >= ALTOMAX) {  // VALIDACION DE DATOS DE ENTRADA
            printf("\nALGUNO DE LOS VALORES DE ENTRADA SE SITUA FUERA DEL RANGO ADMITIDO\n");
            printf("\nIntroduzca de nuevo los valores de entrada\n");
            printf("\nIntroduzca peso en kilogramos (0-%3d)   : ",PESOMAX);
            scanf("%f", &peso);
            printf("\nIntroduzca altura en centimetros (0-%3d): ",ALTOMAX);
            scanf("%f", &altura);
        }

        printf("\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
        printf("\n<S> para continuar (cualquier otra finaliza): ");
        /* La siguiente instrucci�n vacia el "buffer" del teclado */
        fflush(stdin); // �Es necesaria esta instrucci�n? Prueba a comentarla y observa el resultado
        scanf("%c",&respuesta);
        //res = getch(); Probar como opci�n alternativa

    } while(respuesta=='S' || respuesta =='s');

    return 0;
}
