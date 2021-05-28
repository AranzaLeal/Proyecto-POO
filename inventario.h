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
		

		/*Tequila tequi[100];
		Vodka vodki[100];
		Whiskey whiski[100];
		int iteq, ivod, iwhi;*/

		
	public:

		Inventario();
		//~Inventario();
		//destructor
		
		void crea_ejemplos();
		void muestraAlcohol();

		/*void muestraTequila();
		void ejemploTequila();
		void muestraVodka();
		void ejemploVodka();  
		void muestraWhiskey();
		void ejemploWhiskey();*/

};

		Inventario::Inventario(){
			serie=0;
			/*iteq=0;
			ivod=0;
			iwhi=0;*/

		}
		
		//Inventario::~Inventario(){}
		
			
		void Inventario::crea_ejemplos(){
		inv[serie]=new Tequila("Grande", 580.56, "Guadalajara", 7, 15.2,"Don Julio", "Blanco", 46.5);
		serie++;
		}
		inv[serie]=new Tequila("Mediano", 489.56, "Tamaulipas", 5, 13.2,"José Cuervo", "Amarillo", 56.2);
		serie++;
		}
		inv[serie]=new Tequila("Chico", 1236.54, "Tijuana", 12, 9.8,"Olmeca", "Cristalino", 75.4);
		serie++;
		}
		inv[serie]=new Vodka("Grande", 1056.48, "Estados Unidos", 3, 17,"Absolut", "Frambuesa", "Centeno");
		serie++;
		}
		inv[serie]=new Vodka("Chico", 1352.47, "Canadá", 1, 7.56,"Crystal Head", "Mora azul", "Patatas");
		serie++;
		}
		inv[serie]=new Vodka("Mediano", 2500.50, "Rusia", 2, 15.6,"BELVEDERE", "Zarzamóra", "Trigo");
		serie++;
		}
		inv[serie]=new Whiskey("Mediano", 956.32, "Holanda", 14, 19.2,"Crown Royal", "Maíz", "Roble Pedunculado");
		serie++;
		}
		inv[serie]=new Whiskey("Grande", 2700.00, "Irlanda", 30, 21.6,"Ballantine's", "Naranja", " Roble americano");
		serie++;
		}
		inv[serie]=new Whiskey"Chico", 3600.50, "Escocia", 50, 18.5,"Jim Beam", "Mandarina", "Roble japonés"
		serie++;
		}
			
			
		void Inventario::muestraAlcohol(){
			cout<<"Alcoholes en el inventario: "<<"\n";
			for (int i = 0; i < serie; i++)
				cout << inv[i]->printAlcohol() << "\n";	
		}	

		/*void Inventario::ejemploTequila(){
			Tequila x("Grande", 580.56, "Guadalajara", 7, 15.2,"Don Julio", "Blanco", 46.5);
			Tequila y("Mediano", 489.56, "Tamaulipas", 5, 13.2,"José Cuervo", "Amarillo", 56.2);
			Tequila z("Chico", 1236.54, "Tijuana", 12, 9.8,"Olmeca", "Cristalino", 75.4);	
			tequi[0]= x;
			tequi[1]= y;
			tequi[2]= z;		
			iteq = 3;
		}
		void Inventario::muestraTequila(){
			for (int i = 0; i < iteq; i++)
				cout << tequi[i].printAlcohol() << "\n";	
			cout<<"\n"<<"Número de botellas de Tequila: "<<iteq<< "\n";
		}
		void Inventario::ejemploVodka(){
			Vodka a("Grande", 1056.48, "Estados Unidos", 3, 17,"Absolut", "Frambuesa", "Centeno");
			Vodka b("Mediano", 2500.50, "Rusia", 2, 15.6,"BELVEDERE", "Zarzamóra", "Trigo");
			Vodka c("Chico", 1352.47, "Canadá", 1, 7.56,"Crystal Head", "Mora azul", "Patatas");
			vodki[0]=a;
			vodki[1]=b;
			vodki[2]=c;
			 ivod=3;
		}
		void Inventario::muestraVodka(){
			for (int i = 0; i < ivod; i++)
				cout << vodki[i].printAlcohol();	
			cout<<"\n"<<"Número de botellas de Vodka: "<<ivod<< "\n";
		}
		void Inventario::ejemploWhiskey(){
			Whiskey m("Mediano", 956.32, "Rusia", 14, 19.2,"Crown Royal", "Maíz", "Roble Pedunculado");
			Whiskey n("Grande", 2700.00, "Rusia", 30, 21.6,"Ballantine's", "Naranja", " Roble americano");
			Whiskey l("Chico", 3600.50, "Rusia", 50, 18.5,"Jim Beam", "Mandarina", "Roble japonés");
			whiski[0]=m;
			whiski[1]=n;
			whiski[2]=l;
			iwhi=3;
		}
		void Inventario::muestraWhiskey(){
			for (int i = 0; i < iwhi; i++)
				cout << whiski[i].printAlcohol() << "\n";	
			cout<<"\n"<<"Número de botellas de Whiskey: "<<iwhi<<"\n";
		}*/
		
	
#endif