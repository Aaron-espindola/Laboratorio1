#include <stdio.h>
#include <stdlib.h>


/**Ejercicio 1: 
Cálculo de precios con descuento 
Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te diga el precio con descuento. Por ejemplo, si el precio que introduce el usuario es 300 y el descuento 20, el programa dirá que el precio final con descuento es de 240. 
*/

int main(){

    int precio=0;
    int descuento=0;
    int total=0;

    printf("Ingrese el precio: ");
    scanf("%d", &precio);

    printf("Ingrese el descuento: ");
    scanf("%d", &descuento);


    total = precio - ((descuento*precio)/100);  

    printf("el numero es : %d", total);

    return 0;

}
