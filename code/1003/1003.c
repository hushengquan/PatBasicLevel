/***********************************************
 > @Time       : 2019-10-24
 > @Author     : hushengquan
 > @File       : 1003.c
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <stdio.h>
#include <string.h>

int isPAT(char* ch) {
    if (strlen(ch) < 3) {
        return 0;
    }

    int flag_before = 0, flag_after = 0;
    int before = 0, after = 0, mid = 0;

    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] != 'P' && ch[i] != 'A' && ch[i] != 'T') {
            return 0;
        }

        if (flag_before == 0 && ch[i] != 'P') {
            before++;
        } else if (flag_before == 0 && ch[i] == 'P') {
            flag_before = 1;
        } else if (flag_before == 1 && flag_after == 0 && ch[i] != 'T') {
            mid++;
        } else if (flag_before == 1 && flag_after == 0 && ch[i] == 'T') {
            flag_after = 1;
        } else if (flag_after == 1) {
            after++;
        }
    }

    if (mid == 0) {
        return 0;
    }

    if (before * mid == after) {
        return 1;
    }
    return 0;
}

int main() {
    int n = 0;
    char ch[11][101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", ch[i]);
    }

    for (int i = 0; i < n; i++) {
        if (isPAT(ch[i])) {
            printf("YES");
        } else {
            printf("NO");
        }

        if (i != n - 1) {
            printf("\n");
        }
    }
    return 0;
}
