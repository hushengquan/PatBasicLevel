#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    string pw, input;
    cin >> pw >> n;
    getchar();

    while (1) {
        getline(cin, input);
        if (input == "#") break;
        count++;
        if (count <= n && input == pw) {
            cout << "Welcome in" << endl;
            break;
        } else if (count <= n && input != pw) {
            cout << "Wrong password: " << input << endl;
            if (count == n) {
                cout << "Account locked" << endl;
                break;
            }
        }
    }
    return 0;
}

