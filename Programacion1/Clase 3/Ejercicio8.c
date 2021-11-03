/*Ejercicio 8: 
Cálculo de la resistencia equivalente.
Escribir un programa que pida por teclado dos resistencias y calcule y presente la
resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)).*/

#include <stdio.h>
#include <stdlib.h>

int calcular (int r1,int r2);

int main (){
    int r1=0, r2= 0;

    printf("Valor de la Resistencia N°1: ");
    scanf("%d", &r1);

    printf("Valor de la resistencia N°2: ");
    scanf("%d", &r2);   

    int rt = calcular(r1,r2);

    printf("La resistencia total es de: %d",rt);
    //return 0;
}

int calcular(int r1,int r2){
    int resistenciaTotal = (r1*r2)/(r1+r2);

    return resistenciaTotal;

}