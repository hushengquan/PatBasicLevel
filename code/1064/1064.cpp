#include <iostream>
#include <set>
using namespace std;

int count(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int N;
    cin >> N;
    set<int> s;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        s.insert(count(num));
    }

    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        if (it != s.begin()) cout << " ";
        cout << *it;
    }
    return 0;
}
