#include <iostream>
using namespace std;

bool is_easy(int a, int b) {
    for (int i = 2; i <= a; i++) {
        if (b % i == 0 && a % i == 0) return false;
    }

    return true;
}

int main() {}
    int a, b, c, d, key, flag = 0;
    scanf("%d/%d %d/%d %d", &a, &b, &c, &d, &key);

    double n1 = (double)a / b, n2 = (double)c / d;
    if (n1 > n2) {
        swap(n1, n2);
    }
    for (int i = 1; i < key; i++) {
        if (!is_easy(i, key)) continue;
        double num = (double)i / key;
        if (num > n1 && num < n2) {
            if (flag == 0) {
                flag = 1;
                cout << i << "/" << key;
            } else {
                cout << " " << i << "/" << key;
            }
        }
    }

    return 0;
}

