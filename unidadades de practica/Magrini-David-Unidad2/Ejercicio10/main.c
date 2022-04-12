#include <stdio.h>
#include <stdlib.h>7
#include <math.h>

int main()

{   printf("Ejercicio10\n");
    int pendiente,ordenada;
    float ejex,ejey;
    printf("Ingrese la pendiente de la funcion: \n");
    scanf("%d",&pendiente);
    printf("Ingrese la ordenada al origen de la funcion: \n");
    scanf("%d",&ordenada);
    printf("Su funcion lineal quedo expresada de la siguiente forma: y= %dx + %d: \n",pendiente,ordenada);
    ejey=(pendiente*0)+ordenada;
    ejex=(0-ordenada)/pendiente;
    printf("La interseccion con el eje x esta dada por el punto: ( %.2f ,0)\n",ejex);
    printf("La interseccion con el eje y esta dada por el punto: ( 0 , %.2f )\n",ejey);
    return 0;
}
