#include <stdio.h>

//Declaramos las variables
int main() {
    int valor;
    //Imprimir mensaje y leer el valor
    printf("Ingrese el Valor: \n");
    scanf ("%i", &valor);

    if ((valor % 2) == 0)
    {
        printf("\nEl valor ingresado %i ES PAR", valor);
    }
    else
    {
        printf ("El valor ingresado no es PAR");
    }
    return 0;
}