#include <bits/stdc++.h>
using namespace std;

int main() {
    double min = 500;
    int idx;
    for (int i = 7; i <= 95; i++) {
        if (min > sqrt(i / 6) + sqrt(96 / i)) {
            min = sqrt(i / 6) + sqrt(96 / i);
            idx = i;
        }
    }
    cout <<  sqrt(17 / 6) + sqrt(96 / 17);
    return 0;
}