#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	
	for (int i=0; i<=x;i++){
		for (int j=0; j<x-1; j++){
			printf(" ");	
		}
		
		for (int k=i; k>0; k--){
			printf("%d", k);
		}
		
		for (int k=0; k<i; k++){
			printf("%d", k+1);	
		}
		printf("\n");
	}

}
