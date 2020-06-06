#include "Habitante.h"

Habitante::Habitante(int _vida){
	vida=_vida;
}

int Habitante::getVida(){
	return vida;
}

void Habitante::setVida(int x){
	vida=vida-x;
}

Habitante::~Habitante(){
}
