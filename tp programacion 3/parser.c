#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Passenger.h"

/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int parser_PassengerFromText(FILE* pArchivo, LinkedList* pArrayListPassenger)
{
	    char id[5];
	    char nombre[50];
	    char apellido[50];
	    char precio[6];
	    char tipoPasajero[30];
	    char codigoVuelo[7];
	    char estadoVuelo[20];

	    ePassenger pasajero;



	 fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]/n",id,nombre,apellido,precio,codigoVuelo,tipoPasajero,estadoVuelo);
	    if(numeroScanf == 7)
	    {
	        pasajero.id = atoi(id);
	        strncpy(pasajero.nombre,nombre,sizeof(pasajero.nombre));
	        strncpy(pasajero.apellido,apellido,sizeof(pasajero.apellido));
	        pasajero.precio = atoi(precio);
	        strncpy(pasajero.codigoVuelo,codigoVuelo,sizeof(pasajero.codigoVuelo));
	    }
	    return 1;

}


/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int parser_PassengerFromBinary(FILE* pArchivo, LinkedList* pArrayListPassenger)
{

    return 1;
}


