#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    double max = 0.0;
    for (int i = 0; i < N; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        double num = sqrt((double)n1 * n1 + (double)n2 * n2);
        if (num > max) max = num;
    }

    printf("%.2f", max);
    return 0;
}
