#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num;
    cout << "Ingrese un número: "; cin >> num;
    cout << "Último Dígito: " << num % 10;      
    return 0;
}