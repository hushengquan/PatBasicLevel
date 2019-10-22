/*
**@Time       : 2019-10-22
**@Author     : HuShengQuan
**@File       : 1001.go
**@Software   : vim
**@website    : https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528
**@type       : pat practice
*/

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
