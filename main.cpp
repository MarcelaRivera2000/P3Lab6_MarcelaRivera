#include <iostream>
#include<stdlib.h>
#include <string> 
#include <vector>
#include "Civilizacion.h"
#include "Aldeano.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"
#include <typeinfo>

using namespace std; 
using std::cin;
using std::endl;
using std::cout;
vector <Civilizacion> lista;
void Jugar();
void menu();
void Guerra(int);
void HoraSiguiente(int);

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
	cout<<"--------- MENU ---------"<<endl<<"1#Crear aldeano"<<endl<<"2#Crear jinete"<<endl<<"3#Crear arquero"<<endl<<"4#Crear caballero"<<endl
		<<"5#Construir casa"<<endl<<"6#Construir cuartel"<<endl<<"7#Construir establo"<<endl<<"8#Ir a guerra"<<endl<<"9#Siguiente hora"<<endl<<"10#Salir"<<endl;
	int op;
	cin>>op;
		switch(op){
			case 1:{
				if ((lista[posi].getCasa()*5) > lista[posi].getLista().size()){
					Aldeano aldeano =Aldeano(100);
					lista[posi].getLista().push_back(aldeano);
					cout<<"Aldeano Creado..."<<endl;
				}else{
					cout<<"No tiene suficientes casas..."<<endl;
				}
				break;
			}
			case 2:{
				if (lista[posi].getCuartel() > 0){
					Jinete jinete = Jinete(100);
					lista[posi].getLista().push_back(jinete);
					cout<<"Jinete Creado..."<<endl;
				}else{
					cout<<"No tiene Establos..."<<endl;
				}
				break;
			}
			case 3:{
					if (lista[posi].getCuartel() > 0){
					Arquero arquero = Arquero(100);
					lista[posi].getLista().push_back(arquero);
					cout<<"Arquero Creado..."<<endl;
				}else{
					cout<<"No tiene Cuarteles..."<<endl;
				}
				break;
			}
			case 4:{
				if (lista[posi].getCuartel() > 0){
					Caballero caballero = Caballero(100);
					lista[posi].getLista().push_back(caballero);
					cout<<"Caballero Creado..."<<endl;
				}else{
					cout<<"No tiene Cuarteles..."<<endl;
				}
				break;
			}
			case 5:{
				lista[posi].setCasa();
				cout<<"Casa Creada ... ("<<lista[posi].getCasa()<<")"<<endl;
				break;
			}
			case 6:{
				lista[posi].setCuartel();
				cout<<"Cuartel Creado ... ("<<lista[posi].getCuartel()<<")"<<endl;
				break;
			}
			case 7:{
				lista[posi].setEstablo();
				cout<<"Establo Creado ... ("<<lista[posi].getEstablo()<<")"<<endl;
				break;
			}
			case 8:{
				 Guerra(posi);
				break;
			}
			case 9:{
				HoraSiguiente(posi);
				break;
			}
			case 10:{
				menu();
				break;
			}
				
		}
		
	}
}

void Guerra(int posi){
	cout<<"--------- ELIJA CON QUE EQUIPO DESEA BATALLAR ---------"<<endl;
	for(int i=0;i<lista.size();i++){
		if(i==posi){
			i++;
		}else{
			cout<<i<<"# "<<lista[i].getNombre()<<endl;	
		}
	}
	int enemigo;
	cin>>enemigo;
	for(int i=0;i<lista[posi].getLista().size();i++){
		Habitante ha=lista[posi].getLista()[i];
		
		cout<<typeid(ha).name()<<endl;
		
		Guerrero hola =dynamic_cast<Guerrero&>(ha);
		
		
		
	
	
	}
	
	
	
	
}

void HoraSiguiente(int posi){
	
}
