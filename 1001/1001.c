/***********************************************
 > @Time       : 2019-10-22
 > @Author     : hushengquan
 > @File       : 1001.c
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <stdio.h>

int main() {
    int num = 0, count = 0;

    scanf("%d", &num);

    while (num != 1) {
        if (num % 2 == 1) {
            num = (num * 3 + 1) / 2;
        } else {
            num /= 2;
        }
        count++;
    }

    printf("%d", count);
    return 0;
}
