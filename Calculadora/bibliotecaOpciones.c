#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaOpciones.h"
#include "bibliotecaCalculos.h"

void opciones(void)
{
    int opcion;
    float numeroUno = 0;
    float numeroDos = 0;
    float suma;
    float resta;
    float division;
    float multiplicar;

    float factorialUno;
    float factorialDos;
    int divisionPorCero = 0;
    int comprobarUno = 0;
    int comprobarDos = 0;

    printf(" ********** CALCULADORA by Ivan Inturri **********\n\n");
    do
    {
        printf("\n1.Ingresar el primer operando.\n");
        printf("2.Ingresar el segundo operando.\n");
        printf("3.Calcular todas las operaciones.\n");  //menu de opciones
        printf("4.Informar resultados.\n");
        printf("5.Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            numeroUno = pedirNumero("Ingrese el primer operando: ");// se invoca a la funcion de pedir un numero //
            comprobarNumero(&comprobarUno, numeroUno);
            break;
        case 2:
            numeroDos = pedirNumero("Ingrese el segundo operando: ");
            comprobarDivisionPorCero(&divisionPorCero, numeroDos);
            comprobarNumero(&comprobarDos, numeroDos);
            break;
        case 3: //se invoca a la funcion para calcular los resultados //
            calcularTodo(numeroUno, numeroDos, &suma, &resta, &division, &multiplicar, &factorialUno, &factorialDos);

            break;
        case 4: // muestra los resultados de las operaciones //
            system("pause");
            system("cls");
            printf("El primer numero es: %.2f\n", numeroUno);
            printf("El segundo numero es: %.2f\n", numeroDos);


            mostrarResultados(suma, resta, division, multiplicar, factorialUno, factorialDos, divisionPorCero, comprobarUno, comprobarDos);
            break;
        case 5:
            opcion = 5;
            break;
        default:
            printf("No ingreso una opcion correcta");
        }
        system("pause");
        system("cls");
        printf("El primer numero es: %.2f\n", numeroUno);
        printf("El segundo numero es: %.2f\n", numeroDos);
    }
    while(opcion != 5);
}

float pedirNumero(char texto[])
{
    float numero;

    printf("%s", texto);
    scanf("%f", &numero);

    return numero;
}
