#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R1, P1, R2, P2;
    cin >> R1 >> P1 >> R2 >> P2;
    double R = R1 * R2 * cos(P1 + P2);
    double P = R1 * R2 * sin(P1 + P2);

    int flag1 = 1, flag2 = 1;
    if (fabs(R) < 0.01) flag1 = 0;
    if (fabs(P) < 0.01) flag2 = 0;

    if (flag1 == 0 && flag2 == 0) printf("0");
    else if (flag1 != 0 && flag2 == 0) printf("%.2f+0.00i", R);
    else if (flag1 == 0 && flag2 != 0) {
        if (P < 0) printf("0.00-%.2fi", fabs(P));
        else printf("0.00+%.2fi", P);
    } else {
        if (P < 0) printf("%.2f-%.2fi", R, fabs(P));
        else printf("%.2f+%.2fi", R, P);
    }
    return 0;
}

