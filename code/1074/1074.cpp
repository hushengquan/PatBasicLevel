#include <iostream>
#include <vector>
using namespace std;

int main() {
    string a, b, c, ans;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    ans = a;

    int len1 = a.length(), len2 = b.length(), len3 = c.length();
    b.insert(0, len1 - len2, '0');
    c.insert(0, len1 - len3, '0');

    int carry = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        int mod = a[i] == '0' ? 10 : (a[i] - '0');
        ans[i] = (b[i] - '0' + c[i] - '0' + carry) % mod + '0';
        carry = (b[i] - '0' + c[i] - '0' + carry) / mod;
    }

    if (carry != 0) {
        ans = '1' + ans;
    }

    int flag = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (flag == 1 || ans[i] != '0') {
            flag = 1;
            cout << ans[i];
        }
    }

    if (flag == 0) cout << 0;
    return 0;
}
