#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string bad, str;
    getline(cin, bad);
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (bad.find(toupper(str[i])) != string::npos) continue;
        else if (isupper(str[i]) && bad.find('+') != string::npos) continue;
        cout << str[i];
    }

    return 0;
}
