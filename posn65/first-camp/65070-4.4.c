#include <stdio.h>
int main(){
	int x,i,j;
	
	scanf("%d", &x);
	if (x<1) {printf("Invalid input"); return 0;}
	
	for (i=1; i<=x;i++){
		for (j=1; j<=i; j++){
			printf("%d ", i*j);
		}
		printf("\n");
	}
	
	return 0; 
}
