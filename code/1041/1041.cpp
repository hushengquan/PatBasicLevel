#include <iostream>
using namespace std;

int main() {
    string stu[1001][2];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int n1;
        string str, n2;

        cin >> str >> n1 >> n2;
        stu[n1][0] = str;
        stu[n1][1] = n2;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;

        cout << stu[num][0] << " " << stu[num][1] << endl;
    }

    return 0;
}
