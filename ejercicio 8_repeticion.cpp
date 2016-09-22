#include<iostream>
using namespace std;
int main(){
int numero=0;
for (int i=1;i<=15;i++)
{
	cout<<"introduzca el numero negativo " <<endl;
	cin>>numero;
	if (numero>=0)
	{
		cout<<"el numero debe ser negativo"<<endl;
	}
	else
		if(numero<0)
		{
		cout<<"el numero en positivo es: "<< numero*-1<<endl;
		}
	

	
}
}
