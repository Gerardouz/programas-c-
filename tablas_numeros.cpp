#include<iostream>
using namespace std;
int main(){
int numero,resultado;
cout<<"introduzca numero"<<endl;
cin>>numero;
cout<<"tabla del "<<numero<<endl;
for (int i=1;i<11;i++)
{
	resultado=numero*i;
	cout<<numero<<"x"<<i<<"="<<resultado<<endl;
}
system("pause");
}

