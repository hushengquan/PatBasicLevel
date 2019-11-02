#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int ca = 0, cp = 0, ct = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'T') ct++;
    }

    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'P') cp++;
        if (str[i] == 'T') ct--;
        if (str[i] == 'A') sum = (sum + (cp * ct) % 1000000007) % 1000000007;
    }

    cout << sum;
    return 0;
}
