#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i <= n / 2 + 1) {
            for (int j = 1; j <= n - i; j++) cout << " "; 
            for (int k = 1; k <= i; k++) cout << "*"; 
        } else {
            for (int j = 1; j <= i - 1; j++) cout << " "; 
            for (int k = 1; k <= n - i + 1; k++) cout << "*"; 
        }
        cout << endl;
    }
    return 0;
}
