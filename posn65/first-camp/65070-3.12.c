#include <stdio.h>
int main(){
    int a,b,i,j,k=1;
    scanf("%d %d", &a, &b);
    
    for (j=0; j<=a-2; j++){
        printf("\t");
    }
    
    for (i=1; i<=4*b; i++){
		if (k>b) {
			k=1;
			printf("\n");
			for(j=1;j<=(i+a-2)%7;j++) printf("\t");
		}
        if ((i+a-1)%7==0) {
            printf("\t%d\n", k++);
        } else {
            printf("\t%d", k++);
        }
    }
}
