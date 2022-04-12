#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("EJERCICIO 2\n");
    int base, altura, area;
    printf("Ingrese la base del triangulo: ");
    scanf("%d",&base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d",&altura);
    area = base*altura/2;
    printf("El area del triangulo es: %d", area);
    return 0;
}
