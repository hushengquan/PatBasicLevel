/*
**@Time       : 2019-10-26
**@Author     : HuShengQuan
**@File       : 1005.c
**@Software   : vim
**@type       : pat practice
*/

#include <stdio.h>

int book[101] = {0};

void Callatz(int n) {
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            if (n <= 100 && n > 1 && book[n] == 1) {
                return;
            }
            if (n <= 100 && n > 1) {
                book[n] = 1;
            }
        } else {
            n = (3 * n + 1) / 2;
            if (n <= 100 && n > 1 && book[n] == 1) {
                return;
            }
            if (n <= 100 && n > 1) {
                book[n] = 1;
            }
        }
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);

    int ans[101] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &ans[i]);
        Callatz(ans[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ans[i] > ans[j]) {
                int tmp = ans[i];
                ans[i] = ans[j];
                ans[j] = tmp;
            }
        }
    }

    int flag = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (book[ans[i]] == 0) {
            if (flag == 0) {
                printf("%d", ans[i]);
                flag = 1;
            } else {
                printf(" %d", ans[i]);
            }
        }
    }
    return 0;
}
