#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 0;
    for (int i = 0; i < N; i++) {
        int n1, n2, n3, n4;
        cin >> n1 >> n2 >> n3 >> n4;
        if ((n2 == n3 + n1) && (n4 != n3 + n1)) b++;
        else if ((n4 == n3 + n1) && (n2 != n1 + n3)) a++;
    }

    cout << a << " " << b;
    return 0;
}
