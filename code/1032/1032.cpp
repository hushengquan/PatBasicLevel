#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N + 1);

    for (int i = 0; i < N; i++) {
        int num, grade;
        cin >> num >> grade;
        v[num] += grade;
    }

    int max = -1, index = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
            index = i;
        }
    }

    cout << index << " " << v[index];
    return 0;
}
