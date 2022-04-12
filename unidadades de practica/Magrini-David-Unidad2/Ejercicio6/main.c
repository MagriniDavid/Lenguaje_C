#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("EJERCICIO 6\n");
    int importe,porcentaje;
    float pago;
    printf("Ingrese el importe inicial (En pesos): ");
    scanf("%d",&importe);
    printf("\nIngrese el procentaje del descuento (15,20,25): ");
    scanf("%d",&porcentaje);
    pago=importe-(importe*porcentaje/100);
    printf("\nEl importe que debera pagar es de: %.2f pesos",pago);

    return 0;
}
