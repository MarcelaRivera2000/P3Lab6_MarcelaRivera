#ifndef JINETE_H
#define JINETE_H
#include "Guerrero.h"

class Jinete : public Guerrero{
	public:
		Jinete(int);
		void ataque(); 
	private:
		int Valor_ataque;
};


#endif
