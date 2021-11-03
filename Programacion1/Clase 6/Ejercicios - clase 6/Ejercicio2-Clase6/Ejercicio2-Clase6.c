#include <stdio.h>
#include <stdlib.h>
#include "Ejercicio2-Clase6.h"

#define MAXIMO 20

/*Realizar un programa en C que compare 2 cadenas de caracteres, una declarada en el programa con otra ingresada por teclado.
 El equivalente a la función strcmp de la librería string.h*/

 int compararCaracteres(char texto1[],char texto[]);

 int main(){

     char texto1[MAXIMO];
     char texto2[MAXIMO];
     //int resultado= 0;
     printf("Ingrese el 1er texto: ");
     gets(texto1);

     printf("Ingrese el 2er texto para calcular: ");
     gets(texto2);


     int comparacion = compararCaracteres(texto1,texto2);

     //printf("la comparativa del 1er texto y el 2do es:  %d",comparacion);
 }
