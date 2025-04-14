#include <iostream>
using namespace std;

int Fairly_Local (int z, int y){
	int res =	z * y;
	return res;
}

int main() {

cout << "Prueba"<<endl;
int z=0, y=0;

cout << "digite un numero" <<endl;
cin>>z;

cout << "Digita otro numero" <<endl;
cin>>y;

cout << "La multiplicacion de ambos da " <<Fairly_Local(z, y)<< " " <<endl;
return 0;

}
