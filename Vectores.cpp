#include "Vectores.hpp"
//Constructor
Vectores::Vectores(const int D){
	this->dim = D;
	v= new int[dim];
	for(int i=0; i<this->dim; i++){
		this->v[i] = 0 + rand()%100;
	}	
}

void Vectores::setDim(const int D){
	this->dim=D;	
}

const int Vectores::getDim()const{
	return this->dim;
}

const int Vectores::getV()const{
	return this->dim;
}

void Vectores::setV(const int Vv){
	this->dim=Vv;
}

Vectores Vectores::mostrarvec(){
	cout<<"[";
	for(int i=0; i<this->dim; i++){
		cout<<this->v[i]<<",";
	}
	cout<<"]"<<endl;
}

Vectores &operator +(const Vectores &vector1, const Vectores &vector2){
	
	Vectores *vector3 = new Vectores(vector1.getDim());
	for(int i=0; i<vector1.getDim(); i++){
		vector3->v[i]= vector1.v[i] + vector2.v[i];
	}
	return *vector3;
}

Vectores &operator -(const Vectores &vector1, const Vectores &vector2){
	
	Vectores *vector3 = new Vectores(vector1.getDim());
	for(int i=0; i<vector1.getDim(); i++){
		vector3->v[i]= vector1.v[i] - vector2.v[i];
	}
	
	return *vector3;
}
