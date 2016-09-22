#include<iostream>
using namespace std;
void descendente (float valor1,float valor2,float valor3)
{
	if (valor1>valor2 && valor1>valor3 && valor2>valor3)
	{
		cout<<valor1<<endl<<valor2<<endl<<valor3<<endl;
		
	}
	else
		if (valor2>valor1 && valor2>valor3 && valor1>valor3)
		{
			cout<<valor2<<endl<<valor1<<endl<<valor3<<endl;
		}
		else
			if (valor3>valor1 && valor3>valor2 && valor2>valor1)
			{
				cout<<valor3<<endl<<valor2<<endl<<valor1<<endl;
			}
			else
				if(valor2>valor1 && valor2>valor3 && valor3>valor1)
				{
					cout<<valor2<<endl<<valor3<<endl<<valor1<<endl;
				}
				else
					if(valor1>valor2 && valor1>valor3 && valor3>valor2)
					{
						cout<<valor1<<endl<<valor3<<endl<<valor2<<endl;
					}
					else
						if(valor3>valor1 && valor3>valor2 && valor1>valor2)
						{
							cout<<valor3<<endl<<valor1<<valor2<<endl;
						}
}
int main(){
	float numero1=0,numero2=0,numero3=0;
	cout<<"ingrese el primer numero"<<endl;
	cin>>numero1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>numero2;
	cout<<"ingrese el tercer numero"<<endl;
	cin>>numero3;
	descendente(numero1,numero2,numero3);
	
}
