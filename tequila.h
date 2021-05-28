//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

#ifndef TEQUILA_H_
#define TEQUILA_H_
 
#include "alcoholes.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//Declaro el objeto Tequila que hereda de la clase Alcoholes 
class Tequila: public Alcoholes{
	//Variables de instancia del objeto Tequila
	private:
	//Son privadas porque no me interesa que otras clases interactuen con sus atributos 
		string nombretequila;
		string color;
		float cantagave; 
		
	public:
	//Métodos del objeto Tequila
	//Constructores 
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
		//Sobreescribe a printAlcohol de la clase Alcoholes
		string printAlcohol();
		//Polimorfismo
		void calidad(){cout<<"Calidad del tequila: 5 estrellas\n";}
		
};

//Getters
//Get de nombretequila
string Tequila::getNombretequila(){
	return nombretequila;
}
//Get de color
string Tequila::getColor(){
	return color;
}
//Get de cantagave
float Tequila::getCantagave(){
	return cantagave;
}

//Set de nombretequila
void Tequila::setNombretequila(string nametequila){
	nombretequila=nametequila;
}

//Sobreescritura de printAlcohol
string Tequila::printAlcohol(){
	stringstream a;
	a<<"Nombre del tequla: "<<nombretequila<<"\tColor: "<<color<<"\tCantidad De agave: "<<cantagave<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif