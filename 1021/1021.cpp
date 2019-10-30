#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int book[11] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        book[str[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        if (book[i] != 0) {
            cout << i << ":" << book[i] << endl;
        }
    }
    return 0;
}
