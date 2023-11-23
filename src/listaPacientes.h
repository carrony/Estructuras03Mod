/*
 * listaPacientes.h
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#ifndef LISTAPACIENTES_H_
#define LISTAPACIENTES_H_
#define MAXPACIENTES 30

#include "paciente.h"

   int insertarPaciente(paciente lista[MAXPACIENTES], int tam, paciente p);

   /**
    * Funcion que busca un paciente por su nombre dentro de la lista
    * Devuelve 1 si ha encontrado el paciente o 0 en caso  contrario
    * Si se ha encntrado se devuelve el paciente en la variable p
    * pasada por referencia
    */
   int buscarPaciente(paciente lista[MAXPACIENTES], int tam, char nombre[MAXNOMBRE] , paciente * p);


   /**
    * Procedimiento que muestra los pacientes almacenados
    */
   void mostrarLista(paciente lista[MAXPACIENTES], int tam);


#endif /* LISTAPACIENTES_H_ */
