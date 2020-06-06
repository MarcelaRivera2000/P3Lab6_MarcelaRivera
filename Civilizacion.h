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
		vector<Habitante*> getLista();
		
		void setAldeano(Habitante* x);
		void setMadera(int);
		void setAlimento(int);
		void setOro(int);
		void setCasa();
		void setEstablo();
		void setCuartel();		
	
	private:
		string nombre;
		int madera=0,oro=0,alimento=0,aldeanos=0,casas=0,cuarteles=0,establos=0;
		vector <Habitante*> habitantes;
};




#endif
