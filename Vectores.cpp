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

void Vectores::busqueda(int clave){
	char bandera = 'F';
	int i;
	int d=clave;
	Vectores vector1(3);
	while((bandera=='F') && i<vector1.getDim()){
		if(vector1.v[i]==d){
			bandera == 'V';
		}
		i++;	
	}
	
	if(bandera=='F'){
		cout<<"\nNo se encuentra en el vector"<<endl;
	}
	
	else if(bandera=='V'){
		cout<<"\nSe encuentra en el vector"<<endl;
	}
}
