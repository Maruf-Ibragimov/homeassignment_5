#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*func)(int, int);
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int choice;
    cout << "Enter 1 to add, 2 to multiply: ";
    cin >> choice;
    switch (choice) {
        case 1:
            func = add;
            break;
        case 2:
            func = multiply;
            break;
        default:
            cout << "Invalid choice" << endl;
            return 0;
    }
    cout << func(a, b) << endl;
    return 0;
}