#include "person.hpp"
#include <iostream>
#include <ncurses.h>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main(int argc, char const *argv[])
{
	initscr();
	char opcion;
	int contador2=0;
	char nombre[25]; 	
	char numero[10];
	char letra=' ';
	nombre[24]='\0';
	numero[9]='\0';
	vector<person> amigos;
	start_color();
	init_pair(1,COLOR_BLACK, COLOR_BLACK);
        init_pair(2,COLOR_GREEN, COLOR_GREEN);
	init_pair(3,COLOR_RED, COLOR_BLACK);
	init_pair(4,COLOR_CYAN, COLOR_CYAN);
	init_pair(5,COLOR_WHITE, COLOR_WHITE);
	init_pair(6,COLOR_MAGENTA, COLOR_BLACK);
	init_pair(7,COLOR_BLUE, COLOR_BLACK);
	init_pair(8,COLOR_YELLOW,COLOR_YELLOW); 
	init_pair(9,COLOR_WHITE,COLOR_BLACK);
	
	int x=25;
	int y=15;
	int contador=0;
	attron(COLOR_PAIR(9));
	mvprintw(y,x,"Bienvenido a tu agenda de amigos");
	
	mvprintw(++y,x,"Laboratorio 5 de Programacion 3");
	getch();
	attroff(COLOR_PAIR(9));
	clear();
	refresh();
	
	 	x=25;
                y=15;
                attron(COLOR_PAIR(3));
                mvprintw(y,x+5,"MENU");
                mvprintw(++y,x,"1.Agregar amigos");
                mvprintw(++y,x,"2.Listar amigos ");
                mvprintw(++y,x,"3.SALIR");
                attroff(COLOR_PAIR(3));
                opcion=getch();
                clear();
                refresh();
	while(opcion !='3'){	
		x=25;
		y=15;	
		contador=0;
		if(opcion=='1'){
	        	char temporal[25];
			attron(COLOR_PAIR(9));
			
			mvprintw(++y,x,"Ingrese su nombre : ");
			//getstr(nombre);
			while((letra = getch())!='\n'){
				echo();
				if ((letra>=65 && letra<=90) || (letra>=97 && letra<=122)){
				nombre[contador]=letra;
				contador++;	
				}else{
					noecho();
				}
				nombre[contador+1]='\0';
			}
      			mvprintw(++y,x,"ingrese su numero : ");
			//getstr(numero);
			while((letra=getch())!= '\n'){
				echo();
				numero[contador2]=letra;
				contador2++;
			}
			numero[contador2+1]='\0';
			person persona(nombre,numero);
			amigos.push_back(persona);
			attroff(COLOR_PAIR(9));
			clear();
               		refresh();
		}
		if(opcion=='2'){
			int x1=10;
			int x2=30;
			int y=10;
			
			attron(COLOR_PAIR(6));
			mvprintw(y,x1,"NOMBRE");
			mvprintw(y,x2,"CELULAR");
			attroff(COLOR_PAIR(6));
			attron(COLOR_PAIR(7));
			for(int x=0;x<amigos.size();x++){
				y++;
				mvprintw(y,x1,"%s",amigos[x].getNombre());
				mvprintw(y,x2,"%s",amigos[x].getNumero());
				
			}
			attroff(COLOR_PAIR(7));
			getch();
			clear();
			refresh();
			
			
		}
		contador=0;
		contador2=0;
		for(int pepe=0;pepe<24;pepe++){
			nombre[pepe]=' ';
		}
		for(int pepe=0;pepe<10;pepe++){
                        numero[pepe]=' ';
                }
		nombre[24]=0;
		numero[24]=0;
                attron(COLOR_PAIR(3));
                mvprintw(y,x+5,"MENU");
                mvprintw(++y,x,"1.Agregar amigos");
                mvprintw(++y,x,"2.Listar amigos ");
                mvprintw(++y,x,"   3.SALIR");
                attroff(COLOR_PAIR(3));
                opcion=getch();
                clear();
                refresh();

}

	getch();
	endwin();
	return 0;	


}
