#include <stdio.h>
#include <stdlib.h>
 #include <math.h>

int main()
{
     printf("EJERCICIO 3\n");
    float radio,longitud,area,pi;
    printf("Ingrese el radio de la circunferencia: ");
    scanf("%f",&radio);
    pi=3.14;
    longitud = 2 * pi * radio;
    area = pi*pow(radio,2);
    printf("La longitud de la circunferencia es: %f \n", longitud);
    printf("El area de la circunferencia es: %f\n", area);
    return 0;
}
