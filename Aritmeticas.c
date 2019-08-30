#include "Aritmeticas.h"

int pedirEnetero(char msj[], int min, int max)///Vector; conjunto de elementos;
{

    int unNumero;
    printf("%s" , msj);
    scanf("%d", &unNumero);
    while(unNumero<min || unNumero>max)
    {
       printf("ERROR, \a %s", msj);
       scanf("%d", &unNumero);
    }
    return unNumero;

}


