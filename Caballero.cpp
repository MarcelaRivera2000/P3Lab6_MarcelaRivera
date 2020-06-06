#include "Caballero.h"

Caballero::Caballero(int vida) : Guerrero(vida){
	Valor_ataque=10;
	_vida=vida;
}

void Caballero::ataque(Habitante* h){
	double potencia = Valor_ataque + 0.095*_vida;
	h->setVida(potencia);
}
