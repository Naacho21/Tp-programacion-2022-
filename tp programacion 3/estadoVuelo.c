/*
 * estadoVuelo.c
 *
 *  Created on: 9 jun. 2022
 *      Author: ignac
 */

#include <stdio.h>
#include <stdlib.h>
#include "estadoVuelo.h"

eEstadoVuelo inicializarEstadoVuelo(void)
{
	eEstadoVuelo estadoVueloEstructura =
	{
		{1, "En Horario"},
		{2, "Aterrizando"},
		{3, "Demorado"},
	};

	return estadoVueloEstructura;
}

int parsearEstadoVueloPasajeroDesdeEstrutura(char estadoVuelo[], ePassanger pasajero, eEstadoVuelo estadoVueloEstructura)
{
    int retorno = 0;

    switch(pasajero.estadoVuelo)
    {
    case 1:
        strncpy(estadoVuelo, estadoVueloEstructura[1].estadoVueloChar);
        break;
    case 2:
        strncpy(estadoVuelo, estadoVueloEstructura[2].estadoVueloChar);
        break;
    case 3:
        strncpy(estadoVuelo, estadoVueloEstructura[3].estadoVueloChar);
        break;
    default:
        retorno = -1;
        break;

        return retorno;
    }
}

int parsearPasajeroEstadoVueloAEstructura(char estadoVuelo[], ePassenger pasajero, eEstadoVuelo estadoVueloEstructura)
{
    int retorno = 0;

    if(strcmp(estadoVuelo, estadoVueloEstructura[1].estadoVueloChar))
    {
        pasajero.estadoVuelo = estadoVueloEstructura[1].estadoVueloInt;
    }
    else
    {
       if(strcmp(estadoVuelo, estadoVueloEstructura[2].estadoVueloChar))
       	   {
    	   	   pasajero.estadoVuelo = estadoVueloEstructura[2].estadoVueloInt;
       	   }
       else
       {
           if(strcmp(estadoVuelo, estadoVueloEstructura[3].estadoVueloChar))
           	   {
               		pasajero.estadoVuelo = estadoVueloEstructura[3].estadoVueloInt;
           	   }
           else
           	   {
        	   	   retorno = -1;
           	   }
        }
    }
    return retorno;
}


