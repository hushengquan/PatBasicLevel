#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    int N, count = 0;
    double average = 0.0;
    cin >> N; 

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        int flag = 0, nums = 0;
        if (stoi(str) < -1000 || stoi(str) > 1000) flag = 1;
        for (int j = 0; j < str.length(); j++) {
            if (str[i] != '-' && str[i] != '.' && !isdigit(str[i])) {
                flag = 1;
                break;
            }
            if (str[i] == '.') nums++;
            if (nums > 1) flag = 1;
        }

        if (flag == 0) {
            average += stoi(str);
            count++;
        } else {
            cout << "ERROR: " << str << " is not a legal number" << endl;
        }
    }

    if (count == 0) {
        printf("The average of 0 numbers is Undefined\n");
    } else {
        average /= count;
        printf("The average of %d numbers is %.2f\n", count, average);
    }
    return 0;
}
