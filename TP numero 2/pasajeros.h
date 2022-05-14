#ifndef PASAJEROS_H_INCLUDED
#define PASAJEROS_H_INCLUDED



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

int generadorId(int* id);

int obtenerPasajeroLibre(ePasajeros pasajerosLista[], int TAM);

int addPassengers(ePasajeros pasajerosLista[], int libre, int* id, char nombre[], char apellido[], float precio, int tipoDePasajero, char codigoDeVuelo[], int EstadoDeVuelo);


#endif // PASAJEROS_H_INCLUDED
