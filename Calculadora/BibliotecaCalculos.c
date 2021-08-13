
#include <stdio.h>
#include "bibliotecaCalculos.h"

float sumar(float numeroUno, float numeroDos) //funcion para realizar una suma
{
    float suma;

    suma = numeroUno + numeroDos;

    return suma;
}

float restar(float numeroUno, float numeroDos) //funcion para realizar una resta
{
    float resta;

    resta = numeroUno - numeroDos;

    return resta;
}

float dividir(float numeroUno, float numeroDos) //funcion para realizar una division
{
    float dividir;

    dividir = numeroUno / numeroDos;

    return dividir;
}

float multiplicar(float numeroUno, float numeroDos) //funcion para realizar una multiplicacion
{
    float multiplicar;

    multiplicar = numeroUno * numeroDos;

    return multiplicar;

}

float factorial(float numero) //funcion para realizar un factorial
{
    int i;
    long long int resultado = 1;

    for(i = numero; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

void calcularTodo(float numeroUno, float numeroDos, float* suma, float* resta, float* division, float* multiplicacion,
                  float* factorialUno, float* factorialDos) //funcion que llama a las funciones de los calculos
{

    *suma = sumar(numeroUno, numeroDos);
    *resta = restar(numeroUno, numeroDos);
    *division = dividir(numeroUno, numeroDos);
    *multiplicacion = multiplicar(numeroUno, numeroDos);
    if(numeroUno == 0) //se comprueba si el numero a factorizar es 0
    {
        *factorialUno = 1;
    }
    else
    {
        *factorialUno = factorial(numeroUno);
    }

    if(numeroDos == 0)
    {
        *factorialDos = 1;
    }
    else
    {
        *factorialDos = factorial(numeroDos);
    }
}

void mostrarResultados(float suma, float resta, float dividir, float multiplicar, float factorialUno, float factorialDos,
                       int divisionPorCero, int comprobarUno, int comprobarDos) //funcion para mostrar los resultados
{
    printf("\n\nRESULTADOS: \n");

    printf("\nLa suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    if(divisionPorCero == 0) // se evalua si el divisor es 0
    {
        printf("La division es: %.2f\n", dividir);
    }
    else
    {
        printf("No se puede dividir un operando por 0\n");
    }

    printf("La multiplicacion es: %.2f\n", multiplicar);

    if(comprobarUno == 0) // se comprueba que el numero a factorizar no sea negativo
    {
        printf("El factorial del primer operando es: %.2f\n", factorialUno);
    }
    else
    {
        printf("Solo se pueden factorizar numeros enteros.\n");
    }
    if(comprobarDos == 0)
    {
        printf("El factorial del segundo operando es: %.2f\n", factorialDos);
    }
    else
    {
        printf("Solo se pueden factorizar numeros enteros.\n");
    }
}

void comprobarDivisionPorCero(int* divisionPorCero, float numeroDos) //funcion para comprar si divisor es 0
{
    if(numeroDos == 0)
    {
        *divisionPorCero = 1;
    }
    else
    {
        *divisionPorCero = 0;
    }
}

void comprobarNumero(int* comprobar, float numero)
{
    //funcion para comprobar si el numero a factoizar es negativo o con decimales
    int entero;

    entero = numero;

    if (numero < 0) //Comprueba si es negativo
    {
        *comprobar = 1;
    }
    else if(numero - entero != 0) //comprueba si tiene decimales
    {
        *comprobar = 1;
    }
    else
    {
        *comprobar = 0;
    }
}
