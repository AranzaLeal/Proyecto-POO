//PROYECTO INTEGRADOR: PENSAMIENTO COMPUTACIONAL ORIENTADO A OBJETOS
//Aranza Leal Aguirre
//A01751706
// 10/05/2021

//Bibiotecas 
#include "alcoholes.h"
#include "tequila.h"
#include "vodka.h"
#include "inventario.h"
#include <iostream> //para imprimir 
using namespace std;

/*
Este es un programa que captura los diferentes tipos de alcoholes
donde se despliega su respectiva información y nos permite 
ir actualizando esta información.
*/
int main(){
	//mandamos a llamar las funciones 
	Inventario invent;
	
	invent.crea_ejemplos();
	invent.muestraAlcohol();
	

	cout<<"Vamos a modificar el precio de un licor"<<endl;
	cout<<"El licor que modificaremos es Don Julio"<<endl;
	cout<<"Cuyo precio aumentara 500 pesos"<<endl;
	invent.aumentaPrecio("Don Julio", 500);
			
	cout<<"Vamos a aumentar la edad en un año a un licor"<<endl;
	cout<<"El licor que modificaremos es José Cuervo"<<endl;
	invent.agregaTiempo("José Cuervo");
	
	return 0;	
}
	