#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitante.h"

class Guerrero : public Habitante{
	public:
		Guerrero(int);
		virtual void ataque(Habitante*);
		
	private:
		int Valor_ataque;
		
};

#endif
