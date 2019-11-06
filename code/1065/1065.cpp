#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> book(100001, -1), cnt(100001, -1);
    for (int i = 0; i < N; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        book[n1] = n2;
        book[n2] = n1;
    }

    int M;
    cin >> M;
    vector<int> v(M);
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        v[i] = num;
        cnt[num] = 1;
    }

    set<int> s;
    for (int i = 0; i < M; i++) {
        if (book[v[i]] == -1) s.insert(v[i]);
        else if (cnt[book[v[i]]] == -1) s.insert(v[i]);
    }

    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        if (it != s.begin()) cout << " ";
        printf("05d", *it);
    }
    return 0;
}
