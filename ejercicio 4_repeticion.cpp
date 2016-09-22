#include<iostream>
using namespace std;
int main(){
float nota=0,promedio=0;
for (int i=1;i<=10;i++)
{
	cout<<"introducir las notas del estudiante "<< i <<endl;
	for(int j=1;j<=7;j++)
	{
		cout<<"introducir la nota "<< j <<endl;
		cin>>nota;
		promedio=promedio+nota;
	}
	cout<<"el promedio del estudiante "<< i <<" es "<<promedio/7<<endl;
}
}
