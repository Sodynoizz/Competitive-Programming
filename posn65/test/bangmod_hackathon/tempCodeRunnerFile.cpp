#include <bits/stdc++.h>

using namespace std;

const int N = 1005;
int n;

bool right (int a[N][N], int r, int c) {
    for (int i = 0; i < c; i++) if (a[r][i]) return 0;
    for (int i = r, j = c; i >= 0 && j >= 0; i--, j--) if (a[i][j]) return 0;
    for (int i = r, j = c; j >= 0 && i < n; i++, j--) if (a[i][j]) return 0;
    return 1;
}

bool rec (int a[N][N], int x) {
    if (x >= n) return 1;
    for (int k = 0; k < n; k++) {
        if (right(a, k, x)) {
            a[k][x] = 1;
            if (rec(a, x + 1)) return 1;
            a[k][x] = 0;
        }
    }
    return 0;
}

int a[N][N];

int main() {
    scanf("%d", &n);
    if (!rec(a, 0)) printf("none"), exit(0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}