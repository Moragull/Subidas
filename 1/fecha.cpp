/*Pida al usuario su a�o de nacimiento.
Calcule y muestre su edad actual (suponiendo que el a�o actual es 2025).
Muestre un mensaje personalizado (ej: "Tienes X a�os").
Validaci�n:

Si el a�o ingresado es mayor a 2025, muestra: "�A�n no naces!".

Si la edad supera 120 a�os, muestra: "�Eres inmortal?".*/

#include <iostream>
using namespace std;

int annio_edad (int fecha){
	return 2025 - fecha;
}

int main(){
	int fecha;
	cout << "Insert you year of born"<<endl;
	cin>>fecha;
	
	if (fecha > 2025){
		cout <<"You Don�t Born"<<endl;
	}
	else if (annio_edad(fecha) >= 120){
		cout << " � Your Inmortal ? "<<endl;
	}
	else{
		 cout << "You age actuallity, is: " <<annio_edad(fecha)<< " " <<endl;
	}
	return 0;
}
