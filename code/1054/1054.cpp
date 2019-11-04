#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main() {
    int N, count = 0;
    char a[50], b[50];
    double temp, sum = 0.0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        scanf("%s", a);
        sscanf(a, "%lf", &temp);
        sprintf(b, "%.2f", temp);

        int flag = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] != b[i]) {
                flag = 1;
                break;
            }
        }

        if (flag || temp < -1000 || temp > 1000) {
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        } else {
            sum += temp;
            count++;
        }
    }

    if (count == 1) printf("The average of 1 number is %.2f", sum);
    else if (count > 1) printf("The average of %d numbers is %.2f", count, sum / count);
    else printf("The average of 0 numbers is Undefined");
    return 0;
}
