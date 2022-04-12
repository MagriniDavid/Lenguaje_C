#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("EJERCICIO 4\n");
    int lado1,lado2,lado3,area,volumen;
    printf("Ingrese los valores de los lados del prisma:\n ");
    printf("\nLado 1: ");
    scanf("%d",&lado1);
    printf("\nLado 2: ");
    scanf("%d",&lado2);
    printf("\nLado 3: ");
    scanf("%d",&lado3);
    area = (2*lado1*lado2)+(2*lado1*lado3)+(2*lado2*lado3);
    volumen = lado1*lado2*lado3;
    printf("El volumen del prisma es: %d \n", volumen);
    printf("El area del prisma es: %d\n", area);
    return 0;
}
