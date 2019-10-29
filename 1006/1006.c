/***********************************************
 > @Time       : 2019-10-27
 > @Author     : hushengquan
 > @File       : 1006.c
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    int count = 0, n = num;
    while (n != 0) {
        count++;
        n /= 10;
    }

    if (count == 3) {
        int number = num / 100;
        for (int i = 1; i <= number; i++) {
            printf("B");
        }
        count--;
        num %= 100;
    }
    if (count == 2) {
        int number = num / 10;
        for (int i = 1; i <= number; i++) {
            printf("S");
        }
        count--;
    }
    if (count == 1) {
        for (int i = 1; i <= num % 10; i++) {
            printf("%d", i);
        }
    }
    return 0;
}
