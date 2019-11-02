/***********************************************
 > @Time       : 2019-10-29
 > @Author     : hushengquan
 > @File       : 1005.cpp
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b) {return a > b;}

int main() {
    int n, key, flag = 0;
    cin >> n;
    int book[10000];
    vector<int> num(n);

    for (int i = 0; i < n; i++) {
        cin >> key;
        num[i] = key;

        while (key != 1) {
            if (key % 2 != 0) key = 3 * key + 1;
            key /= 2;
            if (book[key] == 1) break;
            book[key] = 1;
        }
    }

    sort(num.begin(), num.end(), cmp);
    for (int i = 0; i < num.size(); i++) {
        if (book[num[i]] == 0) {
            if (flag) cout << " ";
            cout << num[i];
            flag = 1;
        }
    }
    return 0;
}
