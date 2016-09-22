#include<iostream>
using namespace std;
void evaluaNum(int valor1,int valor2,int valor3)
{
	int resultado;
	if((valor1+valor2+valor3)<0)
{
	resultado=-1;
	cout<<"la clave del numero es "<<resultado<<endl;
	
}
else
	if((valor1+valor2+valor3)>0)
	{
		resultado=(valor1+valor2+valor3)%7;
		cout<<"la clave del numero es "<<resultado<<endl;
	}
	

}
int main(){
	int digito1,digito2,digito3;
	cout<<"introduzca el numero entero de 3 cifras (presione enter entre cada digito) "<<endl;
	for(int i=0;i<3;i++)
	{
		if(i==0)
		{
			cin>>digito1;
		}	
		else
			if(i==1)
			 {
			 	cin>>digito2;
			 }
			 else
			 	if(i==2)
			 	{
			 		cin>>digito3;
			 	}
	}
	evaluaNum(digito1,digito2,digito3);
	
	}
