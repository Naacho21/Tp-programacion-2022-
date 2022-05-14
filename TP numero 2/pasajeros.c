#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "pasajeros.h"


int inicializarPasajeros(ePasajeros pasajerosLista[], int TAM)
{
    int todoOk = 0;

    if(pasajerosLista != NULL && TAM > 0)
    {
        for(int i=0; i < TAM; i++)
        {
            pasajerosLista[i].isEmpty = 1;
        }
            todoOk = 1;
    }

    return todoOk;

}

int obtenerPasajeroLibre(ePasajeros pasajerosLista[], int TAM)
{
    int i;
    int retorno = -1;

    if (pasajerosLista != NULL && TAM < 0)
    {
        //recorro el array
        for(i=0; i < TAM; i++)
        {
            if(pasajerosLista[i].isEmpty == 0)
            {
                retorno = i;
            }
             break;
        }
    }

    return retorno;
}

int generadorId(int* id)
{
  id = id++;

  return id;
}

int addPassengers(ePasajeros pasajerosLista[], int libre, int* id, char nombre[], char apellido[], float precio, int tipoDePasajero, char codigoDeVuelo[], int EstadoDeVuelo)
{
    int retorno = 0;
    int confirmacion;

    if(pasajerosLista != NULL && libre > -1 && id > 0 && nombre != NULL && apellido != NULL && precio > 0 && tipoDePasajero > -1 && codigoDeVuelo != NULL && EstadoDeVuelo > -1)
    {
        ePasajeros lista;

        lista.id = id;
        strcpy(lista.name , nombre);
        strcpy(lista.lastName, apellido);
        lista.price = precio;
        lista.typePassenger = tipoDePasajero;
        strcpy(lista.flycode, codigoDeVuelo);
        lista.statusFlight = EstadoDeVuelo;

        do
        {
            printf("Desea confirmar el alta del pasajero?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%d", &confirmacion);
        }while(confirmacion!= 1 && confirmacion != 2);

            if(confirmacion == 1)
            {
                pasajerosLista[libre].id = lista.id;

                strcpy(pasajerosLista[libre].name, lista.name);
                strcpy(pasajerosLista[libre].lastName, lista.lastName);
                pasajerosLista[libre].price = lista.price;
                pasajerosLista[libre].typePassenger = lista.typePassenger;
                strcpy(pasajerosLista[libre].flycode, lista.flycode);
                pasajerosLista[libre].statusFlight = lista.statusFlight;

                pasajerosLista[libre].isEmpty = 1;

                retorno = 1;
            }
            else
            {
                if(confirmacion == 2)
                {
                    printf("Se ha cancelado la operacion\n");
                }
                else
                {
                    printf("Por favor ingrese una opcion valida\n");
                    printf("1.Si\n");
                    printf("2.No\n");
                }

                return retorno;
            }

    }
}
