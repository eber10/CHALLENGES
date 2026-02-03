#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num1, num2;
    cout << "Ingrese los dos números dejando un espacio: "; cin >> num1 >> num2;
    if (num1 > num2){
        cout << "Mayor: " << num1;
    } else if (num2 > num1) {
        cout << "Mayor: " << num2;
    } else {
        cout << "Ambos son iguales.";
    }
    return 0;
}