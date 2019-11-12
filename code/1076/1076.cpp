#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        if (i != 0) getchar();
        for (int j = 0; j < 4; j++) {
            if (j != 0) getchar();
            char ch1, ch2;
            scanf("%c-%c", &ch1, &ch2);
            if (ch2 == 'T') {
                cout << ch1 - 'A' + 1;
            }
        }
    }

    return 0;
}
