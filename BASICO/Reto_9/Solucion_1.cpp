#include <iostream>
#include <string>
using namespace std;
int main() {
    string word; char letter;
    bool verify = false;
    cout << "Enter a word or phrase: "; getline(cin, word);
    cout << "Enter a letter: "; cin >> letter;
    for (char c:word) {
        if (tolower(c) == tolower(letter)) {
            verify = true;
        }
    }
    if (verify) {
        cout << letter <<" yes, it is";
    } else {
        cout << letter << " no, it isn't";
    }
    return 0;
}