#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, key, first;
    scanf("%d%d%d", &n, &key, &first);

    map<string, int> m;
    int flag = 0, count = first - 1;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (m[str] == 1) count++;
        if (i == count && m[str] == 0) {
            flag = 1;
            cout << str << endl;
            m[str] = 1;
            count += key;
        }
    }

    if (flag == 0) {
        cout << "Keep going...";
    }

    return 0;
}
