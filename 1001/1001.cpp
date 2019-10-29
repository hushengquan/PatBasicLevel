/***********************************************
 > @Time       : 2019-10-29
 > @Author     : hushengquan
 > @File       : 1001.cpp
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (n != 1) {
        if (n % 2 != 0) {
            n = 3 * n + 1;
        }
        n /= 2;
        count++;
    }

    cout << count;
    return 0;
}
