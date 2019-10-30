#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct student {
    int sno, de, cai;
};

int cmp(struct student a, struct student b) {
    if ((a.de + a.cai) != (b.de + b.cai)) return (a.de + a.cai) > (b.de + b.cai);
    else if (a.de != b.de) return a.de > b.de;
    else return a.sno < b.sno;
}

int main() {
    int n, low, high;
    cin >> n >> low >> high;

    vector<student> v[4];
    int count = n;
    for (int i = 0; i < n; i++) {
        student s;
        scanf("%d %d %d", &s.sno, &s.de, &s.cai);
        if (s.de < low || s.cai < low) count--;
        else if (s.de >= high && s.cai >= high) v[0].push_back(s);
        else if (s.de >= high && s.cai < high) v[1].push_back(s);
        else if (s.de < high && s.cai < high && s.de >= s.cai) v[2].push_back(s);
        else v[3].push_back(s);
    }
    cout << count << endl;

    for (int i = 0; i < 4; i++) {
        sort(v[i].begin(), v[i].end(), cmp);
        for (int j = 0; j < v[i].size(); j++) {
            printf("%d %d %d\n", v[i][j].sno, v[i][j].de, v[i][j].cai);
        }
    }

    return 0;
}
