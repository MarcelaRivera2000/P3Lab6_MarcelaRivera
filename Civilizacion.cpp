#include "Civilizacion.h"
#include <string>
#include <vector>

using namespace std;

Civilizacion::Civilizacion(string _nombre){
	nombre=_nombre;
	madera=50;
	oro=50;
	alimento=50;
	aldeanos=5;
	casas=2;
	for (int i=0;i<5;i++){
		Habitante x=Habitante(100);
		habitantes.push_back(x);
	}
}

string Civilizacion::getNombre(){
	return nombre;
}

int Civilizacion::getOro(){
	return oro;
}

int Civilizacion::getMadera(){
	return madera;
}

int Civilizacion::getAlimento(){
	return alimento;
}

void Civilizacion::setOro(int x){
	oro=oro+x;
}

void Civilizacion::setMadera(int x){
	madera=madera+x;
}

void Civilizacion::setAlimento(int x){
	alimento=alimento+x;
}


