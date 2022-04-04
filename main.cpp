#include "Vectores.hpp"

int main() 
{
	double x=3, escalar;
	srand(time(NULL));
	Vectores v1(3),v2(3), v3(3);
	cout<<"v1 = ";
	v1.mostrarvec();
	cout<<"v2 = ";
	v2.mostrarvec();
	cout<<"Suma"<<endl;
	if(v1.getDim()==v2.getDim()){
		v3 = v1 + v2;
		v3.mostrarvec();
	}
	else{
		cout<<"V1 no es compatible con v2"<<endl;
	}
	
	cout<<"\n";
	cout<<"Resta"<<endl;
	v3 = v1 - v2;
	v3.mostrarvec();
	cout<<"\n";
	cout<<"Producto por un escalar"<<endl;
	v3= x*=v1;
	cout<<x<<" * ";
	v1.mostrarvec();
	cout<<" = ";
	v3.mostrarvec();
	cout<<"\n";
	cout<<"Producto punto de dos vectortes"<<endl;
	escalar = v1 * v2;
	cout<<escalar<<endl;
		
	return 0;
}
