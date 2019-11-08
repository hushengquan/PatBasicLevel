#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int n1, n2, key, money;
        cin >> n1 >> key >> money >> n2;
        if (n < money) {
            cout << "Not enough tokens.  Total = " << n << "." << endl;
        } else {
            if ((n1 > n2 && key == 0) || (n1 < n2 && key == 1)) {
                n += money;
                printf("Win %d!  Total = %d.\n", money, n);
            } else {
                n -= money;
                printf("Lose %d.  Total = %d.\n", money, n);
                if (n == 0) {
                    cout << "Game Over."<< endl;
                    break;
                }
            }
        }
    }
    return 0;
}
