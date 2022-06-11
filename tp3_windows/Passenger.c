/*
 * Passenger.c
 *
 *  Created on: 19 may. 2022
 *      Author: Maru
 */

#include <stdio.h>
#include <stdlib.h>
#include "Passenger.h"


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
