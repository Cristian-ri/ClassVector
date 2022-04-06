#include "Vectores.hpp"

void menu(int);
double x, y, escalar;
int main() 
{
	int op;
	srand(time(NULL));
	cout<<"Menu de opciones: "<<endl;
	cout<<"1) Suma de vectores"<<endl;
	cout<<"2) Resta de vectores"<<endl;
	cout<<"3) Producto por un escalar"<<endl;
	cout<<"4) Producto punto de vectores"<<endl;
	cout<<"5) Busqueda de elemento"<<endl;
	cout<<"\nIngrese su opcion: ";
	cin>>op;
	menu(op);

	return 0;
}

void menu(int op){
	double dimen;
	cout<<"Ingrese dimencion del vector"<<endl;
	cin>>dimen;
	cout<<"\n";
	Vectores v1(dimen),v2(dimen), v3(dimen);
	cout<<"v1 = ";
	v1.mostrarvec();
	cout<<"v2 = ";
	v2.mostrarvec();
	switch(op){
		case 1: 
			cout<<"\nSuma de Vectores"<<endl;
			v3 = v1 + v2;
			v3.mostrarvec();
			break;
		case 2:
			cout<<"\nResta de Vectores"<<endl;
			v3 = v1 - v2;
			v3.mostrarvec();
			break;
		case 3: 
			cout<<"\nProducto por un escalar"<<endl;
			cout<<"Ingrese el numero a multiplicar: ";
			cin>>x;
			v3= x*=v1;
			cout<<x<<" * ";
			v1.mostrarvec();
			cout<<" = ";
			v3.mostrarvec();
			cout<<"\n";
			break;
		case 4:
			cout<<"\nProducto punto de dos vectores"<<endl;
			escalar = v1 * v2;
			cout<<escalar<<endl;
			break;
		case 5:
			cout<<"\nIngrese el elemento a buscar: ";
			cin>>y;
			v3.busqueda(v1,y);
			break;	
		default:
			cout<<"\nOpcion no valida."<<endl;			
	}	
}
