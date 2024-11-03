
#include <iostream>

using namespace std;

int main(){
 
 cout<<"Bienvenido a la calculadora de costo minutos AT&T";
 
 int z=0;
 float x;


cout<<"\n Ingrese numero de minutos\n"; cin>>x;

	if (x>1)
		{
		z=(200*x);
		cout<<"El costo del servicio es:"<<z<<endl;
		}
		
	else if(x<=1)
		{
		z=200;
		cout<<"El costo del servicio es:"<<z<<endl;
		}

	if  (x==0)	
		{
		z=0;
		cout<<"No tiene costo."<<z<<endl;
		}
		return 0;
  }

	
