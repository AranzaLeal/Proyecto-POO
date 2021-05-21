#ifndef ALCOHOLES_H_
#define ALCOHOLES_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Alcoholes {

    protected:
		string tamano;
		float precio;
		string origen;
		int edad;
		int grado;

    public :
        Alcoholes();
        Alcoholes(string tamano, float precio, string origen, int edad, int grado);

        string getTamano();
		float getPrecio();
        string getOrigen();
		int getEdad();
		int getGrado();
		string printAlcohol();
		       
};

Alcoholes::Alcoholes(){

    tamano = "";
	precio = 0;
	origen = "";
	edad = 0;
	grado= 0;
}

Alcoholes::Alcoholes(string size, float pre, string ori, int age, int gra){

	tamano = size;
	precio = pre;
	origen = ori;
	edad = age;
	grado = gra;
	
}


string Alcoholes::getTamano(){
   return tamano;
}

float Alcoholes::getPrecio(){
    return precio;
}
 
string Alcoholes::getOrigen(){
	return origen;
}

int Alcoholes::getEdad(){
   return edad;
}

int Alcoholes::getGrado(){
   return grado;
}

string Alcoholes::printAlcohol(){
	stringstream a;
	a << "Tamaño: " << tamano << "Precio: " << precio << "\n";
	a << "Origen: " <<origen<< "Edad: "<<edad<<"Grado: "<< grado<<"\n";
	return a.str();
}
	
#endif