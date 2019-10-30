#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string a, b, c, d, week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    cin >> a >> b >> c >> d;

    char ch[2];
    int i = 0, j = 0;
    while (i < a.length() && i < b.length()) {
        if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
            ch[0] = a[i];
            break;
        }
        i++;
    }
    i++;
    while (i < a.length() && i < b.length()) {
        if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))) {
            ch[1] = a[i];
            break;
        }
        i++;
    }
    while (j < c.length() && j < d.length()) {
        if (c[j] == d[j] && isalpha(c[j])) {
            break;
        }
        j++;
    }

    cout << week[ch[0] - 'A'];
    int hh = isdigit(ch[1]) ? (ch[1] - '0') : (ch[1] - 'A' + 10);
    printf(" %02d:%02d", hh, j);
    return 0;
}
