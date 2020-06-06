#include "Jinete.h"

Jinete::Jinete(int vida) : Guerrero(vida){
	Valor_ataque=30;
	_vida=vida;
}

void Jinete::ataque(Habitante* h){
	double potencia = Valor_ataque + 0.065*_vida;
	h->setVida(potencia);	
}
