#include "person.hpp"
#include <iostream>
#include <cstring>

using namespace std;

person::person(char* nombre , char* numero)
{
	nombre = new char[25];
	numero = new char[10];
	//strcpy(this->nombre, nombre);
	//strcpy(this->numero, numero);
	this -> nombre = nombre;
	this -> numero = numero;	
}
void person::setNombre(char *arrayNombre)
{
	this -> nombre = arrayNombre;
}
void person::setNumero(char *arrayNumero)
{
	this -> numero = arrayNumero;
}
char* person::getNombre()
{
	return nombre;
}
char* person::getNumero()
{
	return numero;
}