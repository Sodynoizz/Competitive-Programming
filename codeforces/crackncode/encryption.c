#include <stdio.h>
#include <string.h>

int main() {
    for (int i = 0; i < 5; i++) {
        char s[10005]; scanf("%s", s);
        int a[strlen(s)], b[strlen(s)][strlen(s)], k = 0;
        for(int j = 0; j < 8 * strlen(s); j++) a[k] = 0 != (s[j/8] & 1 << (~j&7)), k++;
        for (int j = 0; j < k; i++) {
            if (a[j + 1] == 0) {
                
            } 
        }
    }
}