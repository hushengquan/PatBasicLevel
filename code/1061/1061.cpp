#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> ans(n), grade(n);
    for (int i = 0; i < n; i++) {
        cin >> grade[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            if (ans[j] == num) sum += grade[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
