//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

#ifndef INVENTARIOS_H_
#define INVENTARIOS_H_

#include "alcoholes.h"
#include "tequila.h"
#include "vodka.h"
#include "whiskey.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//constante de tamaño de arreglos
const int MAX = 10000;
/*
*Esta clase define al objeto como tipo Inventario la cual contiene 
todas las operaciones que interactuan con mis clases Tequila, Vodka
y Whiskey
*/
class Inventario{ 

	private:
	
		Alcoholes *inv[MAX];
		int serie;
		

		
	public:

		Inventario();
		//~Inventario();
		//destructor
		
		void crea_ejemplos();
		void muestraAlcohol();
		void aumentaPrecio(string nombre, float precio);
		void agregaTiempo(string nombre);
};

		Inventario::Inventario(){
			serie=0;
		}
		
		//destructor
		//Inventario::~Inventario(){}
		
			
		void Inventario::crea_ejemplos(){
			inv[serie]=new Tequila("Don Julio","Grande", 580.56, "Guadalajara", 7, 15.2,"Blanco", 46.5);
			serie++;
		
			inv[serie]=new Tequila("José Cuervo", "Mediano", 489.56, "Tamaulipas", 5, 13.2,"Amarillo", 56.2);
			serie++;
		
			inv[serie]=new Tequila("Olmeca","Chico", 1236.54, "Tijuana", 12, 9.8, "Cristalino", 75.4);
			serie++;
		
			inv[serie]=new Vodka("Absolut","Grande", 1056.48, "Estados Unidos", 3, 17,"Frambuesa", "Centeno");
			serie++;
		
			inv[serie]=new Vodka("Crystal Head","Chico", 1352.47, "Canadá", 1, 7.56, "Mora azul", "Patatas");
			serie++;
		
			inv[serie]=new Vodka("BELVEDERE", "Mediano", 2500.50, "Rusia", 2, 15.6, "Zarzamóra", "Trigo");
			serie++;
		
			inv[serie]=new Whiskey("Crown Royal", "Mediano", 956.32, "Holanda", 14, 19.2,"Maíz", "Roble Pedunculado");
			serie++;
		
			inv[serie]=new Whiskey("Ballantine's", "Grande", 2700.00, "Irlanda", 30, 21.6,"Naranja", " Roble americano");
			serie++;
		
			inv[serie]=new Whiskey("Jim Beam", "Chico", 3600.50, "Escocia", 50, 18.5,"Mandarina", "Roble japonés");
			serie++;
			}
			
			
		void Inventario::muestraAlcohol(){
			cout<<"Alcoholes en el inventario: "<<"\n";
			for (int i = 0; i < serie; i++)
				cout << inv[i]->printAlcohol() << "\n";	
		}	
		
		/*void Inventario::aumentaPrecio(string nombre, float precio){
			for (int i = 0; i < serie; i++){
				if (nombre==inv[i]->getNombre()){
					cout<<"Nombre: "<< inv[i]->getNombre<<"\n";
					cout<<"Precio anterior: "<<inv[i]->getPrecio<<"\n";
					inv[i]->setPrecio(precio);
					cout<<"Precio actualizado: "<<inv[i]->getPrecio<<"\n";
				}
			}
		}
		
		void Inventario::agregaTiempo(string nombre){
			for (int i = 0; i < serie; i++){
				if (nombre==inv[i]->getNombre()){
					cout<<"Nombre: "<< inv[i]->getNombre<<"\n";
					cout<<"Edad anterior: "<<inv[i]->getEdad<<"\n";
					inv[i]->aumentaEdad();
					cout<<"Edad actualizada: "<<inv[i]->getEdad<<"\n";
				}
			}
		}*/

		
	
#endif