#include <string.h>

int compararCaracteres(char texto1[],char texto2[]){
     int resultado = 0;
    for (int i = 0; i < strlen(texto1) && resultado == 0; i++){
        if (texto1[i] > texto2[i]){
            resultado = 1;
        }
        else if (texto1[i] < texto2[i]){
            resultado = -1;
        }
    printf ("El resultado de la comparacion es: %d \n",resultado);  
    }
}