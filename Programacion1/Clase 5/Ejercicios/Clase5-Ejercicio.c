//Generar un ABM para un vector del tipo float de 10 elementos.

#include <stdio.h>
#include <stdlib.h>
#include "Clase5-Ejericio.h"


int mostrarMenu();
float ingresarNumero(float numeros[],int cantidad);
float modificarNumero(float numeros[]);
void numeroModificado(float numeros[], int elemento, float nuevoNumero); 
float sacarPromedio(float numeros[],int cantidad);
void mostrarNumYProm(float numero[], int cantidad, int promedio);
float limpiarNumeros(float numero[], int cantidad);

int main(){

    float numeros[3];
    int opcion= 0;
    int promedio= 0;

    while (opcion !=4){       
        mostrarMenu();
        scanf("%d",&opcion);
        switch (opcion){
            case 1 :
                ingresarNumero(numeros,3);            
                break;
            case 2 :
                modificarNumero(numeros);            
                break;
            case 3 :
                promedio= sacarPromedio(numeros,3);            
                break;
            case 4 :
                mostrarNumYProm(numeros,3, promedio);            
                break;    
            case 5 :
                limpiarNumeros(numeros,3);            
                break;    
            
            default:
            printf("La opcion ingresada no es correcta por favor ingrese la opcion correspondiente");   
        }

    }  
    return 0;
}

//FUNCIONES







