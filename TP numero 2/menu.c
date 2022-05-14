#include <stdio.h>
#include <stdlib.h>

#include "pasajeros.h"
#include "menu.h"

int menu()
{
    int eleccion;

    do
    {
        printf("---Menu De Pasajeros---\n");
        printf( "1.Alta\n");
        printf("2.Modificacion\n");
        printf( "3.Baja\n");
        printf( "4.Informar\n");
        printf( "5.Salir\n");
        scanf("%d", &eleccion);

    if(eleccion<0 || eleccion>6)
    {
        printf("Error, ingrese una opcion valida");
    }

    }while(eleccion<0 || eleccion>6);

        return eleccion;
}


int altaPasajero(ePasajeros pasajerosLista[],int TAM, int* id)
{
    int idPasajero;
    char nombre[51];
    char apellido[51];
    float precio;
    int tipoDePasajero;
    char codigoDeVuelo[10];
    int estadoVuelo;
    int todoOk = 0;
    int indice;
    int libre;

    libre = obtenerPasajeroLibre(pasajerosLista, TAM);

    if(pasajerosLista != NULL && TAM > 0)
    {
        if(libre != 0)
        {
           if(indice == -1)
           {
               printf("Error. No hay lugar en el sistema");
           }
           else
            {
                printf("Ingrese el nombre del pasajero: ");
                scanf("%s", &nombre);
                fflush(stdin);

                    while(strlen(nombre) > 51)
                    {
                        printf("Ingrese el nombre del pasajero: ");
                        scanf("%s", &nombre);
                        fflush(stdin);
                    }

                    printf("Apellido demasiado largo. Reingrese el apellido del pasajero: ");
                    scanf("%s", &apellido);
                    fflush(stdin);

                    while(strlen(apellido) > 51)
                    {
                        printf("Apellido demasiado largo. Reingrese el apellido del pasajero: ");
                        scanf("%s", &apellido);
                        fflush(stdin);
                    }

                printf("Ingrese el precio del vuelo: ");
                scanf("%d", &precio);

                printf("Ingrese el tipo de pasajero: ");
                scanf("d", &tipoDePasajero);

                printf("Ingrese el codigo de vuelo correspondiente: ");
                scanf("s", &codigoDeVuelo);
                fflush(stdin);

                     while(strlen(codigoDeVuelo) > 10)
                    {
                        printf("Ingrese el codigo de vuelo correspondiente: ");
                        scanf("s", &codigoDeVuelo);
                        fflush(stdin);
                    }

               printf("Ingrese el estado de vuelo: ");
               scanf("d", &estadoVuelo);

            }

       }

    }


}


