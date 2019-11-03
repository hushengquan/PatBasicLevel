#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b) {return a > b;}

int main() {
    int N, m, n;
    cin >> N;
    vector<int> v(N);
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            n = i;
        }
    }
    m = N / n;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);
    
    vector<vector<int>> ans(m, vector<int>(n));
    int count = 0;
    int level = m / 2 + m % 2;
    for (int i = 0; i < level; i++) {
        for (int j = i; j <= n - i - 1 && count < N; j++) {
            ans[i][j] = v[count++];
        }
        for (int j = i + 1; j < m - i - 1 && count < N; j++) {
            ans[j][n - 1 - i] = v[count++];
        }
        for (int j = n - 1 - i; j >= i && count < N; j--) {
            ans[m - 1 - i][j] = v[count++];
        }
        for (int j = m - i - 2; j >= i + 1 && count < N; j--) {
            ans[j][i] = v[count++];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) cout << " ";
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
