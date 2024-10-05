#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char s[10000];
    bool cap = false, small = false;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') cap = true;
        else small = true;
    }

    if (cap && small) printf("Mix");
    else if (cap && !small) printf("All Capital Letter");
    else printf("All Small Letter");
}