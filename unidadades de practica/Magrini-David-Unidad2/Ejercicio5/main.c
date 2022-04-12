#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("EJERCICIO 5\n");
    float distancia,tiempo,vmedia;
    printf("Ingrese la distancia recorrida por el proyecil (En metros): ");
    scanf("%f",&distancia);
    printf("\nIngrese el tiempo que tardo (en segundos): ");
    scanf("%f",&tiempo);
    vmedia = distancia/tiempo;
    printf("\nLa velocidad media del proyectil fue: %.2f m/s",vmedia);
}
