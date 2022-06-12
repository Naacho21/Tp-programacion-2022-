/*
 * isEmpty.h
 *
 *  Created on: 8 jun. 2022
 *      Author: ignacio
 */

#ifndef ESTADOVUELO_H_
#define ESTADOVUELO_H_

typedef struct{

	int estadoVueloInt;
	char estadoVueloChar[15];

}eEstadoVuelo;

eEstadoVuelo inicializarEstadoVuelo(void);

int parsearPasajeroEstadoVueloDesdeEstrutura(char estadoVuelo[], ePassanger pasajero, eEstadoVuelo estadoVueloEstructura);

int parsearPasajeroEstadoVueloAEstructura(char estadoVuelo[], ePassenger pasajero, eEstadoVuelo estadoVueloEstructura);





#endif /* ESTADOVUELO_H_ */
