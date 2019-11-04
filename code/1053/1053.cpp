#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D, count1 = 0, count2 = 0;
    double e;
    cin >> N >> e >> D;
    
    for (int i = 0; i < N; i++) {
        int n, count = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            double num;
            cin >> num;
            if (num < e) count++;
        }
        if (count > (n / 2) && n <= D) count1++;
        if (count > (n / 2) && n > D) count2++;
    }

    printf("%.1f%% %.1f%%", (double)count1 / N * 100, (double)count2 / N * 100);
    return 0;
}
