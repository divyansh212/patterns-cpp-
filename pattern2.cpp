#include <iostream>
using namespace std;

void pattern2(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int m;
    cin >> m;
    pattern2(m);
    return 0;
}
