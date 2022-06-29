/*
 * menu.c
 *
 *  Created on: 14 may. 2022
 *      Author: ignac
 */

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
    int indice = 0;
    char libre;


    libre = obtenerPasajeroLibre(pasajerosLista, TAM);

    idPasajero = *id;
    *id =  generadorId(idPasajero);

    if(pasajerosLista != NULL && TAM > 0)
    {
        if(obtenerPasajeroLibre(pasajerosLista, TAM))
        {
           if(indice == -1)
           {
               printf("Error. No hay lugar en el sistema");
           }
           else
            {
                printf("Ingrese el nombre del pasajero: ");
                fflush(stdin);
                scanf("%s", nombre);

                    while(strlen(nombre) > 51)
                    {
                        printf("Nombre demasiado largo. Reingrese el nombre del pasajero: ");
                        fflush(stdin);
                        scanf("%s", nombre);
                    }

                printf("Ingrese el apellido del pasajero: ");
                fflush(stdin);
                scanf("%s", apellido);

                    while(strlen(apellido) > 51)
                    {
                        printf("Apellido demasiado largo. Reingrese el apellido del pasajero: ");
                        fflush(stdin);
                        scanf("%s", apellido);
                    }

                printf("Ingrese el precio del vuelo: ");
                scanf("%f", &precio);


                printf("Ingrese el tipo de pasajero: ");
                scanf("%d", &tipoDePasajero);

                printf("Ingrese el codigo de vuelo correspondiente: ");
                fflush(stdin);
                scanf("%s", codigoDeVuelo);

                     while(strlen(codigoDeVuelo) > 10)
                    {
                        printf("Codigo de vuelo incorrecto. Reingrese el codigo de vuelo correspondiente: ");
                        fflush(stdin);
                        scanf("%s", codigoDeVuelo);
                    }

               printf("Ingrese el estado de vuelo: ");
               scanf("%d", &estadoVuelo);

                strcpy(pasajerosLista[indice].name, nombre);
                strcpy(pasajerosLista[indice].lastName, apellido);
                pasajerosLista[indice].price = precio;
                pasajerosLista[indice].typePassenger = tipoDePasajero;
                strcpy(pasajerosLista[indice].flycode, codigoDeVuelo);
                pasajerosLista[indice].statusFlight = estadoVuelo;
                pasajerosLista[indice].isEmpty = 1;

                todoOk = 1;
            }

       }

    }

        return todoOk;
}

int modificarPasajeroS(ePasajeros pasajerosLista[], int TAM)
{
    int todoOk = 0;
    int i;
    int salir = 'n';
    int idPasajeroMod;

    if(pasajerosLista != NULL && TAM > 0)
    {
        listarPasajeros(pasajerosLista, TAM);
        printf("Ingrese el ID del pasajero que desea modificar.\n");
        scanf("%d", &idPasajeroMod);

        if(buscarPasajeros(pasajerosLista, TAM, idPasajeroMod, &i))
        {
            if( i == -1)
            {
                printf("No hay un pasajero con ID %d\n", &idPasajeroMod);
            }
            else
            {
                mostrarPasajeros(pasajerosLista, TAM);

                do
                {

                    switch(menuModificarPasajero())
                    {
                        case 1: printf("Ingrese el nuevo nombre: ");
                                fflush(stdin);
                                scanf("%s", pasajerosLista[i].name);
                                break;

                        case 2: printf("Ingrese el nuevo apellido: ");
                                fflush(stdin);
                                scanf("%s", pasajerosLista[i].lastName);
                                break;

                        case 3: printf("Ingrese el nuevo precio: ");
                                scanf("%f", &(pasajerosLista[i].price));
                                break;

                        case 4: printf("Ingrese el nuevo codigo de vuelo: ");
                                fflush(stdin);
                                scanf("%s", pasajerosLista[i].flycode);
                                break;

                        case 5: printf("Ingrese el nuevo tipo de pasajero: ");
                        		fflush(stdin);
                                scanf("%d", &(pasajerosLista[i].typePassenger));
                                break;

                        case 6: printf("Ingrese el nuevo estado de vuelo: ");
                                scanf("%d", &(pasajerosLista[i].statusFlight));
                                break;

                        case 7: salir = 's';
                                break;
                    }

                     system("pause");

                }while(salir != 's');
            }
        }
        else
        {
            printf("Ocurrio un error al buscar al pasajero.\n\n");
        }
     }


        return todoOk;
}

int bajaPasajeros(ePasajeros pasajerosLista[], int TAM)
{
    int todoOk = 0;
        int indice;
        int idIngresado;
        char confirmar;

        if(pasajerosLista != NULL && TAM > 0)
        {
            listarPasajeros(pasajerosLista, TAM);
            printf("Ingrese el ID del pasajero que desea dar de baja: \n");
            scanf("%d", &idIngresado);

            if(buscarPasajeros(pasajerosLista, TAM, idIngresado, indice))
            {
                if(indice == -1)
                {
                    printf("No hay un pasajero con ID %d\n", idIngresado);
                }
                else
                {
                    mostrarPasajeros(pasajerosLista, TAM);
                    printf("Confirmar baja del pasajero?\n");
                    fflush(stdin);
                    scanf("%c", &confirmar);
                    if(confirmar == 's')
                    {
                        printf("La baja ha sido cancelada\n");
                    }
                    else
                    {
                        pasajerosLista[indice].isEmpty = 1;
                        printf("Baja realizada con exito!\n");

                    }

                }
            }
            else
            {
                printf("Ha ocurrido un error al buscar el pasajero\n");
            }

                todoOk = 1;
        }

            return todoOk;

}

