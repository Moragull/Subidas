

#include <iostream>
using namespace std;

int invertirNumero(int num, int invertido = 0) {
    return num ? invertirNumero(num / 10, invertido * 10 + num % 10) : invertido;
}

int main() {
    int numero =0;
    cout << "Ingresa un digito" <<endl;
    cin >>numero;
    cout << "Original: " << numero << "\nInvertido: " << invertirNumero(numero);
    return 0;
}
