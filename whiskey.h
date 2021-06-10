//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

#ifndef WHISKEY_H_
#define WHISKEY_H__

#include "alcoholes.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//Declaro el objeto Whiskey que hereda de la clase Alcoholes 
class Whiskey: public Alcoholes{
	//Variables de instancia del objeto Whiskey
	private:
	//Son privadas porque no me interesa que otras clases interactuen con sus atributos 
		string ingrediente;
		string madera; 
		
	public:
	//Métodos del objeto Whiskey
	//Constructores 
		Whiskey(): ingrediente(""), madera(""){};
		Whiskey(string n, string t, float p, string o, int e, int g, string ing, string mad): Alcoholes(n, t, p, o, e, g){ 
			ingrediente=ing;
			madera=mad;
		};
		
		//Sobreescribe a printAlcohol de la clase Alcoholes
		string printAlcohol();

};

//Sobreescritura de printAlcohol
string Whiskey::printAlcohol(){
	stringstream a;
	a<<"Nombre del Whiskey: "<<nombre<<"\tIngrediente: "<<ingrediente<<"\tMadera: "<<madera<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif 