#include <stdio.h>
int main(){
	int x,i,j;
	printf("Enter : ");
	scanf("%d", &x);
	
	for (i=0;i<x;i++){
		for (j=0;j<i;j++){
			printf(" ");
		}
		printf("\\");
		
		for (j=0; j<2*(x-i-1);j++){
			printf(" ");
		}
		
		printf("/\n");	
	}	
}
