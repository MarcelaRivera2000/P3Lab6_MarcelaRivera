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
int global=0;

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
				global=0;
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
					Aldeano* aldeano =new Aldeano(100);
					lista[posi].setAldeano(aldeano);
					cout<<"Aldeano Creado..."<<endl;
				}else{
					cout<<"No tiene suficientes casas..."<<endl;
				}
				break;
			}
			case 2:{
				if (lista[posi].getEstablo() > 0){
					Jinete* jinete = new Jinete(100);
					lista[posi].setAldeano(jinete);
					cout<<"Jinete Creado..."<<endl;
				}else{
					cout<<"No tiene Establos..."<<endl;
				}
				break;
			}
			case 3:{
					if (lista[posi].getCuartel() > 0){
					Arquero* arquero =new  Arquero(100);
					lista[posi].setAldeano(arquero);
					cout<<"Arquero Creado..."<<endl;
				}else{
					cout<<"No tiene Cuarteles..."<<endl;
				}
				break;
			}
			case 4:{
				if (lista[posi].getCuartel() > 0){
					Caballero* caballero =new Caballero(100);
					lista[posi].setAldeano(caballero);
					cout<<"Caballero Creado..."<<endl;
				}else{
					cout<<"No tiene Cuarteles..."<<endl;
				}
				break;
			}
			case 5:{
				
				if(lista[posi].getMadera()>=50){
					lista[posi].setCasa();	
					cout<<"Casa Creada ... ("<<lista[posi].getCasa()<<")"<<endl;	
				}else{
					cout<<"No hay suficiente madera..."<<endl;
				}
				
				break;
			}
			case 6:{
				if(lista[posi].getMadera()>=200 && lista[posi].getOro()>=50){
					lista[posi].setCuartel();
					cout<<"Cuartel Creado ... ("<<lista[posi].getCuartel()<<")"<<endl;	
				}else{
					cout<<"No hay sufientes materiales... "<<endl;
				}
				
				
				break;
			}
			case 7:{
				if(lista[posi].getMadera()>=150 && lista[posi].getOro()>=50){
					lista[posi].setEstablo();
					cout<<"Establo Creado ... ("<<lista[posi].getEstablo()<<")"<<endl;
				}else{
					cout<<"No hay sufientes materiales... "<<endl;
				}
				
				break;
			}
			case 8:{
				 Guerra(posi);
				break;
			}
			case 9:{
				HoraSiguiente(posi);
				global++;
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
	vector<Guerrero*> aux;
	for(int i=0;i<lista[posi].getLista().size();i++){
		Habitante* ha=lista[posi].getLista()[i];			
		if(dynamic_cast<Guerrero*>(ha)){
			Guerrero* h =dynamic_cast<Guerrero*>(ha);
			aux.push_back(h);
		}
	}
	
	for(int i=0;i<lista[enemigo].getLista().size();i++){
		
		Habitante* enemigoo=lista[enemigo].getLista()[i];
		
		if(dynamic_cast<Guerrero*>(enemigoo)){
			Guerrero* enemigoGuerrero =dynamic_cast<Guerrero*>(enemigoo);
			Habitante* yo = dynamic_cast<Habitante*>(aux[i]);
			
			
		//	enemigoGuerrero->ataque(yo);
		}
	
	}

	
	
	
	
	cout<<"Cantidad guerreros: "<<aux.size()<<endl;
}

/*Guerrero* gerrero; 	 	    
		gerrero = dynamic_cast<Guerrero*>(puntero);*/

void HoraSiguiente(int posi){
	int alde=0,jine=0,arque=0,caba=0;
	for(int i=0;i<lista[posi].getLista().size();i++){
		Habitante* ha=lista[posi].getLista()[i];			
		if(dynamic_cast<Aldeano*>(ha)){
			cout<<"aldeano"<<endl;
			alde++;
		}
		if(dynamic_cast<Jinete*>(ha)){
			cout<<"jinete"<<endl;
			jine++;
		}
		if(dynamic_cast<Caballero*>(ha)){
			cout<<"caba"<<endl;
			caba++;
		}
		if(dynamic_cast<Arquero*>(ha)){
		cout<<"arquero"<<endl;
			arque++;
		}
	}	
	
	lista[posi].setAlimento(25*alde);
	if(global%6==0){
		lista[posi].setMadera(5*jine);
		lista[posi].setOro(10*jine);
		lista[posi].setAlimento(50*jine);
	}
	if(global%4==0){
		lista[posi].setMadera(10*arque);
		lista[posi].setOro(10*arque);
		lista[posi].setAlimento(50*arque);
		lista[posi].setMadera(5*caba);
		lista[posi].setOro(15*caba);
		lista[posi].setAlimento(50*caba);
	}
	cout<<"--------- RESUMEN ---------"<<endl<<"Madera: "<<lista[posi].getMadera()<<endl<<"Oro: "<<lista[posi].getOro()<<endl<<"Alimentos: "<<lista[posi].getAlimento()<<
	endl<<"Aldeanos: "<<alde<<endl<<"Jinetes: "<<jine<<endl<<"Caballeros: "<<caba<<endl<<"Arqueros: "<<arque<<endl<<"Capacidad de habitantes Actual:"<<lista[posi].getCasa()*5<<endl;	
}























