#include "Vectores.hpp"

Vectores::Vectores(const int D){
	tamano = D;
	d= new int[tamano];
	for(int i=0; i<tamano; i++){
		d[i] = 0;
	}	
}

//Constructor por defecto
Vectores::Vectores(){
	d= new int[tamano];
	for(int i=0; i<tamano; i++){
		d[i] = 0;
	}
}

void Vectores::setD(const int D){
	*d=D;
	
}

void Vectores::setTamano(const int Tamano){
	this->tamano=Tamano;
}

Vectores Vectores::mostrarvec(){
	cout<<"[";
	for(int i=0; i<tamano; i++){
		cout<<d[i]<<",";
	}
	cout<<"]"<<endl;
}

/*Vectores &operator +(const Vectores &vector1, const Vectores &vector2){
	for(int i=0; i<tamano; i++){
		
	}
}*/
