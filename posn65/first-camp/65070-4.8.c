#include <stdio.h>
int main(){
	int x,i,j;
	printf("Enter : ");
	scanf("%d", &x);

	for (i=1; i<=x; i++){
		for (j=0; j<x-i; j++){
			printf(" ");
		}
		for (j=1; j<i; j++){
			printf("%d", j);
		}
		
		for (j=i; j>0; j--){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
