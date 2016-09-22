#include <iostream>
using namespace std;
int main()
{
	int nota=0,numero=0;
	char letra;
	do
	{

	cout<<"introduzca la nota del estudiante"<<endl;
	cin>>nota;
	if(nota>=16 && nota<=20)
	{
		cout<<"alumno sobresaliente"<<endl;
}
else
if(nota>=10 && nota<=15)
{
	cout<<" alumno satisfactorio"<<endl;
	
}
else
if(nota>=0 && nota<=9)
{
	cout<<"alumno no satisfactorio"<<endl;
}
else {
cout<<"nota invalida el rango debe estar entre 0 a 20"<<endl;
}
cout<<"si quieres continuar marca s si quieres salir marca cualquier letra"<<endl;
cin>>letra;
	} while (letra=='s');
	cout<<"proceso finalizado con exito"<<endl;
}
