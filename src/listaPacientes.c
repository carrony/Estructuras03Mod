/*
 * listaPacientes.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */
#include "listaPacientes.h"
#include <string.h>

int insertarPaciente(paciente lista[MAXPACIENTES], int tam, paciente p) {
	if (tam >=MAXPACIENTES) {
		return tam;
	}

	lista[tam]=p;
	tam++;
	return tam;


//	strcpy(lista[tam].nombre, p.nombre);
//	lista[tam].peso=p.peso;
//	lista[tam].altura=p.altura;
}


	/**
    * Funcion que busca un paciente por su nombre dentro de la lista
    * Devuelve 1 si ha encontrado el paciente o 0 en caso  contrario
    * Si se ha encntrado se devuelve el paciente en la variable p
    * pasada por referencia
    */
   int buscarPaciente(paciente lista[MAXPACIENTES], int tam, char nombre[MAXNOMBRE] , paciente * p){
	   int i;
	   for ( i=0; i<tam; i++) {
		   if(strcmp(nombre, lista[i].nombre) ==0  ) {
//			  strcpy(p->nombre, lista[i].nombre);
//			  p->peso=lista[i].peso;
//			  p->altura=lista[i].altura;

			  *p=lista[i];
			  return 1;
		   }
	   }
	   return 0;
   }


   /**
       * Procedimiento que muestra los pacientes almacenados
       */
      void mostrarLista(paciente lista[MAXPACIENTES], int tam){
    	  int i;

    	  for (i=0;i<tam;i++) {
    		  mostrarPaciente(lista[i]);
    	  }
      }


      /**
	  * Función que elimina un paciente de la lista por nombre. Se realiza un borrado físico
	  * desplazando todos los elementos en el vector
	  */
	 int borrarPaciente(paciente lista[MAXPACIENTES], int tam, char nombre[MAXNOMBRE]){
		 int i;
		 int posEncontrado=MAXPACIENTES;
		 for ( i=0; i<tam; i++) {
			 if(strcmp(nombre, lista[i].nombre) ==0  ) {
				 posEncontrado=i;
			 }
		 }

		 if(posEncontrado!=MAXPACIENTES) {
			 for (i=posEncontrado;i<tam-1; i++) {
				 lista[i]=lista[i+1];
			 }
			 tam--;
		 }
		 return tam;
	 }



