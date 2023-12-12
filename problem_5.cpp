#include <iostream>

using namespace std;

int main() {
    char *str = new char[100];
    cout << "Enter a string: ";
    cin >> str;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char *reversed = new char[len + 1];
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reversed << endl;
    delete[] str;
    delete[] reversed;
    return 0;
}