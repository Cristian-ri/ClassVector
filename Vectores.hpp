#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class Vectores{
	public:
		//Constructor
		Vectores(const int);
		Vectores mostrarvec(const Vectores * , const Vectores *);
		
	private:
		int *d;
		int tamano;
		
};
