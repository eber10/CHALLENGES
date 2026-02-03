#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num1, num2;
    cout <<" Ingrese los dos número dejando un espacio: "; cin >> num1 >> num2;
    num1 == num2 ? cout << "Ambos son iguales"
    : cout << (num1 > num2 ? num1 : num2) << " Es mayor ";
    return 0;
}
