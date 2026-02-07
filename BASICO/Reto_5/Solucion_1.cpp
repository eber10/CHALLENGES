#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num; string binario=" ";
    cout << "Ingrese un número decimal: "; 
    if (!(cin >> num)) {
        cout << "Error: Ingreso un número inválido. ";
        return 0;
    } else if (num > 0) {
        while (num > 0) {
            binario = to_string(num % 2) + binario;
            num = num / 2;
        }
    } else if (num == 0) {
        binario = "0" + binario;
    } else {
        cout << "Ingree solo números decimales positivos. ";
        return 0;
    }
    cout << "Resultado: " << binario;
    return 0;   
}