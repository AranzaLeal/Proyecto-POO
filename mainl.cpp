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
	

	/*cout<<"Vamos a modificar el precio de un licor"<<"\n",
	cout<<"El licor que modificaremos es Don Julio"<<"\n",
	cout<<"Cuyo precio aumentara 500 pesos"<<"\n",
	invent.aumentaPrecio("Don Julio", 500);
			
	cout<<"Vamos a aumentar la edad en un año a un licor"<<"\n",
	cout<<"El licor que modificaremos es José Cuervo"<<"\n",
	invent.agregaTiempo("José Cuervo");*/
	
	return 0;	
}
	