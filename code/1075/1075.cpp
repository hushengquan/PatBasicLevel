#include <iostream>
#include <vector>
using namespace std;

int main() {
    int first, n, key;
    scanf("%d%d%d", &first, &n, &key);

    vector<int> data(100001), next(100001), v[3];
    for (int i = 0; i < n; i++) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        data[n1] = n2;
        next[n1] = n3;
    }

    int p = first;
    while (p != -1) {
        int num = data[p];
        if (num < 0) {
            v[0].push_back(p);
        } else if (num >= 0 && num <= key) {
            v[1].push_back(p);
        } else {
            v[2].push_back(p);
        }

        p = next[p];
    }

    int flag = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (flag == 0) {
                printf("%05d %d ", v[i][j], data[v[i][j]]);
                flag = 1;
            } else {
                printf("%05d\n%05d %d ", v[i][j], v[i][j], data[v[i][j]]);
            }
        }
    }

    printf("-1");
    return 0;
}
