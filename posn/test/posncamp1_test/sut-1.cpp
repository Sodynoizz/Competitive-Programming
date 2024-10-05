/*
TASK: prime
LANG: C++
AUTHOR: YourName YourLastName
CENTER: SUT
*/
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a == 1 || a == 0) return false;
        if (!a % i) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin >> a >> b;
    int twin = 0, cousin = 0, sexy = 0;
    for (int i = a; i < b; i++) {
        for (int j = a + 1; j < b - 1; j++) {
            if (isPrime(i) && isPrime(j)) {
                if (j - i == 2) twin++;
                if (j - i == 4) cousin++;
                if (j - i == 6) sexy++;
            }
        }
    }
    cout << twin << '\n' << cousin << '\n' << sexy; 
    return 0;
}