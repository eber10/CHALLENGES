#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num;
    cout << "Ingrese un número: "; cin >> num;
    for (int i=0; i<=10; i++) {
        cout << num << " X " << i << " = " << num*i << "\n";
    }
    return 0;
}