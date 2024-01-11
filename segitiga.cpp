#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Masukkan Input: ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        for (int j = i; j < input; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "^";
        }
        cout << "\n";
    }

    return 0;
}