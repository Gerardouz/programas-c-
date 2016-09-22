#include<iostream>
using namespace std;
int main(){

float nota1=0,nota2=0,nota3=0,promedio=0,codigo_materia=0;

cout<<"introducir el codigo de la materia"<<endl;
cin>>codigo_materia;
cout<<"introducir la primera nota"<<endl;
cin>>nota1;
cout<<"introducir la segunda nota"<<endl;
cin>>nota2;
cout<<"introducir la tercera nota"<<endl;
cin>>nota3;

promedio=nota1*0.3+nota2*0.3+nota3*0.4;

if (promedio>=7 && promedio<10)
{
	cout<<"Aprobado"<<endl;
	cout<<"El promedio obtenido es "<<promedio<<endl;
	cout<<"Codigo de la materia: "<<codigo_materia<<endl;
}
else
{
	if (promedio>=0 && promedio<7)
	{
		cout<<"Reprobado"<<endl;
		cout<<"El promedio obtenido es "<<promedio<<endl;
		cout<<"Codigo de la materia: "<<codigo_materia<<endl;
	}
	else
	{
		if (promedio==10)
		{
		cout<<"Alumno Exelente"<<endl;
		cout<<"El promedio obtenido es "<<promedio<<endl;
		cout<<"Codigo de la materia: "<<codigo_materia<<endl;
		}
		else
		cout<<"Error, las notas ingresadas deben estar entre 0 y 10"<<endl;
		
		
	}
}




system("pause");
}
