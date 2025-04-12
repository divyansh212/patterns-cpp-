#include <iostream>
using namespace std;

void pattern2(int n) {
    for(int i = 0; i < n; i++) {
        // Print spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for(int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        // New line after each row
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern2(n);
    return 0;
}
