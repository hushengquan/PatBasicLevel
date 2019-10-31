#include <iostream>
using namespace std;

int main() {
    int N;
    char ch;
    cin >> N >> ch;

    int book[100] = {1}, num = 0;
    for (int i = 1; i < 100; i++) {
        book[i] = 2 * i * i - 1;
        if (N < book[i] && N >= book[i - 1]) {
            num = i - 1;
            break;
        }
    }

    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= num - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
        }
        printf("\n");
    }
    for (int i = 2; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
        }
        printf("\n");
    }
    cout << N - book[num];
    return 0;
}
