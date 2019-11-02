#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, book[100001] = {0};
    scanf("%d", &N);
    vector<int> a(N), b(N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    sort(a.begin(), a.end());
    int count = 0, max = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == b[i] && b[i] > max) {
            book[count++] = b[i];
        } 
        if (b[i] > max) {
            max = b[i];
        }
    }

    cout << count << endl;
    for (int i = 0; i < count; i++) {
        if (i != 0) cout << " ";
        cout << book[i];
    }
    cout << endl;

    return 0;
}
