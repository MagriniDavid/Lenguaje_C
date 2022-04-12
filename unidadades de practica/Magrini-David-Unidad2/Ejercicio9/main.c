#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Introduce una letra\n");
    scanf("%c",letra);
    gets(letra);
    printf("El código ASCII de la letra %c es %i", letra, letra);
    /*En duda*/

return 0;
}
