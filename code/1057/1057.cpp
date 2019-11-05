#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            sum += tolower(str[i]) - 'a' + 1;
        }
    }

    int count0 = 0, count1 = 0;
    while (sum != 0) {
        if (sum % 2 == 1) count1++;
        else count0++;
        sum /= 2;
    }

    cout << count0 << " " << count1;
    return 0;
}
