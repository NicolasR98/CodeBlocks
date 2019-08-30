#include <stdio.h>
#include <stdlib.h>
void calcular(int num1, int num2, int operacion);
void mostrar();
void pedirDatos();
float sumar(int num1 , int num2);
float restar(int num1 , int num2);
float multiplicar(int num1 , int num2);
float dividir(int num1 , int num2);
int pedirDatos;

int main()
{

   printf("Ingrese que operacion quiere hacer: \n 1-Sumar");
   printf("\n2-Restar \n3-Multiplicar \n4-Dividir");
   int operacion = pedirDato();
   printf("Ingrese el primer numero");
   int num1 = pedirDato();
   printf("Ingrese el segundo numero");
   int num2 = pedirDato();
   /*calcular(1, 1 , 2);
   calcular(3, 7 , 1);
   calcular(10, 2 , 4);
   calcular(2, 3 , 3);*/
}

void calcular(int num1, int num2, int operacion)
{
    float resultado;
    switch(operacion)
    {
    case 1:
        resultado = num1+num2;
        break;

    case 2:
        resultado = num1-num2;
        break;

    case 3:
        resultado = num1 * num2;
        break;

    case 4:
        resultado = num1/num2;
        break;
    }


    printf("El resultado es: %f \n", resultado);

}

float sumar(int num1, int num2)
{
    return num1+num2;
}
float restar(int num1, int num2)
{
    return num1-num2;
}
float multiplicar(int num1, int num2)
{
    return num1*num2;
}
float dividir(int num1, int num2)
{
    return num1/num2;
}
void mostrar(float resultado)
{
    printf("El resultado es: %f" , resultado);
}

int pedirDatos
{
    scanf("%d" , num1)
    return num1;
}



