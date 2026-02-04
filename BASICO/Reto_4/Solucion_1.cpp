#include <iostream>
#include <windows.h>
#include <string>
using namespace std; 
int main() {
    SetConsoleOutputCP(CP_UTF8);
    string cadena; int contador=0;
    cout << "Ingrese una cadena de texto: "; getline(cin,cadena);
    for (char letra:cadena) {
        letra=tolower(letra);
        if ((letra == 'a') or (letra=='e') or (letra=='i') or (letra=='o') or (letra=='u')){
            contador++;
        }
    }
    cout << "Total Vocales: " << contador;
    return 0;
}