#include <iostream>
using namespace std;
int main() {

int idioma=0,clave=1234,clave_ingresada=0,tipo_cuenta,opcion_ahorro=0,opcion_corriente=0;
int monto_retirar_ahorro=0,monto_retirar_corriente=0,saldo_total=100,clave_anterior=1234,clave_nueva=0;

cout<<"presione 1 para español"<<endl;
cout<<"presione 2 para ingles"<<endl;
cin>>idioma;
switch(idioma){

	case 1: for(int i=0;i<3;i++)
			{
			
			cout<<"introduzca su clave"<<endl;
			cin>>clave_ingresada;
			if (clave_ingresada==clave)
			{
				cout<<"presione 1 para ahorro"<<endl;
				cout<<"presione 2 para corriente"<<endl;
				cin>>tipo_cuenta;
				switch(tipo_cuenta)
				{
				case 1:
					cout<<"presione 1 para retiro"<<endl;
					cout<<"presione 2 para consulta de saldo"<<endl;
					cout<<"presione 3 para cambio de clave "<<endl;
					cin>>opcion_ahorro;
						switch(opcion_ahorro)
						{
							case 1:
								cout<<"ingrese la cantidad que desea retirar"<<endl<<"100"<<endl<<"200"<<endl;
								cout<<"300"<<endl<<"400"<<endl;
								cin>>monto_retirar_ahorro;
								switch(monto_retirar_ahorro)
								{
								
									case 100:
										if (monto_retirar_ahorro<=saldo_total)
										{
											cout<<"retire su dinero"<<endl;
											saldo_total=saldo_total-monto_retirar_ahorro;
											
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										
										break;
									case 200:
											if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 300:
											if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 400:
											if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}							
										break;
								
										default:
										cout<<"monto no valido"<<endl;	
								}
								break;
					
								
							case 2:
							cout<<"su saldo es:"<<saldo_total<<endl;
							break;
							case 3:
							cout<<"introduzca la clave anterior"<<endl;
							cin>>clave_anterior;
							if (clave_anterior==clave)
							{
								cout<<"introduzca la clave nueva"<<endl;
								cin>>clave_nueva;
								(clave=clave_nueva);
								cout<<"proceso exitoso!"<<endl;
								
								
								
							}
							else
							{
								if (clave_anterior!=clave)
								cout<<"clave incorrecta"<<endl;
							}
							break;
						default:
							cout<<"opcion no valida"<<endl;
								
									
						}
					break;
				case 2:
					cout<<"presione 1 para retiro"<<endl;
					cout<<"presione 2 para consulta de saldo"<<endl;
					cout<<"presione 3 para cambio de clave "<<endl;
					cin>>opcion_corriente;
					switch(opcion_corriente)
					{
								
								case 1:	
								cout<<"ingrese la cantidad que desea retirar"<<endl<<"100"<<endl<<"200"<<endl;
								cout<<"300"<<endl<<"400"<<endl;
								cin>>monto_retirar_ahorro;
								switch(monto_retirar_corriente)	
								{
							
									case 100:
											if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 200:
											if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 300:
											if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 400:
											if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"retire su dinero"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}							
										break;
								
									default:
										cout<<"monto no valido"<<endl;
								}
								break;
								case 2:
									cout<<"su saldo es:"<<saldo_total<<endl;
									break;
								case 3:
									cout<<"introduzca la clave anterior"<<endl;
							cin>>clave_anterior;
							if (clave_anterior==clave)
							{
								cout<<"introduzca la clave nueva"<<endl;
								cin>>clave_nueva;
								(clave=clave_nueva);
								cout<<"proceso exitoso!"<<endl;
								
								
								
							}
							else
							{
								if (clave_anterior!=clave)
								cout<<"clave incorrecta"<<endl;
							}
							break;
						
							default:
							cout<<"opcion invalida"<<endl;			
							
					}
					break;
					default:
					cout<<"opcion invalida"<<endl;		
				}
			
			
		
			}
			else 
			{ 
			if (clave_ingresada!=clave) 
			{ 
			cout<<"clave incorrecta por favor intente denuevo"<<endl;
			
			}
			}
			
		}
		break;
		
		
	case 2:
		cout<<"please enter your password"<<endl;
		cin>>clave_ingresada;
		if (clave_ingresada==clave)
			{
				cout<<"press 1 for savings"<<endl;
				cout<<"press 2 to current"<<endl;
				cin>>tipo_cuenta;
				switch(tipo_cuenta)
				{
				case 1:
					cout<<"press 1 for retirement"<<endl;
					cout<<"press 2 for balance inquiry"<<endl;
					cout<<"press 3 to change password"<<endl;
					cin>>opcion_ahorro;
						switch(opcion_ahorro)
						{
							case 1:
								cout<<"enter the amount you wish to withdraw"<<endl<<"100"<<endl<<"200"<<endl;
								cout<<"300"<<endl<<"400"<<endl;
								cin>>monto_retirar_ahorro;
								switch(monto_retirar_ahorro)
								{
								
									case 100:
											if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"withdraw your money"<<endl;
										}
										else
										{
											cout<<"insufficient balance"<<endl;
											
										}
										break;
									case 200:
												if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"withdraw your money"<<endl;
										}
										else
										{
											cout<<"insufficient balance"<<endl;
											
										}
										break;
									case 300:
												if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"withdraw your money"<<endl;
										}
										else
										{
											cout<<"insufficient balance"<<endl;
											
										}
										break;
									case 400:
												if (monto_retirar_ahorro<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_ahorro;
											cout<<"withdraw your money"<<endl;
										}
										else
										{
											cout<<"insufficient balance"<<endl;
											
										}								
										break;
								
										default:
										cout<<"option is not valid"<<endl;
					
								}	
							case 2:
							cout<<"your balance is:"<<saldo_total<<endl;
							break;
							case 3:
							cout<<"enter the old password"<<endl;
							cin>>clave_anterior;
							if (clave_anterior==clave)
							{
								cout<<"enter the new password"<<endl;
								cin>>clave_nueva;
								(clave=clave_nueva);
								cout<<"successful process!"<<endl;
								
								
								
							}
							else
							{
								if (clave_anterior!=clave)
								cout<<"password incorrect"<<endl;
							}
							
								
								
									
						}
					break;
				case 2:
					cout<<"press 1 for retirement"<<endl;
					cout<<"press 2 for balance inquiry"<<endl;
					cout<<"press 3 to change password "<<endl;
					cin>>opcion_corriente;
					switch(opcion_corriente)
					{
								
								case 1:	
								cout<<"enter the amount you wish to withdraw"<<endl<<"100"<<endl<<"200"<<endl;
								cout<<"300"<<endl<<"400"<<endl;
								cin>>monto_retirar_ahorro;
								switch(monto_retirar_corriente)
								
								{
							
									case 100:
												if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"withdraw your money"<<endl;
										}
										else
										{
											cout<<"insufficient balance"<<endl;
											
										}
										break;
									case 200:
												if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"insufficient balance"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 300:
												if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"insufficient balance"<<endl;
										}
										else
										{
											cout<<"saldo insuficiente"<<endl;
											
										}
										break;
									case 400:
												if (monto_retirar_corriente<=saldo_total)
										{
											saldo_total=saldo_total-monto_retirar_corriente;
											cout<<"withdraw your money"<<endl;
										}
										else
										{
											cout<<"insufficient balance"<<endl;
											
										}								
										break;
								
									default:
										cout<<"option is not valid"<<endl;
						break;
								}
								case 2:
									cout<<"your balance is:"<<saldo_total<<endl;
									break;
								case 3:
									cout<<"enter the old password"<<endl;
							cin>>clave_anterior;
							if (clave_anterior==clave)
							{
								cout<<"enter the new password"<<endl;
								cin>>clave_nueva;
								(clave=clave_nueva);
								cout<<"successful process!"<<endl;
								
								
								
							}
							else
							{
								if (clave_anterior!=clave)
								cout<<"password incorrect"<<endl;
								break;
							}
						
				
					break;
					
				default:
					cout<<"option is not valid"<<endl;	}
				}
				
			}
			else 
			{ 
			if (clave_ingresada!=clave) 
			{ 
			cout<<"password incorrect"<<endl;
			}
			}
		break;
		
	
	
	
		
		
		
		default:
		cout<<"opcion invalida"<<endl;
		
		
			}
system("pause");

}

