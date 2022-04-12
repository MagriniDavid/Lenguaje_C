#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Ingrese  numero\n");
    scanf("%d",&num1);

    if(num1==1 || num1==3 || num1==5)
    {
        printf("El  numero es impar\n");
    }
    else if(num1==2 || num1==4 || num1==6)
    {
        printf("El  numero es par\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}
