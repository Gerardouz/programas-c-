#include<iostream>
using namespace std;
//funcion para calcular el area de un circulo//
float areaCirculo(float valor1)
{
	float resultado=0;
	resultado=3.1416*valor1*valor1;
	return resultado;
	
	
}
int main(){
	float radio=0,area=0;
	cout<<"introduzca el radio del circulo "<<endl;
	cin>>radio;
	area=areaCirculo(radio);
	cout<<"el area del circulo es "<<area<<endl;
}

