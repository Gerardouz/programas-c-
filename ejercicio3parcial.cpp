#include<iostream>
using namespace std;
int main(){
int estado_civil=0,valor=0,monto=0,ventas_total=0;
char hijos;
while(valor>=0)
{
	cout<<"estado civil:"<<endl<<"1:soltero"<<endl<<"2:casado"<<endl;
	cin>>estado_civil;
	switch(estado_civil)
	{
		case 1:
		cout<<"introduzca el monto de sus ventas en una semana"<<endl;
		cin>>monto;
		ventas_total=ventas_total+monto;
		cout<<"tiene hijos?"<<endl<<"s: si"<<endl<<"n: no"<<endl;
		cin>>hijos;
		if(hijos=='n')
		{
			cout<<"su comision es de Bs "<<monto*0.05<<endl;
			cout<<"su sueldo neto semanal es de Bs "<<monto*0.05+20000<<endl;
			cout<<"su prima por seguro de salud es de Bs 1000"<<endl;
			cout<<"su sueldo final es de Bs " <<monto*0.05+20000-1000<<endl;
			cout<<"las ganacias totales de la compañia esta semana es de Bs "<<ventas_total<<endl;

		}
		break; 



		case 2:
		cout<<"introduzca el monto de sus ventas"<<endl;
		cin>>monto;
		ventas_total=ventas_total+monto;
		cout<<"tiene hijos?"<<endl<<"s: si"<<endl<<"n: no"<<endl;
		cin>>hijos;
		if(hijos=='s')
		{
			cout<<"su comision es de Bs "<<monto*0.05<<endl;
			cout<<"su sueldo neto semanal es de Bs "<<monto*0.05+20000<<endl;
			cout<<"su prima por seguro de salud es de Bs 5000"<<endl;
			cout<<"su sueldo final es de Bs " <<monto*0.05+20000-5000<<endl;
			cout<<"las ganacias totales de la compañia esta semana es de Bs "<<ventas_total<<endl;
			
		}
		else
		if(hijos=='n')
		{
			cout<<"su comision es de Bs "<<monto*0.05<<endl;
			cout<<"su sueldo neto semanal es de Bs "<<monto*0.05+20000<<endl;
			cout<<"su prima por seguro de salud es de Bs 2500"<<endl;
			cout<<"su sueldo final es de Bs " <<monto*0.05+20000-2500<<endl;
			cout<<"las ganacias totales de la compañia esta semana es de Bs "<<ventas_total<<endl;
			
		
		}
		break;
		default:
			cout<<" opcion invalida "<<endl;
	}
cout<<"introduzca un valor positivo para continuar o uno negativo para salir"<<endl;
cin>>valor;
}
}
