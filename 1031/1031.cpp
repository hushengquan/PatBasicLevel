#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int N;
    string str[101];
    int quan[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char book[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

    cin >> N;
    int self_flag = 0;
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < N; i++) {
        int sum = 0, flag = 0;
        for (int j = 0; j < str[i].length() - 1; j++) {
            if (isdigit(str[i][j])) {
                sum += (str[i][j] - '0') * quan[j];
            } else {
                cout << str[i] << endl;
                flag = 1;
                self_flag = 1;
                break;
            }
        }

        if (flag) continue;
        if (str[i][str[i].length() - 1] != book[sum % 11]) {
            self_flag = 1;
            cout << str[i] << endl;
        }
    }

    if (!self_flag) cout << "All passed";
    return 0;
}
