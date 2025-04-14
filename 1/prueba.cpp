#include <iostream>
using namespace std;

int Invertidor (int num, int invertido=0){
	return num ? Invertidor(num / 10, invertido * 10 + num % 10) : invertido;
}
int main(){
	int num=0;
	cout << "\tTngresa un digito"<<endl;
	cin>>num;
	
	cout << "..El numero original es: " <<num<< " "<<endl;
	cout << "El numero inveritido es: "<<Invertidor(num)<< " "<<endl;
	return 0;
}
