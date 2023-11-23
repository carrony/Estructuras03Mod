/*
 ============================================================================
 Name        : Estructuras03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "listaPacientes.h"
#include "paciente.h"

int main(void) {

	int num=0;
	paciente lista[MAXPACIENTES];
	int opcion;
	paciente pac;
	//char nombre[MAXNOMBRE];

	do {

		puts("\nPrograma de gestion de la clinica de adelgazamiento");

		puts("1. Contar pacientes. ");
		puts("2. Mostrar pacientes. ");
		puts("3. Añadir paciente. ");
		puts("4. Buscar paciente. ");
		puts("5. Calcular IMC paciente. ");
		puts("0. Salir");

		puts("Introduce opcion (0-5)");
		fflush(stdout);
		scanf("%d", &opcion);

		switch(opcion) {
		case 1:
			printf("\nEn la lista hay ahora mismo %d pacientes", num);
			break;
		case 2:
			printf("\nListado de pacientes:\n ");
			mostrarLista(lista,num);
			break;
		case 3:
			puts("Alta de paciente");
			puts("Introduce al paciente ");
			pac=pedirPaciente();

			puts("Añadiendo paciente a la BBDD...");
			num=insertarPaciente(lista, num, pac);
			break;
		}


	}while(opcion!=0);


	return EXIT_SUCCESS;
}
