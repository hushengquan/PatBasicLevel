#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<set<char>> right(n);
    vector<int> grade(n), error_num(n);

    for (int i = 0; i < n; i++) {
        int n1, n2;
        scanf("%d %d %d", &grade[i], &n1, &n2);

        for (int j = 0; j < n2; j++) {
            char ch;
            scanf(" %c", &ch);
            right[i].insert(ch);
        }
    }

    int flag = 0, max = 0;
    for (int i = 0; i < m; i++) {
        int score = 0;
        scanf("\n");
        for (int j = 0; j < n; j++) {
            if (j != 0) scanf(" ");
            int nums = 0;
            scanf("(%d", &nums);
            set<char> s;
            for (int z = 0; z < nums; z++) {
                char ch;
                scanf(" %c", &ch);
                s.insert(ch);
            }
            scanf(")");

            if (s != right[j]) {
                error_num[j]++;
                flag = 1;
                if (error_num[j] > max) {
                    max = error_num[j];
                }
            } else {
                score += grade[j];
            }
        }

        cout << score << endl;
    }

    if (flag == 0) {
        cout << "Too simple" << endl;
        return 0;
    }

    cout << max;
    for (int i = 0; i < n; i++) {
        if (max == error_num[i]) cout << " " << i + 1;
    }

    return 0;
}
