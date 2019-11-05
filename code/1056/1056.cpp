#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sum += num * 10 * (N - 1) + num * (N - 1);
    }

    cout << sum;
    return 0;
}
