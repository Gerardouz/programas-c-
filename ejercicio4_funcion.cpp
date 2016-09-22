#include<iostream>
using namespace std;
float mayor3num(float valor1,float valor2,float valor3)
{
	int resultado=0;
	if(valor1>valor2 && valor1>valor3)
	{
	resultado=valor1;
	return resultado;
	
	}
	else
		if(valor2>valor1 && valor2>valor3)
		{
			resultado=valor2;
			return resultado;
		}
		else
			if(valor3>valor1 && valor3>valor2)
			{
				resultado=valor3;
				return resultado;
			}
	
	
}
float menor3num(float valor1,float valor2,float valor3)
{
	int resultado=0;
	if(valor1<valor2 && valor1<valor3)
	{
	
	resultado=valor1;
	return resultado;
	
	}
	else
		if(valor2<valor1 && valor2<valor3)
		{
			resultado=valor2;
			return resultado;
		}
		else
			if(valor3<valor1 && valor3<valor2)
			{
				resultado=valor3;
				return resultado;
			}
	
	
}
int main(){
	int numero1,numero2,numero3,mayor,menor;
	cout<<"introduzca el primer numero"<<endl;
	cin>>numero1;
	cout<<"introduzca el segundo numero"<<endl;
	cin>>numero2;
	cout<<"introduzca el tercer numero"<<endl;
	cin>>numero3;
	mayor=mayor3num(numero1,numero2,numero3);
	menor=menor3num(numero1,numero2,numero3);

	cout<<"el mayor es "<<mayor<<endl<<"el menor es "<<menor<<endl;
	
}

