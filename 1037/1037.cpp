#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6, a, b, c;
    scanf("%d.%d.%d %d.%d.%d", &n1, &n2, &n3, &n4, &n5, &n6);

    if (n1 > n4 || (n1 == n4 && n2 > n5) || (n1 == n4 && n2 == n5 && n3 > n6)) {
        swap(n1, n4); swap(n2, n5); swap(n3, n6);
        cout << "-";
    }

    a = (n6 >= n3) ? (n6 - n3) : (29 + n6 - n3);
    n5 = (n6 >= n3) ? n5 : n5 - 1;
    b = (n5 >= n2) ? (n5 - n2) : (17 + n5 - n2);
    c = (n5 >= n2) ? (n4 - n1) : (n4 - n1 - 1);

    cout << c << "." << b << "." << a;
    return 0;
}
