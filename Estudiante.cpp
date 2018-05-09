#include "Estudiante.h"

Estudiante::Estudiante()
{
	strcpy(carrera,"Informatica");
	indice=9;
}

	Estudiante::Estudiante(char carrera[],int indice, char n[],int cedula, int edad):Persona(n,cedula,edad){
		
		strcpy(this->carrera,carrera);
		this->indice=indice;
		
	}
	
	void Estudiante::cargar(){
		
		Persona::cargarD();
		
		cout<<endl<<"Carrera: "<<endl;
		cin.sync();
		cin.getline(carrera,50);
		cout<<endl<<"Indice: "<<endl;
		cin>>indice;
		
	}
	
	
	void Estudiante::imprimir(){
		
		Persona::imprimir();
		
		cout<<endl<<"Carrera: "<<this->getC()<<endl;
		cout<<endl<<"Indice: "<<indice<<endl;
		
		
	}
	void Estudiante::setC(char carrera[]){
		
		strcpy(this->carrera,carrera);
	}	
	char *Estudiante::getC(){
		return carrera;
	}
	
	
	
Estudiante::~Estudiante()
{
}
