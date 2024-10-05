#include <stdio.h>

int main() {
    float n, m;
    scanf("%f %f", &n, &m);
    float t = m * 3600 / (500 * n);
    printf("%.2f", t);
}