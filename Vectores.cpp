#include "Vectores.hpp"

Vectores::Vectores(const int D){
	tamano = D;
	d= new int[tamano];
	for(int i=0; i<tamano; i++){
		d[i] = 0;
	}	
}

/*Vectores Vectores::mostrarvec(const int *vec, const char *nombrevec){
	cout<<*nombrevec<<endl;
}*/
