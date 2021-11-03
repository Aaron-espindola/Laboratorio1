#include <stdio.h>
#include <stdlib.h>

/*Ejercicio 2: 
Cálculo de área y perímetro 
Escribe un programa que pregunte al usuario los dos lados de un rectángulo y presente por pantalla el cálculo del perímetro (suma de los lados)
y el área (base por altura). */

int main(){

    float base;
    float altura;
    float area;
    
    float perimetro;
    

    printf("Ingrese la base: ");
    scanf("%f",&base);

    printf("Ingrese la altura: ");
    scanf("%f",&altura);


    area = base * altura ;
    perimetro = base + altura +base +altura;

    printf("base %.2f x altura %.2f = %.2f Area\n",base, altura, area);

    printf("La suma de todos sus lados = lado 1 %.2f + lado 2 %.2f + lado 3 %.2f + lado 4 %.2f = %.2f perimetro: ",base,altura,base,altura,perimetro);

    return 0;

}