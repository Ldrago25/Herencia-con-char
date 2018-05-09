#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona
{
	public:
		char carrera[50];
		int indice;
		Estudiante(char carrera[],int indice, char n[],int cedula, int edad);
		
		Estudiante();
		~Estudiante();
		void cargar();
		void imprimir();
		void setC(char carrera[]);
		char  *getC();
		
	protected:
};

#endif
