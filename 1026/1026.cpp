#include <iostream>
using namespace std;

int main() {
    int c1, c2;
    cin >> c1 >> c2;

    double time = (double)(c2 - c1) / 100;
    int hh = (int)time / 3600;
    int mm = (int)(time - hh * 3600) / 60;
    int ss = (int)(time - hh * 3600 - mm * 60);
    if ((time - hh * 3600 - mm * 60) - ss >= 0.5) ss++;

    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
