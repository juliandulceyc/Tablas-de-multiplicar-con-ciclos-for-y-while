#include <iostream>
using namespace std;
	
	int main()
{

	int n=1, a=1, producto, tabla;
	
	while(n<10){
		cout<<"Tabla del "<<n++<<":"<<endl;
		}
		cout<<"Seleccione una tabla de Multiplicacion: ";
		cin>>tabla;	
		
	system("cls");
	
	for(tabla;a<=9;a++){
		producto = tabla*a;
		cout<<tabla<<"*"<<a<<"="<<producto<<endl;
		}
	system("pause");
	return EXIT_SUCCESS;
	}
		