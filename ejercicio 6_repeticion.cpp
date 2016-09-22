#include<iostream>
using namespace std;
int main() {
int numero=0,contador=0;
for	(int i=1;i<=3;i++)
{
	cout<<"introducir el numero "<< i <<endl;
	cin>>numero;
	if (numero>0)
	{
		contador+=1;
	}
}
cout<<"la cantidad de numeros positivos es: "<<contador<<endl;
}
