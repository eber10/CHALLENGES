#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num, ultimoDig, aux;
    cout << "Ingrese un número: "; cin >> num;
    ultimoDig = num;
    aux = num;
    while(aux != 0) {
        ultimoDig = ultimoDig % 10;
        aux = ultimoDig / 10;
    }
    cout << "Último Dígito: " << ultimoDig;
    return 0;
}