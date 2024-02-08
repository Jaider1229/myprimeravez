#include<iostream>
using namespace std;
int main(){
	int numero,salir,menor, mayor, suma,promedio = 1;
	double resu;
	
	cout<<"Digite el numero: "<<endl; cin>>numero;
	menor=numero;
	mayor = numero;
	suma = numero;
	
	do{

		cout<<"Digite el numero"<<endl; cin>>numero;
		suma+=numero;
		if(numero<menor){
			menor=numero;
		}
		else if(numero>mayor){
			mayor=numero;
		}
		cout<<"¿Quiere digitar un numero? "<<endl<< "1) si quiere digitar otro numero  "<<endl<<" 2)Para salir  "<<endl;
		cin>>salir;
		promedio++;	
			
	}while(salir<2);
   
    resu= suma/promedio;
	cout<<"El mayor es: "<<mayor<<endl;
	cout<<"El menor es: "<<menor<<endl;
	cout<<"La suma es: "<<suma<<endl;
	cout<<"Cantidad de numeros digitados: "<<promedio<<endl;
    cout<<"El promedio es: "<<resu<<endl;
return 0;	
	
}
