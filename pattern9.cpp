#include <iostream>
using namespace std;

void pattern2(int n) {
    for(int i = 1; i < n; i++) {
        int start = i % 2 == 0 ? 0 : 1;  // Alternate starting value based on row number

        for(int j = 0; j < i; j++) {
            cout << start;
            start = 1 - start;  // Flip between 0 and 1
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern2(n);
    return 0;
}
