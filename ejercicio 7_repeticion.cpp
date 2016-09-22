#include<iostream>
using namespace std;
int main(){
int numero=0,contador1=0,contador2=0,contador3=0;
for(int i=1;i<=20;i++)
{
	cout<<"introduzca el numero "<< i <<endl;
	cin>>numero;
	if (numero>0)
	{
		contador1+=1;
	}
	else
		if(numero<0)
		{
			contador2+=1;
		}
		else
			if(numero==0)
			{
				contador3+=1;
			}
			
}
cout<<"la cantidad de numeros positivos es "<< contador1<<endl;
cout<<"la cantidad de numeros negativos es "<< contador2<<endl;
cout<<"la cantidad de numeros neutros es "<< contador3<<endl;
}

