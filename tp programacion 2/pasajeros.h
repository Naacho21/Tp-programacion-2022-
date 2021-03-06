/*
 * pasajeros.h
 *
 *  Created on: 14 may. 2022
 *      Author: ignac
 */

#ifndef PASAJEROS_H_
#define PASAJEROS_H_

typedef struct
    {
        int id;
        char name[51];
        char lastName[51];
        float price;
        char flycode[10];
        int typePassenger;
        int statusFlight;
        int isEmpty;
    }ePasajeros;

int inicializarPasajeros(ePasajeros pasajerosLista[], int TAM);

int generadorId(int id);

int obtenerPasajeroLibre(ePasajeros pasajerosLista[], int TAM);

int addPassengers(ePasajeros pasajerosLista[], int libre, int id, char nombre[], char apellido[], float precio, int tipoDePasajero, char codigoDeVuelo[], int EstadoDeVuelo);

int mostrarPasajeros(ePasajeros pasajerosLista[], int TAM);

int listarPasajeros(ePasajeros pasajerosLista[], int TAM);

int buscarPasajeros(ePasajeros pasajerosLista[], int TAM, int id, int i);

int menuModificarPasajero();

#endif /* PASAJEROS_H_ */
