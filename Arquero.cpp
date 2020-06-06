#include "Arquero.h"

Arquero::Arquero(int vida) : Guerrero(vida){
	Valor_ataque=20;
	_vida=vida;
}

void Arquero::ataque(Habitante* h){
	double potencia =Valor_ataque + 0.085*_vida;
	h->setVida(potencia);
}
