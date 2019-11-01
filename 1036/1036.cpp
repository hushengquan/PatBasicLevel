#include <iostream>
using namespace std;

int main() {
    int N;
    char ch;
    cin >> N >> ch;

    int column = (N * 10 + 10) / 20, flag = 0;
    for (int i = 1; i <= column; i++) {
        if (flag == 1) {
            cout << endl;
        }
        if (i == 1 || i == column) {
            for (int j = 1; j <= N; j++) {
                cout << ch;
            }
        } else {
            for (int j = 1; j <= N; j++) {
                if (j == 1 || j == N) cout << ch;
                else cout << " ";
            }
        }

        flag = 1;
    }
    return 0;
}
