/*
 * tipoPasajero.c
 *
 *  Created on: 8 jun. 2022
 *      Author: ignacio
 */

#include <stdio.h>
#include <stdlib.h>
#include "tipoPasajero.h"

eTipoPasajero inicializarPasajero(void)
{
	eTipoPasajero tipoPasajeroEstructura =
	{
		{1, "EconomyClass"},
		{2, "FirstClass"},
		{3, "ExecutiveClass"},
	};

	return tipoPasajeroEstructura;
}

int parsearPasajeroDesdeEstrutura(char tipoPasajero[], ePassenger pasajero, eTipoPasajero tipoPasajeroEstructura)
{
    int retorno = 0;

    switch(pasajero.tipoPasajero)
    {
    case 1:
        strncpy(tipoPasajero, tipoPasajeroEstructura[1].tipoPasajeroChar);
        break;
    case 2:
        strncpy(tipoPasajero, tipoPasajeroEstructura[2].tipoPasajeroChar);
        break;
    case 3:
        strncpy(tipoPasajero, tipoPasajeroEstructura[3].tipoPasajeroChar);
        break;
    default:
        retorno = -1;
        break;

        return retorno;
    }
}

int parsearPasajeroAEstructura(char tipoPasajero[], ePassenger pasajero, eTipoPasajero tipoPasajeroEstructura)
{
    int retorno = 0;


    if(strcmp(tipoPasajero, tipoPasajeroEstructura[1].tipoPasajeroChar))
    {
        pasajero.tipoPasajero = tipoPasajeroEstructura[1].tipoPasajeroInt;
    }
    else
    {
       if(strcmp(tipoPasajero,tipoPasajeroEstructura[2].tipoPasajeroChar))
       	   {
    	   	   pasajero.tipoPasajero = tipoPasajeroEstructura[2].tipoPasajeroInt;
       	   }
       else
       {
           if(strcmp(tipoPasajero,tipoPasajeroEstructura[3].tipoPasajeroChar))
           	   {
               		pasajero.tipoPasajero = tipoPasajeroEstructura[3].tipoPasajeroInt;
           	   }
           else
           	   {
        	   	   retorno = -1;
           	   }
        }
    }
    return retorno;
}



