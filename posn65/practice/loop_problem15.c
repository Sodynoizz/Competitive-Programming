#include <stdio.h>
int main(){
	int x, a=0, b=1;
	scanf("%d", &x);
	
	for (int i=0; i<=x;i++){
		if ((i+1)%2==0){
			for (int j=0; j<x; j++){
				printf(" ");	
			}
		}
		else {
			for (int j=0; j<x-i+1; j++){
				printf(" ");	
			}
		}
		
		for (int k=0; k<i; k++){
			if (a>25) a=0;
			printf("%c", a+65);
			a++;		
		}
		printf("\n");
	}

}
