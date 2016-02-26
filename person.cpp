#include "person.hpp"
#include <iostream>
#include <cstring>

using namespace std;

person::person()
{
	nombre= new char[25];
	numero= new char[10];
//	this -> nombre = nombre;
//	this -> numero = numero;	
}
person::person(char* nombre , char* numero){
	setNumero(numero);
	setNombre(nombre);
}
void person::setNombre(char* nombre)
{
	 this->nombre=new char[25];
	 strcpy(this->nombre, nombre);

}
void person::setNumero(char* numero)
{
	this->numero=new char[10];
	 strcpy(this->numero, numero);

}
char* person::getNombre()
{
	return nombre;
}
char* person::getNumero()
{
	return numero;
}
