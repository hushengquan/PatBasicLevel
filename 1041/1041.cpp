#include <iostream>
#include <vector>
using namespace std;

struct student {
    string sno;
    int test_seat_no;
    int exam_seat_no;
};

int main() {
    int N;
    cin >> N;

    vector<student> v(N);
    for (int i = 0; i < N; i++) {
        string ch;
        int n1, n2;
        cin >> ch >> n1 >> n2;
        v[n1].sno = ch;
        v[n1].exam_seat_no = n2;
    }

    int M, num[1001] = {0};
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num[i];
        cout << v[num[i]].sno << " " << v[num[i]].exam_seat_no << endl;
    }

    // for (int i = 0;)

    return 0;
}
