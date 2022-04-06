#include "Vectores.hpp"
//Constructor
Vectores::Vectores(const int D){
	this->dim = D;
	v= new int[dim];
	for(int i=0; i<this->dim; i++){
		this->v[i] = 0 + rand()%11;
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

//Suma de vectores.
Vectores &operator +(const Vectores &vector1, const Vectores &vector2){
	
	Vectores *vector3 = new Vectores(vector1.getDim());
	for(int i=0; i<vector1.getDim(); i++){
		vector3->v[i]= vector1.v[i] + vector2.v[i];
	}
	return *vector3;
}
//Resta de vectores.
Vectores &operator -(const Vectores &vector1, const Vectores &vector2){
	
	Vectores *vector3 = new Vectores(vector1.getDim());
	for(int i=0; i<vector1.getDim(); i++){
		vector3->v[i]= vector1.v[i] - vector2.v[i];
	}
	
	return *vector3;
}

//Producto vector por un escalar
Vectores &operator *=(const double &escalar, const Vectores &vector1){
	
	Vectores *vector3 = new Vectores(vector1.getDim());
	for(int i=0; i<vector1.getDim(); i++){
		vector3->v[i]= escalar * vector1.v[i];
	}
	
	return *vector3;
}

//Producto de dos vectores
double &operator *(const Vectores &vector1, const Vectores &vector2){
	double sumavect=0;
	double *ptrz = &sumavect;
	for(int i=0; i<vector1.getDim(); i++){
		*ptrz += vector1.v[i] * vector2.v[i];
	}
	
	return *ptrz;	
}

//Busqueda de un vector.
Vectores Vectores::busqueda(const Vectores &vector1, const int &clave)
{
	bool bandera = false;
	int d=clave;
	for(int i=0; bandera == false && i<vector1.getDim(); i++){
		bandera = false;
		if(vector1.v[i]==d){
			bandera = true;
		}
	}

	if(bandera == false){
		cout<<"\nEl elemento no se encuentra en el vector."<<endl;
	}
	
	else if(bandera == true){
		cout<<"\nEl elemento si se encuentra en el vector."<<endl;
	}	
}
