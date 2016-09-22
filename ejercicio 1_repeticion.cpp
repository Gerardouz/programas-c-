#include <iostream>
using namespace std;
int main()
{
	int contador1=0,contador2=0,contador3=0,numero=1,numero1=0;
	
while(numero!=0)
{
cout<<"introduzca numero"<<endl;
cin>>numero1;
if (numero1>=15)
{
contador1=contador1+1;
}

	
if(numero1>=50)
{
contador2=contador2+1;
}

if(numero1>=25 && numero1<=45) 
{
contador3=contador3+1;
}
		
	
cout<<"introduzca cualquier valor para continuar"<<endl<<"0 para salir"<<endl;
cin>>numero;

}
cout<<"numero naturales menores que 15"<<"="<<contador1<<endl;
cout<<"numeros naturales mayores que 50"<<"="<<contador2<<endl;
cout<<"numeros naturales entre el rango de 25 y 45"<<"="<<contador3<<endl;

}

