#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int nums = 0;
    string old, young, old_birth = "1814/09/06", young_birth = "2014/09/06";

    for (int i = 1; i <= N; i++) {
        string name, birth;
        cin >> name >> birth;
        if (birth >= "1814/09/06" && birth <= "2014/09/06") {
            nums++;
            if (birth >= old_birth) {
                old_birth = birth;
                old = name;
            }
            if (birth <= young_birth) {
                young_birth = birth;
                young = name;
            }
        }
    }

    cout << nums;
    if (nums != 0) cout << " " << young << " " << old;
    return 0;
}
