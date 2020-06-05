#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <string>
#include "Habitante.h"
#include <vector>

using namespace std;

class Civilizacion{
	public:
		Civilizacion(string);
		
		string getNombre();
		int getOro();
		int getMadera();
		int getAlimento();
		void setMadera(int);
		void setAlimento(int);
		void setOro(int);		
	
	private:
		string nombre;
		int madera,oro,alimento,aldeanos,casas,cuarteles,establo;
		vector <Habitante> habitantes;
};




#endif
