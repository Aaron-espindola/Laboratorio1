
int calcularCaracteres(char texto1[]){
    int contador= 0 ;
    for (int i = 0; i < MAXIMO ; i++){
        if (texto1[i] == '\0'){
            break;
        }
        contador++;
    }
    printf ("La cantidad de caracteres del texto es: %d \n",contador);
}