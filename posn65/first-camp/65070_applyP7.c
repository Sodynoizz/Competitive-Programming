#include <stdio.h>
int main(){
    char k='A';
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    
    for (int i=0; i<z; i++){
        for (int j=0; j<y; j++){
            if (k=='A'+x) k='A';
            printf("%c", k);
            k++;
        }
        printf("\n");
        k='A'; 
        k+=i+1;
    }
}
