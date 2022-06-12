/*
 * Passenger.c
 *
 *  Created on: 19 may. 2022
 *      Author: ignacio
 */

#include <stdio.h>
#include <stdlib.h>
#include "Passenger.h"

int listarPasajeros(LinkedList* pArrayListPassenger)
{
    int retorno = 0;
    ePassenger pasajeros;

    if(pasajeros != NULL)
    {
        system("cls");
        printf("          *** Lista de Pasajeros ***\n\n");
        printf(" ID      Nombre     Apellido     Precio     tipo de Pasajero    Codigo de Vuelo   Estado de Vuelo  \n");
        printf("-----------------------------------------------------------------------------------------------------\n");





void mostrarPasajeros(ePassenger pasajeros)
{
	ePassenger aux;

   printf("  %4d       %s       %s      %d    %s    %s   %s\n", aux.id, aux.nombre, aux.apellido, aux.precio, aux.tipoPasajero,
		     aux.codigoVuelo, aux.estadoVuelo);

}


int Passenger_setId(ePassenger* aux, int id)
{
	int retorno = 0;

	if(aux != NULL && id != NULL)
	{
		aux->id = id;

		retorno = 1;
	}

	return retorno;
}

int Passenger_getId(ePassenger* aux, int* id)
{
	int retorno = 0;

	if(aux != NULL && id != NULL)
	{
		id = aux->id;

		retorno = 1;
	}

	return retorno;
}

int Passenger_setNombre(ePassenger* aux, char* nombre)
{
	int retorno = 0;

	if(aux != NULL && nombre != NULL)
	{
		strcpy(aux->nombre , nombre);

		retorno = 1;
	}

	return retorno;
}

int Passenger_getNombre(ePassenger* aux, char* nombre)
{
	int retorno = 0;

	if(aux != NULL && nombre != NULL)
	{
		strcpy(nombre, aux->nombre);

		retorno = 1;
	}

	return retorno;
}

int Passenger_setApellido(ePassenger* aux, char* apellido)
{
	int retorno = 0;

	if(aux != NULL && apellido != NULL)
	{
		strcpy(aux->apellido , apellido);

		retorno = 1;
	}

	return retorno;
}

int Passenger_getApellido(ePassenger* aux, char* apellido)
{
	int retorno = 0;

	if(aux != NULL && apellido != NULL)
	{
		strcpy(apellido, aux->apellido);

		retorno = 1;
	}

	return retorno;
}

int Passenger_setCodigoVuelo(ePassenger* aux, char* codigoVuelo)
{
	int retorno = 0;

	if(aux != NULL && codigoVuelo != NULL)
	{
		strcpy(aux->codigoVuelo , codigoVuelo);

		retorno = 1;
	}

	return retorno;
}

int Passenger_getCodigoVuelo(ePassenger* aux, char* codigoVuelo)
{
	int retorno = 0;

	if(aux != NULL && codigoVuelo != NULL)
	{
		strcpy(codigoVuelo, aux->codigoVuelo);

		retorno = 1;
	}

	return retorno;
}

int Passenger_setTipoPasajero(ePassenger* aux, int tipoPasajero)
{
	int retorno = 0;

	if(aux != NULL && tipoPasajero != NULL)
	{
		aux->tipoPasajero = tipoPasajero;

		retorno = 1;
	}

	return retorno;
}

int Passenger_getTipoPasajero(ePassenger* aux, int* tipoPasajero)
{
	int retorno = 0;

	if(aux != NULL && tipoPasajero != NULL)
	{
		tipoPasajero = aux->tipoPasajero;

		retorno = 1;
	}

	return retorno;
}

int Passenger_setPrecio(ePassenger* aux, float precio)
{
	int retorno = 0;

	if(aux != NULL && precio != NULL)
	{
		aux->precio = precio;

		retorno = 1;
	}

	return retorno;
}

int Passenger_getPrecio(ePassenger* aux, float* precio)
{
	int retorno = 0;

	if(aux != NULL && precio != NULL)
	{
		precio = aux->precio;

		retorno = 1;
	}

	return retorno;
}
