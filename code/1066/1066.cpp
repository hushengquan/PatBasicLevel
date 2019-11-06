#include <iostream>
using namespace std;

int main() {
    int n, m, p, q, key;
    scanf("%d %d %d %d %d", &n, &m, &p, &q, &key);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j != 0) cout << " ";
            int num;
            scanf("%d", &num);
            if (num >= p && num <= q) printf("%03d", key);
            else printf("%03d", num);
        }
        cout << endl;
    }
    return 0;
}
