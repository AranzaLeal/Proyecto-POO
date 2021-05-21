#include "alcoholes.h"
#include "tequila.h"
#include "vodka.h"
#include "whiskey.h"
#include "inventario.h"
#include <iostream>
using namespace std;



int main(){
	
	Inventario invent;
	invent.ejemploTequila();
	cout<<"Informacion sobre la multimedia del iPod"<<"\n";
	invent.muestraTequila();
	invent.ejemploVodka();
	cout<<"Informacion sobre los videojuegos del iPod"<<"\n";
	invent.muestraVodka();
	invent.ejemploWhiskey();
	cout<<"Informacion sobre la música del iPod"<<"\n";
	invent.muestraWhiskey();
	
	
	return 0;	
}
	