#include <stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d %d", &a, &b);
	
	for (j=0; j<=a-2; j++){
		printf("\t");
	}
	
	for (i=1; i<=b; i++){
		if ((i+a-1)%7==0) {
			printf("\t%d", i);
			printf("\n");
		} else {
			printf("\t%d", i);
		}
	}
}
