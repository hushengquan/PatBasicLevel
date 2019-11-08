#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n1, n2, hash[] = {1, 2, 4, 8, 16}, opt[1010][110] = {0};
    scanf("%d %d", &n1, &n2);

    vector<int> true_ans(n2), full_grade(n2);
    vector<vector<int>> v(n2, vector<int>(5));
    for (int i = 0; i < n2; i++) {
        int num, ans;
        scanf("%d %d %d", &full_grade[i], &ans, &num);

        for (int j = 0; j < num; j++) {
            char ch;
            scanf(" %c", &ch);
            true_ans[i] += hash[ch - 'a'];
        }
    }

    for (int i = 0; i < n1; i++) {
        double grade = 0;
        for (int j = 0; j < n2; j++) {
            getchar();
            int num;
            scanf("(%d", &num);
            for (int z = 0; z < num; z++) {
                char ch;
                scanf(" %c)", &ch);
                opt[i][j] += hash[ch - 'a'];
            }

            int el = opt[i][j] ^ true_ans[j];
            if (el) {
                if ((opt[i][j] | true_ans[j]) == true_ans[j]) {
                    grade += full_grade[j] * 1.0 / 2;
                }
                if (el) {
                    for (int k = 0; k < 5; k++) {
                        if (el & hash[k]) v[j][k]++;
                    }
                }
            } else {
                grade += full_grade[j];
            }
        }

        printf("%.1f\n", grade);
    }

    int max = 0;
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < 5; j++) {
            max = max > v[i][j] ? max : v[i][j];
        }
    }

    if (max == 0) {
        printf("Too simple\n");
    } else {
        for (int i = 0; i < n2; i++) {
            for (int j = 0; j < v[i].size(); j++) {
                if (max == v[i][j]) {
                    printf("%d %d-%c\n", max, i + 1, 'a' + j);
                }
            }
        }   
    }
    return 0;
}
