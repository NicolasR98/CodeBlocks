#include <stdio.h>
#include <stdlib.h>
void calcular(int num1, int num2, int operacion);
void saludar(); //marco prototipo
int sumar(int numero1 , int numero2); //pongo tipo de dato

int main()//implemento prototipo
{
   calcular(1, 1 , 2);
   calcular(3, 7 , 1);
   calcular(10, 2 , 4);
   calcular(2, 3 , 3);
   int valor;
   valor = sumar (33 , 77);
   printf("La suma es: %d \n" , valor);
   saludar();
   return 0;
}
void saludar() //hago funcionar prototipo
{

    printf("Hello world!\n");
    return 0;
}

  int sumar(int numero1 , int numero2) // Variable con parametro
{
    int suma = numero1 + numero2;
    //sumar = sumar + sumar;
    //printf("Suma  %d \n" , numero1); //le agrego una mascara dependiendo el tipo de dato
    return suma;
}

void calcular (int num1, int num2, int operacion)
{
    int resultado;
    if(operacion == 1)
    {
     resultado = num1 + num2;
    }

    else if(operacion == 2)
        {
         resultado = num1 - num2;
        }

    else if(operacion == 3)
    {
        resultado = num1 * num2;
    }

    else if(operacion == 4)
    {
        resultado = num1 / num2;
    }

    printf("%d, resultado: " , resultado);

}




//al poner () defino una funcion; ej int suma ();

// void se pone cuando no retorna nada

//int main()
