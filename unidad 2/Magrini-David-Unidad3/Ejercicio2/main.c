#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Ingrese  numero\n");
    scanf("%d",&num1);

    if(num1<0)
    {
        printf("El  numero es negativo\n");
    }
    else if(num1>0)
    {
        printf("El  numero es positivo\n");
    }
    else
    {
        printf("El  numero es cero\n");
    }
}
