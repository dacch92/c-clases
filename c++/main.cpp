
#include <iostream>

using namespace std;

int main(){
 
 cout<<"bienvenido a la calculadora de costo minutos AT&T";
 
 int x, z=0;


cout<<"\n Ingrese numero de minutos\n"; cin>>x;


	if (x>1)
		{
		z=(200*x);
		cout<<"El costo del servicio es:"<<z<<endl;
		}
	else if(x<1)
		
		{
		z=200;
		cout<<"El costo del servicio es:"<<z<<endl;
		}
	else
		{
		z=0;
		cout<<"No tiene costo."<<z<<endl;
		}
		
		
return 0;
	}
