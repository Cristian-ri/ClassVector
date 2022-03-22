#include "Vectores.hpp"

Vectores::Vectores(const int D){
	this->dim = D;
	v= new int[dim];
	for(int i=0; i<this->dim; i++){
		this->v[i] = 0 + rand()%100;
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
	this->dim=D;	
}

const int Vectores::getD()const{
	return this->dim;
}

const int Vectores::getTamano()const{
	return this->dim;
}

void Vectores::setTamano(const int Tamano){
	this->dim=Tamano;
}

//sobrecargar
Vectores Vectores::mostrarvec(){
	cout<<"[";
	for(int i=0; i<this->dim; i++){
		cout<<this->v[i]<<",";
	}
	cout<<"]"<<endl;
}

Vectores &operator +(const Vectores &vector1, const Vectores &vector2){
	//Validar que los dimenciones de los vectores sean iguales.
	Vectores *vector3 = new Vectores(vector1.getD());
	for(int i=0; i<vector1.getD(); i++){
		vector3->v[i]= vector1.v[i] + vector2.v[i];
	}
	return *vector3;
}
