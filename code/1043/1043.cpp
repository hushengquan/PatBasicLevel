#include <iostream>
using namespace std;

int main() {
    int num[6] = {0};
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'P') num[0]++;
        if (str[i] == 'A') num[1]++;
        if (str[i] == 'T') num[2]++;
        if (str[i] == 'e') num[3]++;
        if (str[i] == 's') num[4]++;
        if (str[i] == 't') num[5]++;
    }

    int max = 0;
    for (int i = 0; i < 6; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    for (int i = 1; i <= max; i++) {
        if (num[0] != 0) {
            cout << 'P';
            num[0]--;
        }
        if (num[1] != 0) {
            cout << 'A';
            num[1]--;
        }
        if (num[2] != 0) {
            cout << 'T';
            num[2]--;
        }
        if (num[3] != 0) {
            cout << 'e';
            num[3]--;
        }
        if (num[4] != 0) {
            cout << 's';
            num[4]--;
        }
        if (num[5] != 0) {
            cout << 't';
            num[5]--;
        }
    }
    return 0;
}
