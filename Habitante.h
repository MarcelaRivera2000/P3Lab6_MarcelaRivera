#ifndef HABITANTE_H
#define HABITANTE_H

class Habitante{
	public:
		Habitante(int);
		int getVida();
		void setVida(int x);
		virtual ~Habitante();
	private:
		int vida;
	
	
};



#endif
