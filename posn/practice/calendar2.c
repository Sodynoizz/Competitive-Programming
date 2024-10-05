#include <stdio.h>
int main() {
    int a, b, temp = 1;
    scanf("%d %d", &a, &b);

    for (int i = 0; i <= a - 2; i++) printf("\t");
    for (int i = 1; i <= 4 * b; i++) {
        if (temp > b) {
            temp = 1; printf("\n");
            for (int j = 1; j <= (i + a - 2) % 7; j++) printf("\t");
        }
        if ((i + a - 1) % 7 == 0) printf("%d\n", temp++);
        else printf("%d\t", temp++);
    }
    return 0;
}