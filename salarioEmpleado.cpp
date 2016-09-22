#include<iostream>
using namespace std;
int main(){

float horas_trabajadas,costo_hora,dinero_ganado;
cout<<"introduzca las horas trabajadas"<<endl;
cin>>horas_trabajadas;
cout<<"introduzca el costo por hora"<<endl;
cin>>costo_hora;
if (horas_trabajadas>=0 && horas_trabajadas<=40)
{
	dinero_ganado=(costo_hora*horas_trabajadas);
	cout<<"la cantidad de dinero que se recibira es "<<dinero_ganado<<endl;	
	
}
else
{
	if (horas_trabajadas>40 && horas_trabajadas<=48)
	{
	
	dinero_ganado=(costo_hora*40)+(horas_trabajadas-40)*(costo_hora*2);
	cout<<"la cantidad de dinero que se recibira es "<<dinero_ganado<<endl;
	}
	else
	{
		if (horas_trabajadas>48)
		{
		dinero_ganado=(costo_hora*40)+8*(costo_hora*2)+(horas_trabajadas-48)*(costo_hora*3);
		cout<<"la cantidad de dinero que se recibira es "<<dinero_ganado<<endl;
		}
		else 
		{
			cout<<"Error"<<endl;
		}
	}
	
}






}

