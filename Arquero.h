#ifndef ARQUERO_H
#define ARQUERO_H
#include "Guerrero.h"
#include "Habitante.h"


class Arquero : public Guerrero{
	public:
		Arquero(int);
		void ataque(Habitante* h); 
	private:
		int Valor_ataque;
		int _vida;
};


#endif
