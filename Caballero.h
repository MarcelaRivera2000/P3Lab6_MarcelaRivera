#ifndef CABALLERO_H
#define CABALLERO_H
#include "Guerrero.h"


class Caballero : public Guerrero{
	public:
		Caballero(int);
		void ataque(); 
	private:
		int Valor_ataque;
};


#endif
