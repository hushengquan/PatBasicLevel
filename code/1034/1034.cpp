#include <iostream>
#include <cmath>
using namespace std;

// 求最大公约数
long long gcd(long n1, long n2) {return n2 == 0 ? n1 : gcd(n2, n1 % n2);}

void print_num(long long n1, long long n2) {
    if (n1 * n2 == 0) {
        printf("%s", n2 == 0 ? "Inf" : "0");
        return;
    }

    bool flag = (n1 > 0 && n2 < 0) || (n2 > 0 && n1 < 0);
    
    printf("%s", flag ? "(-" : "");
    n1 = abs(n1);
    n2 = abs(n2);
    long long x = n1 / n2;
    if (x) printf("%lld", x);

    if (n1 % n2 == 0) {
        printf("%s", flag ? ")" : "");
        return;
    }

    if (x) printf(" ");
    n1 = n1 - n2 * x;

    long long t = gcd(n1, n2);
    n1 = n1 / t;
    n2 = n2 / t;
    printf("%lld/%lld%s", n1, n2, flag ? ")" : "");
}

int main() {
    long long a, b, c, d;
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);

    print_num(a, b); cout << " + "; print_num(c, d); cout << " = "; print_num(a * d + c * b, b * d); printf("\n");
    print_num(a, b); cout << " - "; print_num(c, d); cout << " = "; print_num(a * d - c * b, b * d); printf("\n");
    print_num(a, b); cout << " * "; print_num(c, d); cout << " = "; print_num(a * c, b * d); printf("\n");
    print_num(a, b); cout << " / "; print_num(c, d); cout << " = "; print_num(a * d, b * c); printf("\n");
    return 0;
}
