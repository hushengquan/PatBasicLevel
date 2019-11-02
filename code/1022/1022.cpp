#include <iostream>
using namespace std;

int main() {
    int A, B, D;
    cin >> A >> B >> D;

    int num = A + B;
    int book[100] = {0}, count = 0;

    if (num == 0) {
        cout << "0";
        return 0;
    }

    while (num != 0) {
        book[count++] = num % D;
        num = num / D;
    }

    for (int i = count - 1; i >= 0; i--) {
        cout << book[i];
    }
    return 0;
}
