#include <iostream>
using namespace std;
int main(){
	int n1=0;
	
	cout <<"\tIngresa un numero"<<endl;
	cin>>n1;
	
	if(n1  == 0){   //Esta condicion dice: SI n1(El numero ps) es igual a 0 v:
		cout <<"Es 0 ._."<<endl; 
	}
	else {
		cout << (n1 % 2 == 0 ? "Es Par :b" : "Es Impar Causa >:v") <<endl;
	} //El Arroz con pollo en el else es una mezcla de condicional If Else y Ternario
}     //Ternario:  (Condicion 7w7)  Si es True : Si es Falso
      //\t es Tabulario, para centrar el cout, pregunta a tu profe si esta permitido
