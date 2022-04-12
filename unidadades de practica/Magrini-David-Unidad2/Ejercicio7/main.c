#include <stdio.h>
#include <stdlib.h>

int main()
{   int numero,centenas,decenas,unidad;
    printf("Ejercicio 7 \n");
    printf("Ingrese el numero de 3 cifras para separar: ");
    scanf("%i",&numero);
    centenas=numero/100;
    decenas=(numero-(centenas*100))/10;
    unidad=numero-(centenas*100+decenas*10);
    printf("\nLa primera cifra es: %i",centenas);
    printf("\nLa segunda cifra es: %d",decenas);
    printf("\nLa tercera cifra es: %d",unidad);
    return 0;
}
