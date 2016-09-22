#include<iostream>
using namespace std;
int main(){
	int codigo;
	cout<<"introducir codigo identificador"<<endl;
	cin>>codigo;
	if (codigo%2==0 && codigo%3==0 && codigo%5==0) 
	{
		cout<<"director general"<<endl;
	}
	else
	{
		if (codigo%3==0 && codigo%5==0)
		{
			cout<<"directivo"<<endl;
		}
		else
		{
			if (codigo%2==0)
			{
				cout<<"Staff"<<endl;
			}
			else
			{
				if(codigo%2!=0 && codigo%3!=0 && codigo%5!=0)
				{
					cout<<"seguridad"<<endl;
				}
			
				
			}
		}

	}
}
