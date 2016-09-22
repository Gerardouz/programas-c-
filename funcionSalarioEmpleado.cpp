#include<iostream>
using namespace std;
//funcion para calcular el sueldo de un empleado//
float sueldoEmpleado(float valor1,float valor2)
{
	float sueldo=0;
	 if (valor1>=0 && valor1<=40)
{
	sueldo=(valor2*valor1);
		
	
}
else
{
	if (valor1>40 && valor1<=48)
	{
	
	sueldo=(valor2*40)+(valor1-40)*(valor2*2);
	
	}
	else
	{
		if (valor1>48)
		{
		sueldo=(valor2*40)+8*(valor2*2)+(valor1-48)*(valor2*3);
		
		}
		else 
		{
			cout<<"Error"<<endl;
		}
	}
	
}

return sueldo;

	
}
int main(){

float horas_trabajadas,costo_hora,dinero_ganado;
int n=0;
cout<<"introduzca la cantidad de empleados"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
	
cout<<"empleado numero " << i << endl;
cout<<"introduzca las horas trabajadas"<<endl;
cin>>horas_trabajadas;
cout<<"introduzca el costo por hora"<<endl;
cin>>costo_hora;
dinero_ganado=sueldoEmpleado(horas_trabajadas,costo_hora);
cout<<"el sueldo del empleado es " <<dinero_ganado<<endl;

}

}

