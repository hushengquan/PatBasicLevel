#include <iostream>
using namespace std;

int main() {
    int ans[1002] = {0};
    int N;
    cin >> N;

    int index = 0, max = -1;
    for (int i = 0; i < N; i++) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ans[n1] += n3;
        if (ans[n1] > max) {
            index = n1;
            max = ans[n1];
        }
    }

    cout << index << " " << ans[index];
    return 0;
}
