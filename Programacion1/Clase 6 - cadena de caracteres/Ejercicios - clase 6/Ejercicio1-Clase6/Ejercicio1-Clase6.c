#include <stdio.h>
#include <stdlib.h>
#include "Ejercicio1-Clase6.h"

#define MAXIMO 100

/*Realizar un programa en C que calcule la cantidad de caracteres de una cadena ingresada por consola. 
equivalente a la función strlen de la libreria string.h*/
int calcularCaracteres(char texto1[]);

int main(){
    char texto1[MAXIMO];

    printf("Ingrese el texto a calcular: ");
    gets(texto1);

    int cantidad = calcularCaracteres(texto1);   
    //printf("La cantidad de caracteres es: %d",cantidad);
}
