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
	cuarteles=0;
	establos=0;
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

int Civilizacion::getCasa(){
	return casas;
}

int Civilizacion::getCuartel(){
	return cuarteles;
}

int Civilizacion::getEstablo(){
	return establos;
}

vector<Habitante> Civilizacion::getLista(){
	return habitantes;
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

void Civilizacion::setCasa(){
	casas++;
}

void Civilizacion::setCuartel(){
	cuarteles++;
}

void Civilizacion::setEstablo(){
	establos++;
}




