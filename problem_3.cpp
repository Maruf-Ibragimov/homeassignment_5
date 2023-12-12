#include <iostream>

using namespace std;

char *concatenate(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }
    char *result = new char[len1 + len2 + 1];
    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }
    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }
    result[len1 + len2] = '\0';
    return result;
}

int main() {
    char *str1 = "Hello";
    char *str2 = "World";
    char *result = concatenate(str1, str2);
    cout << result << endl;
    delete[] result;
    return 0;
}