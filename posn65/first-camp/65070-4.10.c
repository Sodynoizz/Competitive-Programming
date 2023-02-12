#include <stdio.h>
int main(){
	int N,i,j,k=0;
	printf("Enter a number : ");
	scanf("%d", &N);
	
	if (N<0 || N>200) {printf("Invalid input"); return 0;}
	
	for (i=1; i<=N;i++){
		for (j=k+i-1;j>=k;j--){
			printf("%c", j%26+ 'A');
		}
		k += i;
		printf("\n");
	}
	return 0;
}
