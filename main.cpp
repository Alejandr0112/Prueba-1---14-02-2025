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