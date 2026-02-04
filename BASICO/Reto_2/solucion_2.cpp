#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    string frase; int contador=0;
    cout << "Ingrese una frase: "; getline(cin,frase);
    stringstream ss(frase);
    string palabra;
    while( ss >> palabra) {
        contador++;
    }
    cout <<"Palabras:  " << contador;
    return 0;
}