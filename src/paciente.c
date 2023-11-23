/*
 * paciente.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "paciente.h"



	paciente pedirPaciente(void) {
		paciente p;

		puts("Nombre: ");
		fflush(stdout);
		fflush(stdin);
		fgets(p.nombre, MAXNOMBRE, stdin);
		p.nombre[strlen(p.nombre)-1]='\0';

		puts("Peso (kg): ");
		fflush(stdout);
		scanf("%lf", &(p.peso));


		puts("Altura (metros): ");
		fflush(stdout);
		scanf("%lf", &(p.altura));
		return p;
	}



	void mostrarPaciente(paciente p) {
		printf("\nNombre: %s\nPeso:%.2lf Kg\nAltura:%.2lf metros\n", p.nombre,p.peso,p.altura);
	}

	double calculaIMC(paciente p) {
		return p.peso/pow(p.altura,2);
	}
