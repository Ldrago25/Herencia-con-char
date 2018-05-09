#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
/*	Persona *p=new Persona();
	p->cargarD();
	p->imprimir();*/
	
	
	Estudiante **e=new Estudiante *[2];
	for(int i=0; i<2; i++){
		
		e[i]=new Estudiante();
		e[i]->cargar();
		e[i]->imprimir();
		
	}
	
	
	return 0;
}
