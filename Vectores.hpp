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
	public:
		//Constructor
		Vectores(const int);
		//Constructor por defecto
		Vectores();
		Vectores mostrarvec();
		void setDim(const int);
		const int getD()const;
		const int getTamano()const;
		//funci�n que permita inserta el elemento en una posici�n.
		
	private:
		int *v;
		int dim;
		
};
