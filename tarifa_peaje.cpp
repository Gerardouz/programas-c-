#include<iostream>
using namespace std;
int main(){
int tipo_vehiculo,hora,pasajeros,tarifa;
cout<<"seleccione el tipo de vehiculo"<<endl<<"1:automovil"<<endl<<"2:camion"<<endl;
cin>>tipo_vehiculo;
if (tipo_vehiculo==1)
{
	cout<<"la hora es de alta congestion?"<<endl<<"1: si"<<endl<<"2: no"<<endl;
	cin>>hora;
	switch (hora)
	{
		case 1:
				cout<<"ingrese el numero de pasajeros"<<endl;
				cin>>pasajeros;
				if (pasajeros>=3)
				{
					tarifa=0;
					cout<<"la cantidad a cobrar es Bs "<<tarifa;
				}
				break;
		case 2:
				cout<<"ingrese el numero de pasajeros"<<endl;
				cin>>pasajeros;
				tarifa=25;
				cout<<"la cantidad a cobrar es Bs "<<tarifa;
				break;
				default:
					cout<<"opcion invalida"<<endl;
				
		
	}
	
}
else
{
	if (tipo_vehiculo==2)
	{
		cout<<"la hora es de alta congestion?"<<endl<<"1: si"<<endl<<"2: no"<<endl;
	cin>>hora;
	switch (hora)
	{
		case 1:
				cout<<"ingrese el numero de pasajeros"<<endl;
				cin>>pasajeros;
				tarifa=50;
				cout<<"la cantidad a cobrar es Bs "<<tarifa;
				break;
		case 2:
				cout<<"ingrese el numero de pasajeros"<<endl;
				cin>>pasajeros;
				tarifa=30;
				cout<<"la cantidad a cobrar es Bs "<<tarifa;
				break;
				default:
					cout<<"opcion invalida"<<endl;
		
	}
	}
}




}
