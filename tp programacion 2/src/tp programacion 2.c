/*
 ============================================================================
 Name        : tp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "pasajeros.h"

#define TAM 2000

int main()
{
    ePasajeros pasajerosLista[TAM];
    int id = 0;
    int eleccionMenu;
    char salir = 'n';

    do
    {
       eleccionMenu = menu();
       switch(eleccionMenu)
       {
           case 1: if(altaPasajero(pasajerosLista, TAM, &id))
                    {
                        printf("Pasajero agregado con exito!.\n\n");
                    }
                    else
                    {
                        printf("Ha ocurrido un error al intentar ingresar al pasajero.\n\n");
                    }
               break;

           case 2: if(modificarPasajeroS(pasajerosLista, TAM))
                    {
                        printf("Se ha modificado el pasajero con exito!.\n\n");
                    }
                    else
                    {
                        printf("Ha ocurrido un error al intentar modificar al pasajero.\n\n");
                    }


           case 3: if(bajaPasajeros(pasajerosLista, TAM))
                    {
                        printf("Se ha dado de baja al pasajero con exito!.\n\n");
                    }
                    else
                    {
                        printf("Ha ocurrido un error al intentar dar de baja al pasajero.");
                    }
                break;

           case 4:
                break;

           case 5: salir = 's';
                break;

       }

    }while(salir != 's');

}



