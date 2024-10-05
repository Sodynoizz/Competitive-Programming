#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        char s[13]; scanf("%s", s);
        for (int j = 0; j < 12; j++) sum += ((14 - (j + 1)) * (s[j] - '0'));
        char res = (s[12] - '0' == (11 - sum % 11) % 10) ? 'Y' : 'N';
        printf("%c\n", res);
    }
}