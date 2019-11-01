#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, A[101], B[101];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int p = 0, q = 0;
    for ( ; p < N - 1 && B[p] <= B[p + 1]; p++);
    for (q = p + 1; q < N && A[q] == B[q]; q++);

    if (q == N) {
        cout << "Insertion Sort" << endl;
        sort(A, A + p + 2);
    } else {
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;

        while (flag) {
            flag = 0;
            for (int i = 0; i < N; i++) {
                if (A[i] != B[i]) {
                    flag = 1;
                    break;
                }
            }
            k *= 2;
            for (int i = 0; i < N / k; i++) {
                sort(A + i * k, A + (i + 1) * k);
            }
            sort(A + N / k * k, A + N);
        }
    }

    for (int i = 0; i < N; i++) {
        if (i != 0) cout << " ";
        cout << A[i];
    }

    return 0;
}
