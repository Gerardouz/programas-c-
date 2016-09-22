#include <iostream>
using namespace std;
int main()
{
	int carro_rojo=0,carro_verdes=0,carro_azul=0,carro=0;
	char color;
	while(carro>=0){
		cout<<"ingrese el color de carro "<<endl;
		cout<<"r: rojo"<<endl<<"v: verde"<<endl<<"a: azul"<<endl;
		cin>>color;
		switch (color)
		{
		
		case 'r': 
			carro_rojo=carro_rojo+1;
			break;
			case 'v':
				carro_verdes=carro_verdes+1;
				break;
				case 'a':
					carro_azul=carro_azul+1;
					break; 
					default:
						cout<<"opcion invalida "<<endl;
						
		}
	cout<<"ingrese numero positivo para continuar o numero negativo para salir"<<endl;
	cin>>carro;					
	}
	cout<<"el numero de carros de color verde es "<<"="<<carro_verdes<<endl;
	cout<<"el numero de carros de color rojo es "<<"="<<carro_rojo<<endl;
	cout<<"el numero de carros de color azul es "<<"="<<carro_azul<<endl;
	cout<<"la cantidad de carros totales  es "<<carro_rojo+carro_verdes+carro_azul<<endl; 
	if (carro_rojo>carro_verdes && carro_rojo>carro_azul)
	{
	
	
		cout<<"el color de carro que mas paso es"<<"="<<"rojo ="<<carro_rojo<<endl;
		}
		else
		if (carro_verdes>carro_rojo && carro_verdes>carro_azul)
		{
			cout<<"el color de carro que mas paso es "<<"="<<"verde ="<<carro_verdes<<endl;	
		}
		else
		if(carro_azul>carro_rojo && carro_azul>carro_verdes)
		{
			cout<<"el color de carro que mas pasa es "<<"="<<"azul ="<<carro_azul<<endl;
		}
	}

