#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;


class Vectores{
	friend Vectores &operator +(const Vectores &, const Vectores &);
	public:
		//Constructor
		Vectores(const int);
		//Constructor por defecto
		Vectores();
		Vectores mostrarvec();
		void setD(const int);
		void setTamano(const int);
		const int getD()const;
		const int getTamano()const;
		
	private:
		int *d;
		int tamano;
		
};
