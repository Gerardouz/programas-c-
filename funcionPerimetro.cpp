#include<iostream>
using namespace std;
//funcion para calcular el perimetro de un rectangulo//
int perimetro_rectangulo(int valor1,int valor2)
{	int resultado=0;
	resultado=(valor1*2)+(valor2*2);
	return resultado;
}
int main(){
	int perimetro=0,base=0,altura=0;
	cout<<"introducir el ancho del rectangulo "<<endl;
	cin>>base;
	cout<<"introducir la altura del rectangulo "<<endl;
	cin>>altura;
	perimetro=perimetro_rectangulo(base,altura);
	cout<<"el perimetro del rectangulo es "<<perimetro<<endl;
	
}
