/*
 * menu.c
 *
 *  Created on: 9 jun. 2022
 *      Author: ignacio
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int altaPasajero(ePassenger pasajero)
{
	int id;
	char nombre[50];
	char apellido[50];
	float precio;
	int tipoPasajero;
	char codigoVuelo[7];
	int estadoVuelo;
    int todoOk = 0;
    int indice = 0;
    int agregarPasajeros;

    if(pasajero != NULL)
    {
    	printf("Ingrese el nombre del pasajero: ");
        scanf("%s", &nombre);
        fflush(stdin);

		   do
			{
			   printf("Ingrese el nombre del pasajero: ");
				scanf("%s", &nombre);
				fflush(stdin);
			}while(strlen(nombre) > 50);

        printf("Ingrese el apellido del pasajero: ");
        scanf("%s", &apellido);
        fflush(stdin);

			do
			{
				printf("Apellido demasiado largo. Reingrese el apellido del pasajero: ");
				scanf("%s", &apellido);
				fflush(stdin);
			}while(strlen(apellido) > 50);

        printf("Ingrese el precio del vuelo: ");
        scanf("%d", &precio);

        printf("Ingrese el tipo de pasajero: ");
        scanf("%d", &tipoPasajero);

        printf("Ingrese el codigo de vuelo correspondiente: ");
        scanf("%s", &codigoVuelo);
        fflush(stdin);

			do
			{
				printf("Ingrese el codigo de vuelo correspondiente: ");
				scanf("%s", &codigoVuelo);
				fflush(stdin);
			}while(strlen(codigoVuelo) > 7);

        printf("Ingrese el estado de vuelo: ");
        scanf("%d", &estadoVuelo);

        agregarPasajeros = addPassengers(ePassenger pasajero[], int id, char nombre[], char apellido[], float precio, int tipoDePasajero, char codigoVuelo[], int estadoVuelo)
        todoOk = 1;
    }
    return todoOk;
}



int addPassengers(ePassenger pasajero[], int id, char nombre[], char apellido[], float precio, int tipoDePasajero, char codigoVuelo[], int estadoVuelo)
{
    int retorno = 0;
    int confirmacion;

    if(pasajero != NULL && id > 0 && nombre != NULL && apellido != NULL && precio > 0 && tipoDePasajero > -1 && codigoVuelo != NULL && estadoVuelo > -1)
    {
    	ePassenger aux;

        aux.id = id;
        strcpy(aux.nombre, nombre);
        strcpy(aux.apellido, apellido);
        aux.precio = precio;
        aux.tipoPasajero = tipoDePasajero;
        strcpy(aux.codigoVuelo, codigoVuelo);
        aux.estadoVuelo = estadoVuelo;

        do
        {
            printf("Desea confirmar el alta del pasajero?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%d", &confirmacion);
        }while(confirmacion!= 1 && confirmacion != 2);

            if(confirmacion == 1)
            {
            	pasajero->id = aux.id;
                strcpy(pasajero->nombre, aux.nombre);
                strcpy(pasajero->apellido, aux.apellido);
                pasajero->precio = aux.precio;
                pasajero->tipoPasajero = aux.tipoPasajero;
                strcpy(pasajero->codigoVuelo, aux.codigoVuelo);
                pasajero->estadoVuelo = aux.estadoVuelo;

                retorno = 1;
            }
            else
            {
                if(confirmacion == 2)
                {
                    printf("Se ha cancelado la operacion\n");
                }
                else
                {
                    printf("Por favor ingrese una opcion valida\n");
                    printf("1.Si\n");
                    printf("2.No\n");
                }

                return retorno;
            }

    }
}

int bajaPasajero(ePassenger pasajero)
{
	int retorno = 1;
	int idIngresado;

	if(pasajero != NULL)
	{

		printf("Ingrese el ID del pasajero que quiere modificar: \n");
		scanf("%d", &idIngresado);





	}

int modificarPasajero(ePassenger pasajero)
{




}







}



