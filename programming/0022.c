#include <stdio.h>
int main() {
    int n; scanf("%d", &n); 
    int k = !(n % 2) ? n - 1 : n;
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (j == k / 2 - i || j == k / 2 + i || j == i - n / 2 || i + j == n + k / 2 - 1) 
                printf("*");
            else printf("-");
        }
        printf("\n");
    }
}