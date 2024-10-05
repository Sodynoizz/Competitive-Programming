#include <stdio.h>
#include <limits.h>

int main() {
    int n, max = INT_MIN, min = INT_MAX; 
    scanf("%d", &n); int a[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("%d\n%d", min, max);
    return 0;
}