#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int len1 = A.length(), len2 = B.length();
    if (len1 > len2) B.insert(0, len1 - len2, '0');
    else A.insert(0, len2 - len1, '0');

    int flag = 0;
    char ch[14] = {"0123456789JQK"};
    if (A.length() % 2 != 0) flag = 1;
    for (int i = 0; i < A.length(); i++) {
        if (flag == 1) {
            cout << ch[(A[i] - '0' + B[i] - '0') % 13];
            flag = 0;
        } else {
            int num = B[i] - A[i];
            if (num < 0) num += 10;
            cout << ch[num];
            flag = 1;
        }
    }

    return 0;
}
