#include <stdio.h>

int k = 0;
int a[1000000];

int function(int n, int i) {
    if (i < 1) return n;
    n = function(n + 1, i - 1) + function(k, 0);
    return n;
}

int main() {
    for (int i = 0; i < 1000000; i++) {
        if (i == 9) break;
        k += i;
        a[i] = function(i, i);
    }
    printf("%p", &a[8]);
}