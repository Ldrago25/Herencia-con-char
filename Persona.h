#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string.h>
using namespace std;
class Persona
{
	public:
		char n[50];
		int cedula;
		int edad;
		Persona(char n[],int cedula,int edad);
		Persona();
		~Persona();
		void cargarD();
		void imprimir();
		void setN(char n[]);
		char *getN();
		
		
	protected:
};

#endif
