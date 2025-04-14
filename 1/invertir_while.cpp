#include <iostream>
using namespace std;

int invertirNumero(int num) {
    int invertido = 0;
    while(num) {  // Mientras num no sea 0
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

int main() {
    int numero = 1234;
    cout << "Original: " << numero << "\nInvertido: " << invertirNumero(numero);
    return 0;
}
