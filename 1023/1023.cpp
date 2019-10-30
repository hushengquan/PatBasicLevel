#include <iostream>
using namespace std;

int main() {
    int book[11] = {0};
    for (int i = 0; i < 10; i++) {
        cin >> book[i];
    }
    for (int i = 1; i < 10; i++) {
        if (book[i] != 0) {
            cout << i;
            book[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (book[i] != 0) {
            for (int j = 1; j <= book[i]; j++) {
                cout << i;
            }
        }
    }
    return 0;
}
