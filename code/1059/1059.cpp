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
    int M, N, book[10000] = {0};
    cin >> M;

    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        book[num] = i + 1;
    }

    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        if (book[num] == 100000) printf("%04d: Checked\n", num);
        else {
            if (book[num] == 1) {
                printf("%04d: Mystery Award\n", num);
                book[num] = 100000;
            } else if (book[num] == 0) {
                printf("%04d: Are you kidding?\n", num);
                continue;
            } else if (is_prime(book[num])) {
                printf("%04d: Minion\n", num);
                book[num] = 100000;
            } else {
                printf("%04d: Chocolate\n", num);
                book[num] = 100000;
            }
        }
    }
    return 0;
}
