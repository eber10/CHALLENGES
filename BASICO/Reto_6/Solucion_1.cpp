#include <iostream>
#include <windows.h>
using namespace std;
int sumarDias(int diaNac, int mesNac, int anioNac, int diaAct, int mesAct, int anioAct) {
    int n = (anioAct - anioNac) - 1;
    int contador; int diasNacidos, diasActual;
    for (int i=1; i<=n; i++) {
        if ((anioNac+i)%4== 0) {
            contador+=366;
        } else if ((anioNac+i)% 400 != 0) {
            contador+=365;
        } else {
            contador+=366;
        }
    }
    if (anioNac%4==0 or anioNac%400==0) {
        diasNacidos=(366-((366*(mesNac-1))/12))-diaNac;    
    } else {
        diasNacidos=(365-((365*(mesNac-1))/12))-diaNac;
    } 
    if (anioAct%4==0 or anioAct%400==0) {
        diasActual=(366-((366*(12-(mesAct-1)))/12))+diaAct;    
    } else {
        diasActual=(365-((365*(12-(mesAct-1)))/12))+diaAct;
    }
    return contador+diasNacidos+diasActual;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int diaNac, mesNac, anioNac, diaAct, mesAct, anioAct;
    cout << "Fecha de Nacimiento \n";
    cout << "--------------------\n";
    cout << "Día: "; cin >> diaNac;
    cout << "Mes: "; cin >> mesNac;
    cout << "Año: "; cin >> anioNac;
    cout << "Fecha Actual   \n";
    cout << "-------------------\n";
    cout << "Día:"; cin >>diaAct;
    cout << "Mes:"; cin >>mesAct;
    cout << "Año:"; cin >>anioAct;
    cout << "Vives "<< sumarDias(diaNac,mesNac,anioNac,diaAct,mesAct,anioAct) <<" días ";
    return 0;
}