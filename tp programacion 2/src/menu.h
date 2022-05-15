/*
 * menu.h
 *
 *  Created on: 14 may. 2022
 *      Author: ignac
 */

#ifndef MENU_H_
#define MENU_H_

#include "pasajeros.h"
#include "string.h"

int menu();

int altaPasajero(ePasajeros pasajerosLista[],int TAM, int* id);

int modificarPasajeroS(ePasajeros pasajerosLista[], int TAM);

int bajaPasajeros(ePasajeros pasajerosLista[], int TAM);


#endif /* MENU_H_ */
