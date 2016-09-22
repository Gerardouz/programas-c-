#include<iostream>
using namespace std;
int evaluaNum(int valor1,int valor2,int valor3)
{
int resultado=0;
if((valor1+valor2+valor3)<0)
{
	resultado=-1;
	return resultado;
}
else
	if((valor1+valor2+valor3)>0)
	{
		resultado=(valor1+valor2+valor3)%7;
		return resultado;
	}

	
}
int main(){
	int digito1,digito2,digito3,total;
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
	total=evaluaNum(digito1,digito2,digito3);
	cout<<"la clave del numero es "<<total<<endl;
	
}
