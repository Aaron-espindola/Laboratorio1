#include <stdio.h>

//MENU//
int mostrarMenu(){
    printf("\n");
    printf("\n");
    printf("**************************************\n");
    printf("** 1-Ingresar Numero                **\n");
    printf("**                                  **\n");
    printf("** 2-Modificar Numeros              **\n");
    printf("**                                  **\n");
    printf("** 3-Sacar el promedio              **\n");
    printf("**                                  **\n");
    printf("** 4-Ver Numeros ingresados         **\n");
    printf("**                                  **\n");
    printf("** 5-Quitar todos los numeros       **\n");
    printf("**                                  **\n");
    printf("**************************************\n");
    printf("\n");
    printf("\n");
    printf("Eliga una opcion: ");
}

//INGRESAR NUMEROS//
float ingresarNumero(float numeros[],int cantidad){

    for (int i = 0; i < cantidad; i++){

        printf("Ingrese numeros decimales: ");
        scanf("%f", &numeros[i]);
    }
    return 0; 
}

//MODIFICAR NUMEROS//
float modificarNumero(float numeros[]){
    int posicion= -1;
    float nuevoNumero= 0;

    printf("Ingrese la posicion del numero a modificar: \n");
    scanf("%d", &posicion);

    printf("Ingrese el nuevo valor: \n");
    scanf("%f", &nuevoNumero);

    numeroModificado(numeros, posicion , nuevoNumero);

    return 0; 
}

void numeroModificado(float numeros[], int elemento, float nuevoNumero){
    numeros[elemento] = nuevoNumero;

}

//SACAR EL PROMEDIO

float sacarPromedio(float numeros[],int cantidad){
    int promedio= 0;
    int acumulador= 0;
    for (int i = 0; i < cantidad; i++){
        acumulador = acumulador + numeros[i];         
    }
    promedio = acumulador / cantidad;
    return promedio;
}

//MOSTRAR NUMEROS//

void mostrarNumYProm(float numero[], int cantidad, int promedio){

    printf("\n Numeros dentro del ARRAY: ");
    for (int i = 0; i < cantidad; i++){
        printf("%2.2f ,",numero[i]);
    }
    printf(" El promedio es: %2.2f\n",promedio); 
    
}

//LIMPIAR NUMEROS//

float limpiarNumeros(float numeros[], int cantidad){

    for(int i = 0 ; i < cantidad; i++ ){
        numeros[i]  = 0.0;
    }
    return 0; 
}