#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PRECIO 600

/*Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas,
de cada persona debemos obtener los siguientes datos:
Nombre, estado civil ("soltero", "casado" o "viudo"), edad( solo mayores de edad, mas de 17),
temperatura corporal(validar por favor)
y sexo (validar).
nos cobra $600  por pasajero.
a) La cantidad de viudos de mas de 60 años
b) el nombre de la mujer soltera mas joven
c) cuanto sale el viaje total sin descuento y si hay mas del 50% del pasaje que tiene mas de 60 años
, el precio final  tiene  un descuento del 25%, que solo mostramos si corresponde.*/


int main()
{
    char nombre;
    char estadoCivil;
    int edad;
    char sexo;
    float temperatura;
    char respuesta;
    int contViudosMas60;
    char edadMujerJoven;
    char nombreMujerJoven;
    int bandera;
    float total;
    float descuento;
    float totalConDescuento;
    int contadorPasajeros;
    int contadorPasajerosMas60;


    contViudosMas60 = 0;
    contadorPasajeros = 0;
    bandera = 1;
    respuesta = 's';
    contadorPasajerosMas60 = 0;

    do
    {
        printf("Ingrese su nombre: ");
        fflush(stdin);
        scanf("%c", &nombre);

        printf("Ingrese estado civil s/c/v: ");
        fflush(stdin);
        scanf("%c", &estadoCivil);
        estadoCivil = tolower(estadoCivil);
        while(estadoCivil != 's'&& estadoCivil != 'c'&& estadoCivil != 'v')
        {
            printf("ERROR. Ingrese estado civil s/c/v: ");
            fflush(stdin);
            scanf("%c", &estadoCivil);
            estadoCivil = tolower(estadoCivil);
        }

        printf("Ingrese su edad: (+17)");
        scanf("%d", &edad);
        while(edad<18)
        {
            printf("ERROR. ingrese su edad (+17): ");
            scanf("%d", &edad);
        }

        printf("Ingrese su temperatura: (entre 34 y 41)");
        scanf("%f", &temperatura);
        while(temperatura<34 || temperatura>41)
        {
            printf("ERROR. Ingrese su temperatura: (entre 34 y 41)");
            scanf("%f", &temperatura);
        }

        printf("Ingrese sexo m/f: ");
        fflush(stdin);
        scanf("%c", &sexo);
        sexo = tolower(sexo);
        while(sexo != 'f'&& sexo != 'm')
        {
            printf("ERROR. Ingrese sexo m/f: ");
            fflush(stdin);
            scanf("%c", &sexo);
            sexo = tolower(sexo);
        }

        if(sexo == 'f' && estadoCivil == 's' && (bandera == 1 || edad<edadMujerJoven))
        {
            nombreMujerJoven = nombre;
            edadMujerJoven = edad;
            bandera = 0;

        }
        if(edad >60 )
        {
            contadorPasajerosMas60++;
        }
        if(estadoCivil == 'v')
        {
            contViudosMas60++;
        }





        contadorPasajeros++;


        printf("Desea seguir ingresando algun pasajero?: ");
        fflush(stdin);
        scanf("%c", &respuesta);

    }
    while(respuesta =='s');

    printf("La cantidad de viudos mayores a 60 es: %d/n", contViudosMas60);

    if(bandera == 0)
    {
        printf("b- No hubo pasajeras solteras\n");
    }
    else
    {
        printf("b- La pasajeras mas joven se llama %c y tiene %d años\n", edadMujerJoven, nombreMujerJoven);
    }

    printf("c- El total del viaje es $ %.2f\n");
    if(contadorPasajeros / 2 < contadorPasajerosMas60)
    {
        descuento = total *.25;
        totalConDescuento = total - descuento;
        printf("c- El total con descuento es $ %.2f\n", totalConDescuento);
    }

    return 0;
}
