#ifndef WHISKEY_H_
#define WHISKEY_H__
#include "alcoholes.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Whiskey: public Alcoholes{
	private:
		string nombrewhiskey;
		string ingrediente;
		string madera; 
		
	public:
		Whiskey(): nombrewhiskey(""), ingrediente(""), madera(""){};
		Whiskey(string t, float p, string o, int e, int g,string nomwhis, string ing, string mad): Alcoholes(t, p, o, e, g){ 
			nombrewhiskey=nomwhis;
			ingrediente=ing;
			madera=mad;
		};
		
		string getNombrewhiskey();
		string getIngrediente();
		string getMadera();
		void setNombrewhiskey(string);
		string printAlcohol();
};

string Whiskey::getNombrewhiskey(){
	return nombrewhiskey;
}

string Whiskey::getIngrediente(){
	return ingrediente;
}


string Whiskey::getMadera(){
	return madera;
}


void Whiskey::setNombrewhiskey(string namewhiskey){
	nombrewhiskey=namewhiskey;
}

string Whiskey::printAlcohol(){
	stringstream a;
	a<<"Nombre del Whiskey: "<<nombrewhiskey<<"\tIngrediente: "<<ingrediente<<"\tMadera: "<<madera<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif 