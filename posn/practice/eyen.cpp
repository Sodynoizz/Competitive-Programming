#include <stdio.h>
#include <string.h>

int main() {
    char s[13], res = 0, pow = 0; scanf("%s", s);
    for (int i = strlen(s) - 1; i >= 0; i--) { if (s[i] == '1') res += (1 << pow); pow++; }
    printf("%d", res);
    return 0;
}