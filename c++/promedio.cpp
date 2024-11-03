#include <iostream>

using namespace std;

int main(){

cout<<"Bienvenido  tu calculadora de promedio con base a 4";

int A, B, C;

cout<<"\n Ingresar la nota del primer corte del estudiante\n"; cin>>A;
cout<<"\n Ingresar la nota del segundo corte del estudiante\n"; cin>>B;
cout<<"\n Ingresar la nota del tercer corte del estudiante\n"; cin>>C;

switch(1)

case 1:
	if (((A+B+C)/3)>=2)
	cout<<"el estudiante paso";
	
	else if (((A+B+C)/3)<2)
	cout<<"el estudiante no paso";
	
break;

return 0;

}
