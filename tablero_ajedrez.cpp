#include<stdio.h>

class Tablero {
int i=0,h=0,o = 0,l=0;


public:
int matriz[8][8];

 Tablero(){


	while (i <8)
	{
		
		
		
		l = o%2;
		
		if (h == 8)
		{
		
			i++;
			
			h = 0;
			if (l == 0)
			{
				l = 1;
				o = 1;
				
			}
			else
			{
				if(l == 1)
				{
			
				
				l = 0;
				o = 0;
				
				}
			}
			
			
		}
			
		matriz[i][h] = l;
		
		o++;
		
		
		h++;

		
		
		
	}
	
	
	}
	
public:
void mostrar(){
	int g = 0,t = 0;
	while (t < 8)
	{
		printf ("%d",matriz[t][g]);

		g++;
		if (g == 8)
		{
			printf ("\n");
			g = 0;
			t++;
		}
	
	}
	
	
}


void modificar(int posi,int posj, int x){
	matriz[posi][posj] = x;
	
	
	
	
}

};

class Alfil{
int posx =0, posy = 0;
int pinta = 0;
public:

Alfil(int p,Tablero tablero){

	pinta = p;
	
	if (pinta == 1)
	{
		posx = 5;
		posy = 0;
		
		
		
		
	}
	
	if (pinta == 0)
	{
		posy = 0;
		posx = 2;
		
		
		
		
		
	}
	
	tablero.modificar(posy,posx,5);


	
	
	
	
	
}
public:
void mover(bool arriba,bool derecha,int espacios)
{
		if (pinta == 0)
		{
			
			tablero[posy][posx] = 0;
			
		}
		if (pinta == 1)
		{
			
			tablero[posy][posx] = 1;
			
		}
	
	if (arriba == true and derecha == true)
	{
		
			if (espacios >= 8)
			{
				posy = 0;
				posx = 6;
				return;
			}
		
		
		for (int i = 1;i <= espacios; i++)
		{
			
			posy = posy + 1;
			posx = posx + 1;
			
		}
		
	}
	
	if (arriba == false and derecha == false)
	{

		if (espacios >= 8)
		{
			
			posy = 6;
			posx = 0;
			return;
		}
		
		for (int i = 1;i <= espacios; i++)
		{
			
			
			posy = posy + 1;
			posx = posx + 1;
			
			
		}
		
	}
	
	tablero[posy][posx] = 5;
	
	
}







};





	
int main(void){

Tablero tablero;
Alfil alfil(1,tablero);

tablero.mostrar(); 









	
	return 0;
	

}
	
	
	

