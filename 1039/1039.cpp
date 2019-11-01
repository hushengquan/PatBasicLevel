#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int ch1[256] = {0}, count = 0;
    char ch2[1002];

    char ch;
    while (ch != '\n') {
        ch = getchar();
        ch1[ch]++;
        count++;
    }

    scanf("%s", ch2);
    int self_count = 0;
    for (int i = 0; i < strlen(ch2); i++) {
        if (ch1[ch2[i]] != 0) {
            ch1[ch2[i]]--;
            count--;
        } else {
            self_count++;
        }
    }

    if (self_count == 0) {
        cout << "Yes " << count - 1;
    } else {
        cout << "No " << self_count;
    }

    return 0;
}
