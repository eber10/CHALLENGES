#include <iostream>
#include <string>
using namespace std;
string romans(int n) {
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string result = "";
    int size = sizeof(values)/sizeof(values[0]);
    for (int i = 0; i < size; i++) {
        while (n >= values[i]) {
            result += symbols[i];
            n -= values[i];
        }
    }
    return result;
}
int main() {
    int number;
    cout <<"Enter a number: "; cin >> number;
    cout <<"Result: "<< romans(number);
    return 0;
}