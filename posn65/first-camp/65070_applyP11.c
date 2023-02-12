#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int x, cnt=0, h=0;
    
    scanf("%[^\n]", s);
    scanf("%d", &x);
    
    char a[x][x];
    
    for (int i=0; i<strlen(s); i++){
        if (cnt==x){
            cnt=0;
            h+=1;
        }
        if (s[i] == ' ') {
            a[h][cnt] = '7';
        } else {
            a[h][cnt] = s[i];
        }
        cnt++;
    }
    
    for (int i=0; i<x; i++){
        for (int j=0; j<=h; j++){
            if (a[j][i] != '\0' && a[j][i] != ' ') printf("%c", a[j][i]);
        }
    }
}
