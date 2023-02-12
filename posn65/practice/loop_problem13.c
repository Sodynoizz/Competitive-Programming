#include <stdio.h>
int main(){
	int x, k=0;
	scanf("%d", &x);
	
	for (int i=x; i>0; i--){
		if (k>0){
			for (int l=0; l<k; l++) printf(" ");
		}
		for (int j=0; j<i; j++) printf("*");
		printf("\n");
		k++;
	}
}
