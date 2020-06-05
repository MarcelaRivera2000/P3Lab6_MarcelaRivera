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
		int getCasa();
		int getEstablo();
		int getCuartel();
		vector<Habitante> getLista();
		
		
		void setMadera(int);
		void setAlimento(int);
		void setOro(int);
		void setCasa();
		void setEstablo();
		void setCuartel();		
	
	private:
		string nombre;
		int madera,oro,alimento,aldeanos,casas,cuarteles,establos;
		vector <Habitante> habitantes;
};




#endif
