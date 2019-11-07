#include <iostream>
#include <map>
#include <vector>
using namespace std;

int m, n, tol;
vector<vector<int>> v;
int book[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, -1}, {1, 1}, {-1, 1}, {-1, -1}};

bool judge(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int tx = x + book[i][0];
        int ty = y + book[i][1];
        if (tx >= 0 && tx < m && ty >= 0 && ty < n && v[x][y] - v[tx][ty] >= 0 - tol && v[x][y] - v[tx][ty] <= tol) return false;
    }

    return true;
}

int main() {
    scanf("%d%d%d", &m, &n, &tol);
    v.resize(n, vector<int>(m));

    map<int, int> m1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);
            m1[v[i][j]]++;
        }
    }

    int cnt = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (judge(i, j) && m1[v[i][j]] == 1) {
                cnt++;
                x = i + 1;
                y = j + 1;
            }
        }
    }

    if (cnt == 1) {
        printf("(%d, %d): %d", y, x, v[x - 1][y - 1]);
    } else if (cnt == 0) {
        printf("Not Exist");
    } else {
        printf("Not Unique");
    }
    return 0;
}
