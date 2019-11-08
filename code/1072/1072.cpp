#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, k, ans1 = 0, ans2 = 0;
    cin >> n >> k;
    map<int, bool> m;
    
    for (int i = 0; i < k; i++) {
        int num;
        scanf("%d", &num);
        m[num] = true;
    }

    for (int i = 0; i < n; i++) {
        char name[5];
        int num, flag = 0;
        scanf("%s %d", name, &num);
        for (int j = 0; j < num; j++) {
            int n3;
            scanf("%d", &n3);
            if (m[n3]) {
                ans2++;
                if (!flag) {
                    printf("%s: %04d", name, n3);
                    flag = 1;
                } else {
                    printf(" %04d", n3);
                }
            }
        }
        if (flag == 1) {
            ans1++;
            cout << endl;
        }
    }

    printf("%d %d", ans1, ans2); 
    return 0;
}
