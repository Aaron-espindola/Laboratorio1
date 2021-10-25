/*Ejercicio 5: 
Pasar de días, horas y minutos a segundos. 
Escribe un programa que pida al usuario los siguientes datos: días, horas y minutos.
Y le conteste con la cantidad de segundos totales que son esos datos.*/

#include <stdio.h>
#include <stdlib.h>

int calcularSegundos(int dias,int horas, int minutos);
/*void convertirHoras(int b);
void convertirMinutos(int c);*/
//void mostrar();

void main(void){
    int dias= 0, horas=0, minutos=0;
    
    printf("Por favor ingresar el dia: ");
    scanf("%d", &dias);

    
    printf("A continuacion ingresar horas: ");
    scanf("%d", &horas);
    
    printf("Por ultimo ingresar minutos: ");
    scanf("%d", &minutos);

    int totalSegundos = calcularSegundos(dias,horas,minutos);

    printf("el resultado es: dia: %d, horas: %d, minutos: %d.\n los segundos totales son:%d",dias,horas,minutos,totalSegundos);

    return 0;

}

int calcularSegundos(int dias, int horas,int minutos){
    int segundos = (dias * 24 * 3600 ) + (horas* 3600) + (minutos * 60);

    return segundos;
};

/*void convertirHoras(int b){
    int horas = horas * 3600;
    return horas;
};
    

void convertirMinutos(int c){
    int minutos = minutos * 60;
    return minutos;
}*/


//void mostrar();

