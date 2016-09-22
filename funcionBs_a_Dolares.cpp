#include<iostream>
using namespace std;
//funcion para llevar bolivares a dolares//
float Bs_Dolares(float valor1,float valor2)
{
	float resultado=0;
	resultado=valor1/valor2;
	return resultado;
}
int main(){
	float bolivar=0,dolar=0,conversion=0;
	cout<<"introduzca los Bolivares a convertir "<<endl;
	cin>>bolivar;
	cout<<"ingrese el valor del dolar en bolivares "<<endl;
	cin>>dolar;
	conversion=Bs_Dolares(bolivar,dolar);
	cout<<bolivar <<" bolivares son " <<conversion<<" dolares "<<endl;
}
