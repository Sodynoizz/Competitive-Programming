#include <stdio.h>
#include <string.h>

int main(){
    int x=0, arr[20];
    char s[20];
    scanf("%s", s);
    for (int i=0; i<strlen(s); i++) arr[i] = s[i] - 48;
    
    for (int i=0; i<strlen(s); i++) {
        if (arr[i]==arr[i-1]) x+=arr[i];
    }
    
    printf("%d", x);
    return 0;
}