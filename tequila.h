//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

#ifndef TEQUILA_H_
#define TEQUILA_H_
 
#include "alcoholes.h"
#include <string>
#include <iostream> //para imprimir 
#include <sstream>
using namespace std;

//Declaro el objeto Tequila que hereda de la clase Alcoholes 
class Tequila: public Alcoholes{
	//Variables de instancia del objeto Tequila
	private:
	//Son privadas porque no me interesa que otras clases interactuen con sus atributos 
		string color;
		float cantagave; 
		
	public:
	//Métodos del objeto Tequila
	//Constructores 
		Tequila(): color(""), cantagave(0){}; 
		Tequila(string n,string t, float p, string o, int e, int g, string col, float canta): Alcoholes(n, t, p, o, e, g), color(col), cantagave(canta){ 
		};
		
		//Sobreescribe a printAlcohol de la clase Alcoholes
		string printAlcohol();
		

		
};


//Sobreescritura de la función printAlcohol
string Tequila::printAlcohol(){
	stringstream a;
	a<<"Nombre del tequla: "<<nombre<<"\tColor: "<<color<<"\tCantidad De agave: "<<cantagave<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif