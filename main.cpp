//#1 Tablas de multiplicar
#include <iostream>
using namespace std;

int main() {
    cout << "Tabla de multiplicar del 4:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "4 x " << i << " = " << 4 * i << endl;
    }

    cout << endl;

    cout << "Tabla de multiplicar del 6:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "6 x " << i << " = " << 6 * i << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

long long factorial(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main2() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
    }

    return 0;
}
