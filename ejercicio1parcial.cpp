#include<iostream>
using namespace std;
int main(){
int j=1,mayor=0,pob_ciudad=0;
while(j<26)
{
	mayor=0;
	for(int k=1;k<5;k++)
	{
		cout<<"introduzca poblacion de la ciudad " << k <<endl;
		cin>>pob_ciudad;
		if(pob_ciudad>mayor)
		{
			mayor=pob_ciudad;
		}
	}
cout<<"poblacion mayor del pais " << j <<"="<<mayor<<endl;
j=j+1;
}

}
