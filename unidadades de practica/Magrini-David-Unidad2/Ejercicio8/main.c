#include <stdio.h>
#include <stdlib.h>

int main()
{   int numero;
   while(numero!=0){
    printf("*)Ingrese un numero del 1 al 4 para saber el numero de salida asignado para la entrada elegida: \n");
    printf("\n*)Si desea salir presione 0\n");
    scanf("%i",&numero);
    switch (numero){
        case 1 : printf("Numero de entrada seleccionado : 1\n");
                printf("Numero de salida : 1\n");
        break;
        case 2 : printf("Numero de entrada seleccionado : 2\n");
                printf("Numero de salida : 4\n");
        break;
        case 3 : printf("Numero de entrada seleccionado : 3\n");
                printf("Numero de salida : 9\n");
        break;
        case 4 : printf("Numero de entrada seleccionado : 4\n");
                printf("Numero de salida : 16\n");
        break;
        default :
            if(numero==0){
                break;
            }else{
            printf("Solo se aceptan numeros del 1 al 4\n");
            break;
            }
    }}
    return 0;
}
