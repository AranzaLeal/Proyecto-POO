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
		string nombrewhiskey;
		string ingrediente;
		string madera; 
		
	public:
	//Métodos del objeto Whiskey
	//Constructores 
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
		//Sobreescribe a printAlcohol de la clase Alcoholes
		string printAlcohol();
		//Polimorfismo
		void calidad(){cout<<"Calidad del whiskey: 3 estrellas\n";}
};

//Getters
// Get de nombrewhiskey
string Whiskey::getNombrewhiskey(){
	return nombrewhiskey;
}
//Get de ingrediente
string Whiskey::getIngrediente(){
	return ingrediente;
}
//Get de madera
string Whiskey::getMadera(){
	return madera;
}

//SEt de nombrewhiskey
void Whiskey::setNombrewhiskey(string namewhiskey){
	nombrewhiskey=namewhiskey;
}

//Sobreescritura de printAlcohol
string Whiskey::printAlcohol(){
	stringstream a;
	a<<"Nombre del Whiskey: "<<nombrewhiskey<<"\tIngrediente: "<<ingrediente<<"\tMadera: "<<madera<<"\n";
	a << "Tamaño: " << tamano << "\tPrecio: " << precio << "\n";
	a << "Origen: " <<origen<< "\tEdad: "<<edad<<"\tGrado: "<< grado<<"\n";
	return a.str();
}



#endif 