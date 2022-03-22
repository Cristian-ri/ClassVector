#include "Vectores.hpp"

int main() 
{
	srand(time(NULL));
	Vectores v1(3),v2(3), v3(3);
	v1.mostrarvec();
	v2.mostrarvec();
	v3 = v1 + v2;
	v3.mostrarvec();
	
	//v2.mostrarvec();
		
	return 0;
}
