#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int a, c;
    char fu1, fu2, b[10000];

    scanf("%c%d.%[0-9]E%c%d", &fu1, &a, &b[0], &fu2, &c);
    if (fu1 == '-') cout << "-";

    if (fu2 == '+' || c == 0) {
        cout << a;
        for (int i = 0; i < c || i < strlen(b); i++) {
            if (i == c) {
                cout << ".";
            }
            printf("%c", i < strlen(b) ? b[i] : '0');
        }
    } else {
        cout << "0.";
        for (int i = 0; i < c - 1; i++) {
            cout << "0";
        }
        cout << a;
        cout << b;
    }
    return 0;
}
