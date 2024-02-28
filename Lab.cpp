#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void printPattern(int size) {
    for (int i = size; i > 0; i--) {
        cout << string(size - i, ' ') << string(i, '*');
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {

    SetConsoleOutputCP(1251);

    int size;
    cout << "¬вед≥ть к≥льк≥сть л≥н≥й: ";
    cin >> size;
    printPattern(size);
    return 0;
}

