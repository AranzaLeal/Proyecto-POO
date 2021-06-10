//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

#ifndef ALCOHOLES_H_
#define ALCOHOLES_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

//Declaración de la clase Alcoholes que es la clase abstracta (clase padre)
class Alcoholes {
/*Esta clase defina objeto de tipo Alcoholes que contiene a las clases hijas: 
*Tequila, Vodka y Whiskey
*/
//Los atributos estan protegidos para que las clases hijas puedan acceder
    protected: 
	//Atributos de la clase Alcoholes que seran heredadas a las clases hijas 
		string nombre;
		string tamano;
		float precio;
		string origen;
		int edad;
		int grado;

    public :
	//Métodos de la clase Padre 
        Alcoholes();
        Alcoholes(string nombre,string tamano, float precio, string origen, int edad, int grado);

		float getPrecio();
		void setPrecio(float p);
		int getEdad();
		void aumentaEdad();
		string getNombre();
		
		//Polimorfismo 
		virtual string printAlcohol()=0;
		       
};

//Constructor de Alcoholes por default
Alcoholes::Alcoholes(){

    nombre="";
	tamano = "";
	precio = 0;
	origen = "";
	edad = 0;
	grado= 0;
}

//Constructor de Alcoholes con valores para llenar las variables de instancia
Alcoholes::Alcoholes(string nom, string size, float pre, string ori, int age, int gra){

	nombre=nom;
	tamano = size;
	precio = pre;
	origen = ori;
	edad = age;
	grado = gra;
}

//Gettres y setters

//Get de Precio 
float Alcoholes::getPrecio(){
    return precio;
}

void Alcoholes::setPrecio(float p){
	precio=p;
}

int Alcoholes::getEdad(){
	return edad;
}

void Alcoholes::aumentaEdad(){
   edad++;
}

string Alcoholes::getNombre(){
   return nombre;
}

/*string Alcoholes::printAlcohol(){
	stringstream a;
	a << "Tamaño: " << tamano << "Precio: " << precio << "\n";
	a << "Origen: " <<origen<< "Edad: "<<edad<<"Grado: "<< grado<<"\n";
	return a.str();
}*/
	
#endif