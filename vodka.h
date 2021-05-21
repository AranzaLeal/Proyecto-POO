#ifndef VODKA_H_
#define VODKA_H_
#include "alcoholes.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std; 
class Vodka: public Alcoholes{
	private:
		string nombrevodka;
		string sabor;
		string grano; 
		
	public:
		Vodka(): nombrevodka(""), sabor(""), grano(""){};
		Vodka(string t, float p, string o, int e, int g,string nomvod, string sab, string gran): Alcoholes(t, p, o, e, g){
			nombrevodka=nomvod;
			sabor=sab;
			grano=gran;
		};

		string getNombrevodka();
		string getSabor();
		string getGrano();
		void setNombrevodka(string);
		string printAlcohol();
};


string Vodka::getNombrevodka(){
	return nombrevodka;
}

string Vodka::getSabor(){
	return sabor;
}


string Vodka::getGrano(){
	return grano;
}


void Vodka::setNombrevodka(string namevodka){
	nombrevodka=namevodka;
}

string Vodka::printAlcohol(){
	stringstream a;
	a<<"Nombre del vodka: "<<nombrevodka<<"\tSabor: "<<sabor<<"\tGrano: "<<grano<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif