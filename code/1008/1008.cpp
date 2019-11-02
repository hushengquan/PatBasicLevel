/****************************************************
 > @Time       : 2019-10-29
 > @Author     : HuShengQuan
 > @File       : 1008.cpp
 > @Software   : vim
 > @type       : pat practice
*****************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> num(n);

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    m = m % n;
    if (m != 0) {
        reverse(begin(num), begin(num) + n);
        reverse(begin(num), begin(num) + m);
        reverse(begin(num) + m, begin(num) + n);
    }

    cout << num[0];
    for (int i = 1; i < n; i++) {
        cout << " " << num[i];
    }

    return 0;
}
