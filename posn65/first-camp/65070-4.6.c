#include <stdio.h>
int main(){
	int N,i,j,k=65;
	printf("Enter a number : ");
	scanf("%d", &N);
	
	if (N<0 || N>200) {printf("Invalid input"); return 0;}
	
	for (i=1; i<=N;i++){
		for (j=1;j<=i;j++){
			if (k>'Z') {k='A';}
			printf("%c", k++);
			
		}
		printf("\n");
	}
	return 0;
}
