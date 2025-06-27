#include <iostream>
#include <cmath>

using namespace std;

int Primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    if (numero % 2 == 0) {
        if (numero == 2) {
            return 1; // É primo (o número 2)
        } else {
            return 0; // É par, mas não é 2, então não é primo
        }
    }
    // Verifica divisores ímpares a partir de 3 até a raiz quadrada do número
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    cin >> num;

    if (Primo(num) == 1) {
        cout << "Primo" << endl;
    } else {
        cout << "Não é primo" << endl;
    }
    return 0;
}