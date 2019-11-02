#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num == 2 || num == 3) return true;
    if (num % 6 != 1 && num % 6 != 5) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int count = 0, M, N, flag_count = 0;
    cin >> M >> N;

    for (int i = 2; count < N; i++) {
        if (is_prime(i)) {
            count++;
            if (count >= M) {
                flag_count++;
                cout << i;
                if (flag_count % 10 == 0) cout << "\n";
                else if (count != N) cout << " ";
            }
        }
    }
    return 0;
}
