#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "pasajeros.h"

#define TAM 5 // pasar a 2000

int main()
{
    ePasajeros pasajerosLista[TAM];
    int id = 0;
    int eleccionMenu;

    do
    {
       eleccionMenu = menu();
       switch(eleccionMenu)
       {
           case 1: if(altaPasajero(pasajerosLista, TAM, &id))
                    {
                        printf("Pasajero agregado con exito!.\n");
                    }
                    else
                    {
                        printf("Ha ocurrido un error al intentar ingresar al pasajero.\n");
                    }
               break;
           case 2:
                break;
           case 3:
                break;
           case 4:
                break;
           case 5:
                break;


       }


    }while(eleccionMenu!=5);

}


