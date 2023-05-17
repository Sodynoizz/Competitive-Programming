#include <iostream>
#include <cmath>
using namespace std;

int countNonRepeated(int x, int n, int num) {
    if (x == 0) return 1;
    if (num > x || pow(num, n) > x) return 0;
    int count = 0;
    count += countNonRepeated(x, n, num+1);
    count += countNonRepeated(x - pow(num, n), n, num+1);
    return count;
}

int main() {
    int x, n;
    cin >> x >> n;
    int count = countNonRepeated(x, n, 1);
    cout << count << endl; // Output: 3
    return 0;
}