#include "alcoholes.h"
#include "tequila.h"
#include "vodka.h"
//#include "whiskey.h"
#include "inventario.h"
#include <iostream>
using namespace std;



int main(){
	
	Inventario invent;
	
	invent.crea_ejemplos();
	invent.muestraAlcohol();
	
	//invent.ejemploTequila();
	//cout<<"Informacion sobre Tequila"<<"\n";
	//invent.muestraTequila();
	
	//invent.ejemploVodka();
	//cout<<"Informacion sobre Vodka"<<"\n";
	//invent.muestraVodka();
	
	//invent.ejemploWhiskey();
	//cout<<"Informacion sobre Whiskey"<<"\n";
	//invent.muestraWhiskey();
	
	

	
	return 0;	
}
	