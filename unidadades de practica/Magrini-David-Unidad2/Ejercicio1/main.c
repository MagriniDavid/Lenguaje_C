#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("EJERCICIO 1\n");
    int base, altura, area;
    printf("Ingrese la base del rectangulo: ");
    scanf("%d",&base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%d",&altura);
    area = base*altura;
    printf("El area del rectangulo es: %d", area);
    return 0;
}
