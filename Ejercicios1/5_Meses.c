/*

 Meses del a�o. Dise�ar un algoritmo en C que permita determinar el nombre del mes del
a�o (Enero, Febrero, Marzo�) en funci�n del n�mero entero con el que se corresponda. El
programa debe ser capaz de detectar si el numero introducido se encuentre entre 1 y 12 para
poder devolver el mes correspondiente, en caso contrario deber� mostrar un mensaje de
error. Nota: Emplear la sentencia IF
*/

#include <stdio.h>

main(){

char meses[12][10] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

int mes;
printf("Escribe el numero de un es: \n");
 scanf("%i",&mes);

if (mes >= 1 && mes <=12){
    printf("%s",meses[mes-1]);
}else{
    printf("Numero invalido");
}


}
