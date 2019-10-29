/***********************************************
 > @Time       : 2019-10-29
 > @Author     : hushengquan
 > @File       : 1003.cpp
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        map<char, int> m;  //key-value类型

        int P_index, T_index;
        for (int j = 0; j < s.length(); j++) {
            m[s[j]]++;
            if (s[j] == 'P') P_index = j;
            if (s[j] == 'T') T_index = j;
        }

        if (m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && m.size() == 3 && (P_index - T_index != 1) && (P_index * (T_index - P_index - 1) == (s.length() - T_index - 1))) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
