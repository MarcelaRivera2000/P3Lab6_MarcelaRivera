#ifndef JINETE_H
#define JINETE_H
#include "Guerrero.h"
#include "Habitante.h"

class Jinete : public Guerrero{
	public:
		Jinete(int);
		void ataque(Habitante*); 
	private:
		int Valor_ataque;
		int _vida;
};


#endif
