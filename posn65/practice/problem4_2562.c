#include<stdio.h>
#include <math.h>
#include <string.h>

int n, a[20005];

int main() {
    for (int i = 2; i <= 20000; i++) {
        if (a[i]) continue;
        for (int j = i * 2; j <= 20000; j += i) a[j] = 1;
    }
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if (!a[i] && !a[n / i] && i * (n / i) == n) printf("%d %d", i, n / i), exit(0);
    }
    printf("no");
}
