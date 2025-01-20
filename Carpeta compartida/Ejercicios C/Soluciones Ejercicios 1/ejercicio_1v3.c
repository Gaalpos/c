
/*
 * Este programa realiza el cálculo de la superficie corporal, utilizando la fórmula de Mosteller
 * El valor de entrada para la altura se deberá indicar en centímetros y para el peso en kilogramos
 * El resultado mostrará la superficie corporal en m2
 *
 * Consultar https://interna.es/calculadora-ventana/superficie-corporal2/
 *
 * jmmm 26/05/22 Este codigo corresponde a la iteracion (v3) de un desarrollo incremental
 * Se incorpora la posibilidad de ejecutar el programa ingresando los valores de entrada
 * como parametros desde la linea de comandos y se guardan los resultados en el archivo de texto registro.txt
 * Tambien se muestra como usar funciones de bibliotecas creadas por el usuario
 * Esta version corresponderia con una posible distribucion del ejecutable
 * Puede comprobar las diferencias con anteriores iteraciones (vN)
 */

#include <stdio.h>      // Incluye las funciones printf y scanf
#include <stdlib.h>     // Incluye la función system
#include <math.h>       // Incluye la función sqrt
#include "include\AFD_consola.h"

#define PESOMAX 300     // LIMITE PARA EL PESO EN KILOGRAMOS
#define ALTOMAX 250     // LIMITE PARA LA ALTURA EN CENTIMETROS
#define C1 3600         // CONSTANTE QUE SE UTILIZA EN LA FORMULA

int main(int argc, char *argv[])
{
    char res='S';
    float peso, altura;

     // Color de fondo y texto

    //Utilizando la libreria AFD_consola.h (encapsulamiento)
    ConsolaColors(LIGHTGRAY, GREEN);

    FILE *logfile; // Las lineas con este comentario se pueden activar para llevar un registro (log)
    logfile = fopen("registro.txt", "a"); // Abre el archivo registro para anexar datos

    if (argc != 1) {
        if (argc != 3) {
            ConsolaColors(LIGHTGRAY, RED);
            printf("Uso del programa: %s PESO ALTURA\n", argv[0]);
            ConsolaColors(LIGHTGRAY, GREEN);
            fclose(logfile);
            return -1;
        }
        peso = atof(argv[1]); // funcion atof: convierte una cadena de caracteres en float
        altura = atof(argv[2]);
        printf("\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
        fprintf(logfile, "LA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
        fclose(logfile);
        return 0;
    }

    do {

        system("cls"); // Llamada al sistema para borrar pantalla en cada iteración
        printf("\nIntroduzca peso en kilogramos (0-%3d)   : ",PESOMAX);
        scanf("%f", &peso);
        printf("\nIntroduzca altura en centimetros (0-%3d): ",ALTOMAX);
        scanf("%f", &altura);

        while (peso <= 0 || altura <= 0 || peso>= PESOMAX || altura >= ALTOMAX) {  // VALIDACION DE DATOS DE ENTRADA
            ConsolaColors(LIGHTGRAY, RED);
            printf("\nALGUNO DE LOS VALORES DE ENTRADA SE SITUA FUERA DEL RANGO ADMITIDO\n");
            printf("\nIntroduzca de nuevo los valores de entrada\n");
            ConsolaColors(LIGHTGRAY, GREEN);
            printf("\nIntroduzca peso en kilogramos (0-%3d)   : ",PESOMAX);
            scanf("%f", &peso);
            printf("\nIntroduzca altura en centimetros (0-%3d): ",ALTOMAX);
            scanf("%f", &altura);
        }

        printf("\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
        fprintf(logfile, "LA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));

        printf("\n<S> para continuar (cualquier otra finaliza): ");
        /* La siguiente instrucción vacia el "buffer" del teclado */
        fflush(stdin); // ¿Es necesaria esta instrucción? Prueba a comentarla y observa el resultado
        scanf("%c",&res);
        //res = getch(); Probar como opción alternativa

    } while(res=='S' || res =='s');

    fclose(logfile);
    return 0;
}
