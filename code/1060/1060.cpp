#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b) {return a > b;}

int main() {
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);

    int count = 1;
    for (int i = 0; i < N; i++) {
        if (v[i] > count) {
            count++;
        }
    }

    cout << count - 1;
    return 0;
}
