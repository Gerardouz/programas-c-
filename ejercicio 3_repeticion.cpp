#include<iostream>
using namespace std;
int main(){
	float nota,promedio;
		
		for(int i=1;i<=7;i++)
		{
			cout<<"ingrese la nota numero "<< i <<endl;
			cin>>nota;
			promedio=promedio+nota;
		}
		cout<<"el promedio del alumno es "<<promedio/7<<endl;
	

		
	
}
