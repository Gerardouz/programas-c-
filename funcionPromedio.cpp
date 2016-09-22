#include<iostream>
using namespace std;
//funcion para calcular el promedio de un estudiante para 3 notas//
float  promedio_estudiante(float valor1, float valor2, float valor3)
{	float resultado=0;
	resultado=(valor1+valor2+valor3)/3;
	return resultado;
}
int main(){
	float nota1=0,nota2=0,nota3=0,promedio=0;
	cout<<"introduzca la primera nota "<<endl;
	cin>>nota1;
	cout<<"introduzca la segunda nota "<<endl;
	cin>>nota2;
	cout<<"introduzca la tercera nota "<<endl;
	cin>>nota3;
	promedio=promedio_estudiante(nota1,nota2,nota3);
	cout<<"el promedio del estudiante es " <<promedio<<endl;
}
