#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int max = -1, index = 0;
    int book[26] = {0};
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) book[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (book[i] > max) {
            max = book[i];
            index = i;
        }
    }

    printf("%c %d", index + 'a', max);
    return 0;
}
