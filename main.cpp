#include <iostream>
#include<stdlib.h>
#include <string> 
#include <vector>
#include "Civilizacion.h"

using namespace std; 
using std::cin;
using std::endl;
using std::cout;
vector <Civilizacion> lista;
void Jugar();
void menu();

int main(int argc, char** argv) {
	while(true){
		menu();
	}

	return 0;
}

void menu(){
int op;
		cout<<"---------LABORATORIO # 6---------"<<endl<<"1#Crear Civilizacion"<<endl<<"2#Jugar"<<endl<<"3#Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:{
				string nombre;
				cout<<"Ingrese un nombre"<<endl<<":";
				cin>>nombre;
				Civilizacion x=Civilizacion(nombre);
				lista.push_back(x);
				break;
			}
			case 2:{
				Jugar();
				break;
			}
			case 3:{
				exit (EXIT_FAILURE);
				break;
			}
		}
}

void Jugar(){
	cout<<"--------- ELIJA CON QUE EQUIPO DESEA JUGAR ---------"<<endl;
	for(int i=0;i<lista.size();i++){
		cout<<i<<"# "<<lista[i].getNombre()<<endl;
	}
	int posi;
	cin>>posi;
	
	while(true){
	cout<<"--------- MENU ---------"<<endl<<"1#Crear aldeano"<<endl<<"2#Crear jinete"<<endl<<"3#Crear arquero"<<endl<<"4#Crear caballero"<<endl<<"5#Construir casa"<<endl<<"6#Construir cuartel"<<endl<<
	"7#Construir establo"<<endl<<"8#Ir a guerra"<<endl<<"9#Siguiente hora"<<endl<<"10#Salir"<<endl;
	int op;
	cin>>op;
		switch(op){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				
				break;
			}
			case 9:{
				
				break;
			}
			case 10:{
				menu();
				break;
			}
				
		}
		
	}


}

