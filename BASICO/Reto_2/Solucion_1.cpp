#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    string frase; int contador=0; bool esPalabra=false;
    cout << "Ingrese una frase: "; getline(cin,frase);
    for(char letra:frase) {
        if((letra != ' ') && (!esPalabra) ){
            contador++;
            esPalabra=true;
        } else if (letra == ' ') {
            esPalabra=false;
        }
    }
    cout << "Palabras: " <<contador;
    return 0;
}