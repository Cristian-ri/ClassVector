#include "Vectores.hpp"

int main() 
{
	srand(time(NULL));
	Vectores v1(3),v2(5), v3(3);
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
	/*cout<<"Resta"<<endl;
	v3 = v1 - v2;
	v3.mostrarvec();*/
	
		
	return 0;
}
