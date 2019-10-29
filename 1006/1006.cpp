/***********************************************
 > @Time       : 2019-10-29
 > @Author     : hushengquan
 > @File       : 1006.cpp
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    int value[3] = {0};
    while (num != 0) {
        value[count++] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < value[2]; i++) cout << "B";
    for (int i = 0; i < value[1]; i++) cout << "S";
    for (int i = 0; i < value[0]; i++) cout << i + 1;

    return 0;
}
