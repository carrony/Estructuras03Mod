/*
 * paciente.h
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#ifndef PACIENTE_H_
#define PACIENTE_H_

#define MAXNOMBRE 30

	typedef struct {
		char nombre[MAXNOMBRE];
		double peso;
		double altura;
	} paciente;


	paciente pedirPaciente(void);

	void mostrarPaciente(paciente p);

	double calculaIMC(paciente p);


#endif /* PACIENTE_H_ */
