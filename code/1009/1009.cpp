#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;
    string str;
    while (1) {
        cin >> str;
        s.push(str);
        char ch = getchar();
        if (ch == '\n') break;
    }
    cout << s.top();
    s.pop();

    while (!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }

    return 0;
}
