#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct mooncake {
    float nums, price, one_price;
};

bool cmp(mooncake a, mooncake b) {return a.one_price > b.one_price;}
int main() {
    int N = 0, sum = 0;

    cin >> N >> sum;
    vector<mooncake> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].nums;
    }
    for (int i = 0; i < N; i++) {
        cin >> v[i].price;
        v[i].one_price = v[i].price / v[i].nums;
    }

    sort(v.begin(), v.end(), cmp);
    float ans = 0.0;
    for (int i = 0; i < N; i++) {
        if (v[i].nums <= sum) {
            ans += v[i].price;
        } else {
            ans += v[i].one_price * sum;
            break;
        }
        sum -= v[i].nums;
    }
    printf("%.02f", ans);
    return 0;
}
