/*Ejercicio 6: 
Pasar de segundos a días, horas y minutos. 
Escribe un programa que pida al usuario que introduzca los segundos, y le conteste diciéndole el número de días, horas, minutos y segundos que son. 
*/

#include <stdio.h>
#include <stdlib.h>

int calcularS(int segundos, int f);


int main(){

    int segundos= 0;

    printf("Por favor a continuacion ingrese los segundos: ");
    scanf("%d", &segundos);

    int dias = calcularS(segundos, 0);
    int horas = calcularS(dias, 1);
    int minutos= calcularS(horas,2);
    return 0;
}

int calcularS(int segundos, int f){
    if (f==0){
        int dias = segundos / (60*60*24);
        segundos= segundos % (60*60*24);
        printf("Cantidad de dias: %d dias.\n",dias);
    }

    else if (f==1){
        int horas = segundos / (60*60);
        segundos= segundos % (60*60);
        printf("Cantidad de horas: %d horas.\n",horas);
    }

    else if (f==2){
        int minutos = segundos / 60;
        segundos= segundos % 60;
        printf("Cantidad de minutos: %d minutos.\n",minutos);
    }
    
    return segundos;
}
