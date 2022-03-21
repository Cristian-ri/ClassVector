#include "Vectores.hpp"

Vectores::Vectores(const int D){
	tamano = D;
	d= new int[tamano];
	srand(time(NULL));
	for(int i=0; i<tamano; i++){
		d[i] = 0 + rand()%100;
	}	
}

//Constructor por defecto
/*Vectores::Vectores(){
	this->tamano;
	d= new int[tamano];
	for(int i=0; i<tamano; i++){
		d[i] = 0;
	}
	srand(time(NULL));
}*/

void Vectores::setD(const int D){
	*d=D;	
}

const int Vectores::getD()const{
	return *d;
}

const int Vectores::getTamano()const{
	return this->tamano;
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

Vectores &operator +(const Vectores &vector1, const Vectores &vector2, const Vectores &vector3){
	for(int i=0; i<tamano; i++){
		vector3[i]= vector1[i] + vector2[i];
	}
}
