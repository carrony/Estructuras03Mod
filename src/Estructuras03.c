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
#include <string.h>
#include "listaPacientes.h"
#include "paciente.h"

int main(void) {

	int num=0;
	paciente lista[MAXPACIENTES];
	int opcion;
	paciente pac;
	char nombre[MAXNOMBRE];
	int numOld;

	do {

		puts("\nPrograma de gestion de la clinica de adelgazamiento");

		puts("1. Contar pacientes. ");
		puts("2. Mostrar pacientes. ");
		puts("3. Añadir paciente. ");
		puts("4. Buscar paciente. ");
		puts("5. Calcular IMC paciente. ");
		puts("6- Borrar Paciente. ");
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
		case 4:
			printf("\nNombre del Paciente a buscar: ");
			fflush(stdout);
			fflush(stdin);
			fgets(nombre, MAXNOMBRE, stdin);
			nombre[strlen(nombre)-1]='\0';

			if (buscarPaciente(lista, num, nombre, &pac)) {
				printf("\nPaciente encontrado:");
				mostrarPaciente(pac);
			} else {
				printf("\nPaciente %s No encontrado.", nombre);
			}
			break;

		case 5:
			printf("\nNombre del Paciente a calcular: ");
			fflush(stdout);
			fflush(stdin);
			fgets(nombre, MAXNOMBRE, stdin);
			nombre[strlen(nombre)-1]='\0';
			if (buscarPaciente(lista, num, nombre, &pac)) {
				printf("\nPaciente encontrado:");
				mostrarPaciente(pac);
				printf("\nÍndice de masa corporal: %.2lf", calculaIMC(pac));

			} else {
				printf("\nPaciente %s No encontrado.", nombre);
			}
			break;

		case 6:
			printf("\nNombre del Paciente a eliminar: ");
			fflush(stdout);
			fflush(stdin);
			fgets(nombre, MAXNOMBRE, stdin);
			nombre[strlen(nombre)-1]='\0';
			numOld=num;
			num=borrarPaciente(lista,num,nombre);
			if (num==numOld) {
				printf("\nPaciente no encontrado.");
			} else {
				printf("\nSe ha eliminado el paciente %s. Quedan %d pcaientes ",nombre,num);
			}

		}


	}while(opcion!=0);


	return EXIT_SUCCESS;
}
