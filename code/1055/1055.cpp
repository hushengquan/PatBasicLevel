#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct person {
    string name;
    int height;
};

bool cmp(struct person a, struct person b) {
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<person> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i].name >> v[i].height;
    }
    sort(v.begin(), v.end(), cmp);

    int t = 0, row = K, m;
    while (row) {
        if (row == K) m = (N - N / K * (K - 1));
        else m = N / K;

        vector<string> ans(m);
        ans[m / 2] = v[t].name;
        int j = m / 2 - 1;
        for (int i = t + 1; i < t + m; i = i + 2) ans[j--] = v[i].name;
        j = m / 2 + 1;
        for (int i = t + 2; i < t + m; i += 2) ans[j++] = v[i].name;

        cout << ans[0];
        for (int i = 1; i < m; i++) cout << " " << ans[i];

        cout << endl;
        t += m;
        row--;
    }
    return 0;
}
