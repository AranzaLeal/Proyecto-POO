//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

#ifndef VODKA_H_
#define VODKA_H_

#include "alcoholes.h"
#include <string>
#include <iostream> //para imprimir 
#include <sstream>
using namespace std; 

//Declaro el objeto Vodka que hereda de la clase Alcoholes 
class Vodka: public Alcoholes{
	//Variables de instancia del objeto Vodka
	private:
	//Son privadas porque no me interesa que otras clases interactuen con sus atributos 
		string sabor;
		string grano; 
		
	public:
	//Métodos del objeto Vodka
	//Constructores 
		Vodka():sabor(""), grano(""){};
		Vodka(string n, string t, float p, string o, int e, int g, string sab, string gran): Alcoholes(n, t, p, o, e, g){
			sabor=sab;
			grano=gran;
		};

	
		//Sobreescribe a printAlcohol de la clase Alcoholes
		string printAlcohol();
};


//Sobreescritura de la función printAlcohol
string Vodka::printAlcohol(){
	stringstream a;
	a<<"Nombre del vodka: "<<nombre<<"\tSabor: "<<sabor<<"\tGrano: "<<grano<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif