#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long N, p;
    cin >> N >> p;
    vector<long long> arr(N);
    
    for (long long i = 0; i < N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    long long result = 0, temp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + result; j < N; j++) {
            if (arr[j] <= arr[i] * p) {
                temp = j - i + 1;
                if (result < temp) {
                    result = temp;
                }
            } else {
                break;
            }
        }
    }

    cout << result;
    return 0;
}
