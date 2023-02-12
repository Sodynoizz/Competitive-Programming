#include <stdio.h>
#include <string.h>
int main(){
    char s[100], run=0;
    int x,y;
    scanf("%s %d %d", s, &x, &y);
    
    for (int i=0; i<y; i++){
        for (int j=0; j<x; j++){
            if (run==strlen(s)) run=0;
            printf("%c", s[run]);
            run++;
        }
        printf("\n");
        run=0;
        run+=i+1;
    }
}
