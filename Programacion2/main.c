
#include <stdlib.h>
#include "Aritmeticas.h"

int factorial(int);
int main()
{
    int resultado;
    resultado = factorial(12);
    printf("El factorial es: %d", resultado);

    return 0;

  /*
    int edad = pedirEnetero("Ingrese Edad: ", 1, 100);
    int legajo = pedirEnetero("Ingrese Legajo: ",0, 2000);
    int nota = pedirEnetero("Ingrese Nota: ", 1, 10);
    int documento = pedirEnetero("Ingrese el Documento: ",0,10000);


    ///printf("%d--%d--%d--%d\n\n", edad, legajo, nota, documento);
    printf("Tu edad es: %d \n Tu legajo es: %d \n Tu nota es: %d \n Tu documento es: %d\n\n", edad, legajo, nota, documento);
    return 0; */
}

int factorial(int numero)
{
    int resultado;

    if (numero==0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero-1);
    }

    return resultado;
}



/*int variableG = 80; ///variable global;
int main()
{
    funcion(4);
    variableGlobal = 70;
    printfd"d%" , variableGlobal);
    return 0;
}

int funcion (int variableGlobal)  /// se recomienda hacer variables en las funciones;
{
    variableGlobal = 100;

    printf("n\d%", variableGlobal);
}*/


///No se recomienda hacer variables globales;
