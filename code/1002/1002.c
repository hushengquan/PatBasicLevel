/***********************************************
 > @Time       : 2019-10-23
 > @Author     : hushengquan
 > @File       : 1002.c
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <stdio.h>

int main() {
    char number[11][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char num[102];
    fgets(num, 101, stdin);

    int sum = 0;
    for (int i = 0; i < 101; i++) {
        if (num[i] == '\n') {
            break;
        }
        sum += (int)(num[i] - '0');
    }


    if (sum == 0) {
        printf("ling");
        return 0;
    }
    int numbers[10] = {0};
    int count = 0;
    while (sum != 0) {
        numbers[count++] = sum % 10;
        sum /= 10;
    }

    for (int i = count - 1; i >= 0; i--) {
        if (i == count - 1) {
            printf("%s", number[numbers[i]]);
        } else {
            printf(" %s", number[numbers[i]]);
        }
    }
    return 0;
}
