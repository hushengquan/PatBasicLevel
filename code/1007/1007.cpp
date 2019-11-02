/***********************************************
 > @Time       : 2019-10-29
 > @Author     : hushengquan
 > @File       : 1007.cpp
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num == 2 || num == 3) return true;
    if (num % 6 != 1 && num % 6 != 5) return false;

    for (int i = 2; i * i <= num; i++) {
        if ((num % i == 0) || (num % (i + 2) == 0)) return false;
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 5; i <= N; i++) {
        if (is_prime(i - 2) && is_prime(i)) count++;
    }

    cout << count;
    return 0;
}
