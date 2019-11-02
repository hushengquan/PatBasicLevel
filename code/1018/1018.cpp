#include <iostream>
using namespace std;

int main() {
    int N, won = 0, ping = 0, lose = 0, jia[3] = {0}, yi[3] = {0};
    cin >> N;

    for (int i  = 0; i < N; i++) {
        char A, B;
        cin >> A >> B;
        if ((A == 'C' && B == 'J') || (A == 'J' && B == 'B') || (A == 'B' && B == 'C')) {
            won++;
            if (A == 'C') jia[1]++;
            else if (A == 'J') jia[2]++;
            else jia[0]++;
        }
        else if ((A == 'C' && B == 'C') || (A == 'B' && B == 'B' || (A == 'J' && B == 'J'))) ping++;
        else {
            lose++;
            if (B == 'C') yi[1]++;
            else if (B == 'J') yi[2]++;
            else yi[0]++;
        }
    }

    cout << won << " " << ping << " " << lose << endl;
    cout << lose << " " << ping << " " << won << endl;
    
    int max1 = 0, max2 = 0;
    for (int i = 0; i <= 2; i++) {
        if (jia[i] > max1) {
            max1 = jia[i];
        }
        if (yi[i] > max2) {
            max2 = yi[i];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (max1 == jia[i]) {
            char ch;
            if (i == 0) ch = 'B';
            else if (i == 1) ch = 'C';
            else ch = 'J';
            cout << ch << " ";
            break;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (max2 == yi[i]) {
            char ch;
            if (i == 0) ch = 'B';
            else if (i == 1) ch = 'C';
            else ch = 'J';
            cout << ch;
            break;
        }
    }
    return 0;
}
