#include<iostream>
using namespace std;
int sumados(int valor1,int valor2)
{
	int total=0;
	total=valor1+valor2;
	return total;
}
int main(){
	int suma=0,numero1,numero2;
	cout<<"introducir numero 1"<<endl;
	cin>>numero1;
	cout<<"introducir numero 2"<<endl;
	cin>>numero2;
	suma=sumados(numero1,numero2);
	cout<<" el resultado es "<< suma <<endl;
}
