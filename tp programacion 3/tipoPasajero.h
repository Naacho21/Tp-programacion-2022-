/*
 * tipoPasajero.h
 *
 *  Created on: 8 jun. 2022
 *      Author: ignac
 */

#ifndef TIPOPASAJERO_H_
#define TIPOPASAJERO_H_

typedef struct
{
    int tipoPasajeroInt;
    char tipoPasajeroChar[30];

}eTipoPasajero;

etipoPasajero inicializarPasajero(void);
int parsearPasajeroDesdeEstrutura(char tipoPasajero[], ePasajero pasajero, eTipoPasajero tipoPasajeroEstructura);
int parsearPasajeroAEstructura(char tipoPasajero[], ePasajero pasajero,eTipoPasajero tipoPasajeroEstructura);
int parser_PasajeroDesdeTexto(FILE* pArchivo , LinkedList* pArrayListPassenger);


#endif /* TIPOPASAJERO_H_ */
