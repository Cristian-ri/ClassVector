#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include<cstdlib>
using std::rand;
using std::srand;
#include<ctime>
using std::time;


class Vectores{
	friend Vectores &operator +(const Vectores &, const Vectores &);
	friend Vectores &operator -(const Vectores &, const Vectores &);
	public:
		//Constructor
		Vectores(const int);
		Vectores mostrarvec();
		void setV(const int);
		void setDim(const int);
		const int getV()const;
		const int getDim()const;
		//función que permita inserta el elemento en una posición.
		
	private:
		int *v;
		int dim;
		
};
