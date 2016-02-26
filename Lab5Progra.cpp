#include "person.hpp"
#include <iostream>
#include <ncurses.h>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main(int argc, char const *argv[])
{
	char* nombre = new char[25];
	char* numero = new char[10];
	cout << "nombre: " ;
	cin.getline(nombre, 25);
	cout << "numero: ";
	cin.getline(numero, 10);
	person a(nombre, numero);
	printw("%s\n", a.getNombre());
	cout << "stuff" << endl;
	return 0;
}