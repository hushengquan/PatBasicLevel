#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int data[100000], next[100000], key, N, first, number[100000];
    cin >> first >> N >> key;

    for (int i = 0; i < N; i++) {
        int address;
        cin >> address;
        cin >> data[address] >> next[address];
    }

    int count = 0;
    while (first != -1) {
        number[count++] = first;
        first = next[first];
    }

    for (int i = 0; i < (count - count % key); i += key) {
        reverse(begin(number) + i, begin(number) + i + key);
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%05d %d %05d\n", number[i], data[number[i]], number[i + 1]);
    }
    printf("%05d %d -1", number[count - 1], data[number[count - 1]]);

    return 0;
}
