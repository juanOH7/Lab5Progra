#ifndef PERSON_H
#define PERSON_H

class person
{/*privado por defecto*/
	char* nombre;
	char* numero;
	int nivel;
public:
	person();
	person(char *arrayNom ,char *arrayNum); /*constructor*/
	void setNombre(char *arrayNombre);
	void setNumero(char *arrayNumero);
	char* getNombre();
	char* getNumero();
};
#endif
