/***********************************************
 > @Time       : 2019-10-29
 > @Author     : hushengquan
 > @File       : 1004.cpp
 > @Software   : vim
 > @type       : pat practice
************************************************/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string max_name, max_sno, min_name, min_sno;
    int max = -1, min = 101;

    for (int i = 0; i < n; i++) {
        string name, sno;
        int grade;
        cin >> name >> sno >> grade;

        if (grade > max) {
            max = grade;
            max_name = name;
            max_sno = sno;
        }
        if (grade < min) {
            min = grade;
            min_name = name;
            min_sno = sno;
        }
    }

    cout << max_name << " " << max_sno << endl << min_name << " " << min_sno;

    return 0;
}
