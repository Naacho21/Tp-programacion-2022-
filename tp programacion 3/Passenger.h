/*
 * Passenger.h
 *
 *  Created on: 19 may. 2022
 *
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

typedef struct
{
	int id;
	char nombre[50];
	char apellido[50];
	float precio;
	int tipoPasajero;
	char codigoVuelo[4];
	int estadoVuelo;

}ePassenger;

int listarPasajeros(LinkedList* pArrayListPassenger);
void mostrarPasajeros(ePassenger pasajeros);

Passenger* Passenger_new();
Passenger* Passenger_newParametros(char* idStr, char* nombreStr, char* tipoPasajeroStr);
void Passenger_delete();

int Passenger_setId(ePassenger* aux,int id);
int Passenger_getId(ePassenger* aux,int* id);

int Passenger_setNombre(ePassenger* aux,char* nombre);
int Passenger_getNombre(ePassenger* aux,char* nombre);

int Passenger_setApellido(ePassenger* aux,char* apellido);
int Passenger_getApellido(ePassenger* aux,char* apellido);

int Passenger_setCodigoVuelo(ePassenger* aux,char* codigoVuelo);
int Passenger_getCodigoVuelo(ePassenger* aux,char* codigoVuelo);

int Passenger_setTipoPasajero(ePassenger* aux,int tipoPasajero);
int Passenger_getTipoPasajero(ePassenger* aux,int* tipoPasajero);

int Passenger_setPrecio(ePassenger* aux,float precio);
int Passenger_getPrecio(ePassenger* aux,float* precio);



#endif /* PASSENGER_H_ */
