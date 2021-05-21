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
 
class Inventario{ 
	private:

		Tequila tequi[100];
		Vodka vodki[100];
		Whiskey whiski[100];
		int iteq, ivod, iwhi;

		
	public:

		Inventario();

		void muestraTequila();
		void ejemploTequila();
		void muestraVodka();
		void ejemploVodka();  
		void muestraWhiskey();
		void ejemploWhiskey();

};

		Inventario::Inventario(){
			iteq=0;
			ivod=0;
			iwhi=0;

		}
		
			

		void Inventario::ejemploTequila(){
			Tequila x("Grande", 580.56, "Guadalajara", 7, 15.2,"Don Julio", "Blanco", 46.5);
			Tequila y("Mediano", 489.56, "Tamaulipas", 5, 13.2,"José Cuervo", "Amarillo", 56.2);
			Tequila z("Chico", 1236.54, "Tijuana", 12, 9.8,"Olmeca", "Cristalino", 75.4);	
			tequi[0]= x;
			tequi[1]= y;
			tequi[2]= z;		
			iteq = 3;
		}

		void Intentario::muestraTequila(){
			for (int i = 0; i < iteq; i++)
				cout << tequi[i].printAlcohol() << "\n";	
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
		

		void Intentario::muestraVodka(){
			for (int i = 0; i < iwhi; i++)
				cout << whiski[i].printAlcohol();	
			cout<<"\n"<<"Número de juegos"<<iwhi<< "\n";
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
			cout<<"\n"<<"Número de canciones"<<iwhi;
		}
		
	
#endif