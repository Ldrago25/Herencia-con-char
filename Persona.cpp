#include "Persona.h"

Persona::Persona()
{
	strcpy(n,"Brandon");
	cedula=26566047;
	edad=23;
	
}
	Persona::Persona(char n[],int cedula,int edad){
		
		strcpy(this->n,n);
		this->cedula=cedula;
		this->edad=edad;
		
	}
	
	
	void Persona::cargarD(){
		
		cout<<endl<<"Carga de Datos"<<endl;
		cout<<endl<<"______________"<<endl;
		cout<<endl<<"Nombre: "<<endl;
		cin.sync();
		cin.getline(n,50);
		cout<<endl<<"Cedula: "<<endl;
		cin>>cedula;
		cout<<endl<<"Edad: "<<endl;
		cin>>edad;
		
		
	}
	
	void Persona::imprimir(){
		
		cout<<endl<<"Nombre: "<<this->getN()<<endl;
		cout<<endl<<"Cedula: "<<cedula<<endl;
		cout<<endl<<"Edad: "<<edad<<endl;
		
		
	}
	
	void Persona::setN(char n[]){
		strcpy(this->n,n);
		
	}
	
	char *Persona::getN(){
		return n;
	}

Persona::~Persona()
{
}
