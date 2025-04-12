#include <iostream>
using namespace std;
void pattern2(int n) {
    for(int l = 0; l < n; l++) {
        // Print spaces
        for(int m = 0; m < n - l - 1; m++) {
            cout << " ";
        }
        // Print stars
        for(int f = 0; f < 2 * l + 1; f++) {
            cout << "*";
        }
        // New line after each row
        cout << endl;
    }
    for(int i = n; i >= 1; i--) {
        // Print spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print stars
        for(int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
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
