#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    int B, R = 0;
    cin >> A >> B;

    int number = 0, flag = 0;
    number = (A[0] - '0') / B;
    if ((number != 0 && A.length() > 1) || A.length() == 1) cout << number;
    number = (A[0] - '0') % B;
    for (int i = 1; i < A.length(); i++) {
        cout << ((A[i] - '0') + number * 10) / B;
        number = ((A[i] - '0') + number * 10) % B;
    }

    cout << " " << number;
    return 0;
}
