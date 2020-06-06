#ifndef CABALLERO_H
#define CABALLERO_H
#include "Guerrero.h"
#include "Habitante.h"

class Caballero : public Guerrero{
	public:
		Caballero(int);
		void ataque(Habitante*); 
	private:
		int Valor_ataque;
		int _vida;
};


#endif
