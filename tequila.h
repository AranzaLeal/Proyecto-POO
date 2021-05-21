#ifndef TEQUILA_H_
#define TEQUILA_H_
 
#include "alcoholes.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Tequila: public Alcoholes{
	private:
		string nombretequila;
		string color;
		float cantagave; 
		
	public:

		Tequila(): nombretequila(""), color(""), cantagave(0){}; 
		Tequila(string t, float p, string o, int e, int g,string nomteq, string col, float canta): Alcoholes(t, p, o, e, g){ 
			nombretequila=nomteq;
			color=col;
			cantagave=canta;
		};
		

		string getNombretequila();
		string getColor();
		float getCantagave();
		void setNombretequila(string);
		string printAlcohol();
};


string Tequila::getNombretequila(){
	return nombretequila;
}

string Tequila::getColor(){
	return color;
}


float Tequila::getCantagave(){
	return cantagave;
}


void Tequila::setNombretequila(string nametequila){
	nombretequila=nametequila;
}

string Tequila::printAlcohol(){
	stringstream a;
	a<<"Nombre del tequla: "<<nombretequila<<"\tColor: "<<color<<"\tCantidad De agave: "<<cantagave<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif