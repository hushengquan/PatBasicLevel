#include <iostream>
#include <string>
using namespace std;

string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {" ", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void func1(int t) {
    if (t / 13) cout << b[t / 13];
    if ((t / 13) && (t % 13)) cout << " ";
    if (t % 13 || t == 0) cout << a[t % 13];
}

void func2(string s) {
    string s1 = s.substr(0, 3), s2;
    if (s.length() > 4) s2 = s.substr(4, 3);

    int n1 = 0, n2 = 0;
    for (int i = 0; i <= 12; i++) {
        if (a[i] == s1 || a[i] == s2) n2 = i;
        if (b[i] == s1) n1 = i;
    }

    cout << n1 * 13 + n2;
}

int main() {
    int n;
    cin >> n;
    getchar();

    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        
        if (str[0] >= '0' && str[0] <= '9') {
            func1(stoi(str));
        } else {
            func2(str);
        }

        cout << endl;
    }

    return 0;
}
