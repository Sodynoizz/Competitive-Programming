#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i <= a - 2; i++) printf("\t");
    for (int i = 1; i <= b; i++) {
        if ((i + a - 1) % 7 == 0) {
            printf("%d\t\n", i);
        } else {
            printf("%d\t", i);
        }
    }
}